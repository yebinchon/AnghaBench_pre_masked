
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc_watchdog {int pm_notifier; } ;
struct gb_svc {struct gb_svc_watchdog* watchdog; } ;


 int FUNC_0 (struct gb_svc*) ;
 int FUNC_1 (struct gb_svc_watchdog*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gb_svc *VAR_0)
{
 struct gb_svc_watchdog *VAR_1 = VAR_0->watchdog;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->pm_notifier);
 FUNC_0(VAR_0);
 VAR_0->watchdog = ((void*)0);
 FUNC_1(VAR_1);
}
