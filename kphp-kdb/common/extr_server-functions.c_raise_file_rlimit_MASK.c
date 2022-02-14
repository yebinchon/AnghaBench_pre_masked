
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; int rlim_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;

int FUNC_3 (int VAR_1) {
  struct rlimit VAR_2;

  if (FUNC_0(VAR_0, &VAR_2) != 0) {
    FUNC_1 ("failed to getrlimit number of files\n");
    return -1;
  } else {
    if (VAR_2.rlim_cur < VAR_1)
      VAR_2.rlim_cur = VAR_1 + 3;
    if (VAR_2.rlim_max < VAR_2.rlim_cur)
      VAR_2.rlim_max = VAR_2.rlim_cur;
    if (FUNC_2(VAR_0, &VAR_2) != 0) {
      FUNC_1 ("failed to set rlimit for open files. Try running as root or requesting smaller maxconns value.\n");
      return -1;
    }
  }
  return 0;
}
