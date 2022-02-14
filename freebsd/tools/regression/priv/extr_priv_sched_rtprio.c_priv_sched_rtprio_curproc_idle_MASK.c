
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct rtprio {scalar_t__ prio; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (int ,int ,struct rtprio*) ;

void
FUNC_2(int VAR_3, int VAR_4, struct test *VAR_5)
{
 struct rtprio VAR_6;
 int VAR_7;

 VAR_6.type = VAR_1;
 VAR_6.prio = 0;
 VAR_7 = FUNC_1(VAR_2, 0, &VAR_6);
 if (VAR_3 && VAR_4)
  FUNC_0("priv_sched_rtprio_curproc_idle(asroot, injail)",
      VAR_7, -1, VAR_0);
 if (VAR_3 && !VAR_4)
  FUNC_0("priv_sched_rtprio_curproc_idle(asroot, !injail)",
      VAR_7, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_0("priv_sched_rtprio_curproc_idle(!asroot, injail)",
      VAR_7, -1, VAR_0);
 if (!VAR_3 && !VAR_4)
  FUNC_0("priv_sched_rtprio_curproc_idle(!asroot, !injail)",
      VAR_7, -1, VAR_0);
}
