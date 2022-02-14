
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wdt ;
struct platform_device {int dummy; } ;
struct bcma_drv_cc {int ticks_per_ms; struct platform_device* watchdog; TYPE_2__* core; } ;
struct TYPE_3__ {scalar_t__ id; int rev; } ;
struct bcma_bus {int num; TYPE_1__ chipinfo; } ;
struct bcm47xx_wdt {int max_timer_ms; int timer_set_ms; int timer_set; struct bcma_drv_cc* driver_data; } ;
struct TYPE_4__ {struct bcma_bus* bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct platform_device* FUNC_3 (int *,char*,int ,struct bcm47xx_wdt*,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct bcma_drv_cc *VAR_3)
{
 struct bcma_bus *VAR_4 = VAR_3->core->bus;
 struct bcm47xx_wdt VAR_5 = {};
 struct platform_device *VAR_6;

 if (VAR_4->chipinfo.id == VAR_0 &&
     VAR_4->chipinfo.rev <= 1) {
  FUNC_4("No watchdog on 53573A0 / 53573A1\n");
  return 0;
 }

 VAR_5.driver_data = VAR_3;
 VAR_5.timer_set = VAR_2;
 VAR_5.timer_set_ms = VAR_1;
 VAR_5.max_timer_ms =
  FUNC_2(VAR_3) / VAR_3->ticks_per_ms;

 VAR_6 = FUNC_3(((void*)0), "bcm47xx-wdt",
          VAR_4->num, &VAR_5,
          sizeof(VAR_5));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_3->watchdog = VAR_6;

 return 0;
}
