
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc_watchdog {int enabled; int work; } ;
struct gb_svc {struct gb_svc_watchdog* watchdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct gb_svc *VAR_2)
{
 struct gb_svc_watchdog *VAR_3;

 if (!VAR_2->watchdog)
  return -VAR_0;

 VAR_3 = VAR_2->watchdog;
 if (VAR_3->enabled)
  return 0;

 VAR_3->enabled = 1;
 FUNC_0(&VAR_3->work, VAR_1);
 return 0;
}
