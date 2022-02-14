
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int filenames_idx; char** filenames; int read_stdin; scalar_t__ load_from_disk; } ;
struct TYPE_6__ {int load_from_disk_only; } ;
typedef TYPE_1__ GLog ;


 int FUNC_0 (char*,char const*) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__**,char*,int) ;
 int VAR_1 ;
 char* FUNC_4 () ;

int
FUNC_5 (GLog ** VAR_2, char *VAR_3, int VAR_4)
{
  const char *VAR_5 = ((void*)0);
  int VAR_6;


  if (VAR_3 != ((void*)0)) {

    if (FUNC_2 ((*VAR_2), VAR_3, VAR_4))
      return 1;
    return 0;
  }


  if ((VAR_5 = FUNC_4 ()))
    FUNC_0 ("%s", VAR_5);


  if (VAR_0.load_from_disk && !VAR_0.filenames_idx && !VAR_0.read_stdin) {
    (*VAR_2)->load_from_disk_only = 1;
    return 0;
  }

  for (VAR_6 = 0; VAR_6 < VAR_0.filenames_idx; ++VAR_6) {
    if (FUNC_3 (VAR_2, VAR_0.filenames[VAR_6], VAR_4)) {
      FUNC_1 (VAR_1, "%s\n", VAR_0.filenames[VAR_6]);
      return 1;
    }
  }

  return 0;
}
