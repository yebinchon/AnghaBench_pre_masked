
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc_watchdog {int enabled; int work; } ;
struct gb_svc {struct gb_svc_watchdog* watchdog; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct gb_svc *VAR_1)
{
 struct gb_svc_watchdog *VAR_2;

 if (!VAR_1->watchdog)
  return -VAR_0;

 VAR_2 = VAR_1->watchdog;
 if (!VAR_2->enabled)
  return 0;

 VAR_2->enabled = 0;
 FUNC_0(&VAR_2->work);
 return 0;
}
