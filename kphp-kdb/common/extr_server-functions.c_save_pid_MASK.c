
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,long) ;
 int FUNC_3 (char*,char const*) ;

void FUNC_4 (const pid_t VAR_0, const char *VAR_1) {
  FILE *VAR_2;
  if (VAR_1 == ((void*)0))
    return;

  if ((VAR_2 = FUNC_1(VAR_1, "w")) == ((void*)0)) {
    FUNC_3 ("Could not open the pid file %s for writing\n", VAR_1);
    return;
  }

  FUNC_2(VAR_2,"%ld\n", (long)VAR_0);
  if (FUNC_0(VAR_2) == -1) {
    FUNC_3 ("Could not close the pid file %s.\n", VAR_1);
    return;
  }
}
