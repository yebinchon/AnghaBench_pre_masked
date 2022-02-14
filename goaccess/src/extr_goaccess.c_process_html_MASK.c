
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int filenames_idx; char** filenames; scalar_t__ stop_processing; int real_time_html; } ;
struct TYPE_8__ {int mutex; } ;
struct TYPE_7__ {int fd; int mutex; } ;
struct TYPE_6__ {scalar_t__ load_from_disk_only; } ;


 int FUNC_0 (int) ;
 TYPE_5__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*) ;
 TYPE_4__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,char const*) ;
 int FUNC_5 (scalar_t__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 scalar_t__* FUNC_10 (int,int) ;

__attribute__((used)) static void
FUNC_11 (const char *VAR_5)
{
  uint64_t *VAR_6 = ((void*)0);
  int VAR_7 = 0;


  FUNC_6 (&VAR_1.mutex);
  FUNC_4 (VAR_2, VAR_4, VAR_5);
  FUNC_7 (&VAR_1.mutex);

  if (!VAR_0.real_time_html)
    return;

  if (VAR_2->load_from_disk_only)
    return;

  FUNC_6 (&VAR_3->mutex);
  VAR_3->fd = FUNC_3 ();
  FUNC_7 (&VAR_3->mutex);


  if (VAR_3->fd == -1)
    return;

  VAR_6 = FUNC_10 (VAR_0.filenames_idx, sizeof (uint64_t));
  for (VAR_7 = 0; VAR_7 < VAR_0.filenames_idx; ++VAR_7) {
    if (VAR_0.filenames[VAR_7][0] == '-' && VAR_0.filenames[VAR_7][1] == '\0')
      VAR_6[VAR_7] = 0;
    else
      VAR_6[VAR_7] = FUNC_1 (VAR_0.filenames[VAR_7]);
  }

  FUNC_8 ();
  while (1) {
    if (VAR_0.stop_processing)
      break;

    for (VAR_7 = 0; VAR_7 < VAR_0.filenames_idx; ++VAR_7)
      FUNC_5 (&VAR_6[VAR_7], VAR_0.filenames[VAR_7]);
    FUNC_9 (800000);
  }
  FUNC_0 (VAR_3->fd);
  FUNC_2 (VAR_6);
}
