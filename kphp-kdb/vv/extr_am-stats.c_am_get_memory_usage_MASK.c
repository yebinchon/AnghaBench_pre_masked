
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proc_filename ;
typedef scalar_t__ pid_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,long long*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,int) ;

int FUNC_4 (pid_t VAR_0, long long *VAR_1, int VAR_2) {
  char VAR_3[32];
  char VAR_4[4096];
  FUNC_0 (FUNC_3 (VAR_3, sizeof (VAR_3), "/proc/%d/statm", (int) VAR_0) < sizeof (VAR_3));
  if (FUNC_2 (VAR_3, VAR_4, sizeof (VAR_4)) < 0) {
    return -1;
  }
  return FUNC_1 (VAR_4, VAR_1, VAR_2);
}
