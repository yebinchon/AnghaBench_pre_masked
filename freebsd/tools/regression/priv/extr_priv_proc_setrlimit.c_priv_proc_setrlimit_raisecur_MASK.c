
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ) ;
 struct rlimit VAR_2 ;
 int FUNC_1 (int ,struct rlimit*) ;

void
FUNC_2(int VAR_3, int VAR_4, struct test *VAR_5)
{
 struct rlimit VAR_6;
 int VAR_7;

 VAR_6 = VAR_2;
 VAR_6.rlim_cur = VAR_6.rlim_max + 10;
 VAR_7 = FUNC_1(VAR_1, &VAR_6);
 if (VAR_3 && VAR_4)
  FUNC_0("priv_proc_setrlimit_raisecur(asroot, injail)", VAR_7,
      0, 0);
 if (VAR_3 && !VAR_4)
  FUNC_0("priv_proc_setrlimit_raisecur(asroot, !injail)",
      VAR_7, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_0("priv_proc_setrlimit_raisecur(!asroot, injail)",
      VAR_7, -1, VAR_0);
 if (!VAR_3 && !VAR_4)
  FUNC_0("priv_proc_setrlimit_raisecur(!asroot, !injail)",
      VAR_7, -1, VAR_0);
}
