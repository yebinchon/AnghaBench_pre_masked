
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct rtprio {scalar_t__ prio; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int ,int ,struct rtprio*) ;

void
FUNC_2(int VAR_2, int VAR_3, struct test *VAR_4)
{
 struct rtprio VAR_5;
 int VAR_6;

 VAR_5.type = VAR_0;
 VAR_5.prio = 0;
 VAR_6 = FUNC_1(VAR_1, 0, &VAR_5);
 if (VAR_2 && VAR_3)
  FUNC_0("priv_sched_rtprio_curproc_normal(asroot, injail)",
      VAR_6, 0, 0);
 if (VAR_2 && !VAR_3)
  FUNC_0("priv_sched_rtprio_curproc_normal(asroot, !injail)",
      VAR_6, 0, 0);
 if (!VAR_2 && VAR_3)
  FUNC_0("priv_sched_rtprio_curproc_normal(!asroot, injail)",
      VAR_6, 0, 0);
 if (!VAR_2 && !VAR_3)
  FUNC_0("priv_sched_rtprio_curproc_normal(!asroot, !injail)",
      VAR_6, 0, 0);
}
