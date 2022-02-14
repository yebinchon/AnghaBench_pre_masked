
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct rlimit {int rlim_max; int rlim_cur; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 struct rlimit VAR_1 ;
 int FUNC_1 (int ,struct rlimit*) ;

void
FUNC_2(int VAR_2, int VAR_3,
    struct test *VAR_4)
{
 struct rlimit VAR_5;
 int VAR_6;

 VAR_5 = VAR_1;
 VAR_5.rlim_cur = VAR_5.rlim_max;
 VAR_6 = FUNC_1(VAR_0, &VAR_5);
 if (VAR_2 && VAR_3)
  FUNC_0("priv_proc_setrlimit_raiscur_nopriv(asroot, injail)",
      VAR_6, 0, 0);
 if (VAR_2 && !VAR_3)
  FUNC_0("priv_proc_setrlimit_raisecur_nopriv(asroot, !injail)",
      VAR_6, 0, 0);
 if (!VAR_2 && VAR_3)
  FUNC_0("priv_proc_setrlimit_raisecur_nopriv(!asroot, injail)",
      VAR_6, 0, 0);
 if (!VAR_2 && !VAR_3)
  FUNC_0("priv_proc_setrlimit_raisecur_nopriv(!asroot, !injail)",
      VAR_6, 0, 0);
}
