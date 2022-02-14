
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int output_stdout; } ;
struct TYPE_3__ {scalar_t__ load_from_disk_only; int * pipe; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10 (uint64_t * VAR_4, const char *VAR_5)
{
  FILE *VAR_6 = ((void*)0);
  uint64_t VAR_7 = 0;

  if (VAR_5[0] == '-' && VAR_5[1] == '\0') {
    FUNC_5 (VAR_3->pipe);
    goto out;
  }
  if (VAR_3->load_from_disk_only)
    return;

  VAR_7 = FUNC_2 (VAR_5);


  if (VAR_7 == *VAR_4)
    return;

  if (!(VAR_6 = FUNC_3 (VAR_5, "r")))
    FUNC_0 ("Unable to read log file %s.", FUNC_6 (VAR_2));

  if (!FUNC_4 (VAR_6, *VAR_4, VAR_0))
    FUNC_5 (VAR_6);
  FUNC_1 (VAR_6);

  *VAR_4 = VAR_7;

out:

  if (!VAR_1.output_stdout)
    FUNC_8 ();
  else
    FUNC_7 ();

  FUNC_9 (200000);
}
