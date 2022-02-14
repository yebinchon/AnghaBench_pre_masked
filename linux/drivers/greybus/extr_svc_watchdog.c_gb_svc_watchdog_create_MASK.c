
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int notifier_call; } ;
struct gb_svc_watchdog {int enabled; TYPE_1__ pm_notifier; int work; struct gb_svc* svc; } ;
struct gb_svc {struct gb_svc_watchdog* watchdog; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct gb_svc*) ;
 int FUNC_3 (struct gb_svc_watchdog*) ;
 struct gb_svc_watchdog* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(struct gb_svc *VAR_4)
{
 struct gb_svc_watchdog *VAR_5;
 int VAR_6;

 if (VAR_4->watchdog)
  return 0;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->enabled = 0;
 VAR_5->svc = VAR_4;
 FUNC_0(&VAR_5->work, VAR_2);
 VAR_4->watchdog = VAR_5;

 VAR_5->pm_notifier.notifier_call = VAR_3;
 VAR_6 = FUNC_5(&VAR_5->pm_notifier);
 if (VAR_6) {
  FUNC_1(&VAR_4->dev, "error registering pm notifier(%d)\n",
   VAR_6);
  goto svc_watchdog_create_err;
 }

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_4->dev, "error enabling watchdog (%d)\n", VAR_6);
  FUNC_6(&VAR_5->pm_notifier);
  goto svc_watchdog_create_err;
 }
 return VAR_6;

svc_watchdog_create_err:
 VAR_4->watchdog = ((void*)0);
 FUNC_3(VAR_5);

 return VAR_6;
}
