
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_1, pid_t VAR_2)
{
  FILE *VAR_3;

  if (!VAR_1)
    return;

  if ((VAR_3 = FUNC_2 (VAR_1, "w"))) {
    FUNC_3 (VAR_3, "%d", VAR_2);
    FUNC_1 (VAR_3);
  } else {
    FUNC_0 ("Unable to open the specified pid file. %s", FUNC_4 (VAR_0));
  }
}
