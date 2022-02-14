
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test {int dummy; } ;
struct rlimit {int rlim_max; } ;
struct TYPE_2__ {int rlim_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ) ;
 TYPE_1__ VAR_2 ;
 struct rlimit VAR_3 ;
 int FUNC_1 (int ,struct rlimit*) ;

void
FUNC_2(int VAR_4, int VAR_5, struct test *VAR_6)
{
 struct rlimit VAR_7;
 int VAR_8;

 VAR_7 = VAR_3;
 VAR_7.rlim_max = VAR_2.rlim_max;
 VAR_8 = FUNC_1(VAR_1, &VAR_7);
 if (VAR_4 && VAR_5)
  FUNC_0("priv_proc_setrlimit_raisemax(asroot, injail)", VAR_8,
      0, 0);
 if (VAR_4 && !VAR_5)
  FUNC_0("priv_proc_setrlimit_raisemax(asroot, !injail)",
      VAR_8, 0, 0);
 if (!VAR_4 && VAR_5)
  FUNC_0("priv_proc_setrlimit_raisemax(!asroot, injail)",
      VAR_8, -1, VAR_0);
 if (!VAR_4 && !VAR_5)
  FUNC_0("priv_proc_setrlimit_raisemax(!asroot, !injail)",
      VAR_8, -1, VAR_0);
}
