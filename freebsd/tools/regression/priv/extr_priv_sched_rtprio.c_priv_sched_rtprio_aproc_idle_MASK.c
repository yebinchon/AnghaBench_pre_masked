
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
struct rtprio {scalar_t__ prio; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (int ,int ,struct rtprio*) ;

void
FUNC_2(int VAR_5, int VAR_6, struct test *VAR_7)
{
 struct rtprio VAR_8;
 int VAR_9;

 VAR_8.type = VAR_2;
 VAR_8.prio = 0;
 VAR_9 = FUNC_1(VAR_3, VAR_4, &VAR_8);
 if (VAR_5 && VAR_6)
  FUNC_0("priv_sched_rtprio_aproc_idle(asroot, injail)",
      VAR_9, -1, VAR_1);
 if (VAR_5 && !VAR_6)
  FUNC_0("priv_sched_rtprio_aproc_idle(asroot, !injail)",
      VAR_9, 0, 0);
 if (!VAR_5 && VAR_6)
  FUNC_0("priv_sched_rtprio_aproc_idle(!asroot, injail)",
      VAR_9, -1, VAR_1);
 if (!VAR_5 && !VAR_6)
  FUNC_0("priv_sched_rtprio_aroc_idle(!asroot, !injail)",
      VAR_9, -1, VAR_0);
}
