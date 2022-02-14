
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_bridge {struct analogix_dp_device* driver_private; } ;
struct analogix_dp_device {scalar_t__ dpms_mode; int fast_train_enable; int psr_supported; int dev; int clock; int phy; TYPE_1__* plat_data; int irq; } ;
struct TYPE_2__ {int (* power_off ) (TYPE_1__*) ;scalar_t__ panel; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct analogix_dp_device*,int,int) ;
 int FUNC_2 (struct analogix_dp_device*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(struct drm_bridge *VAR_3)
{
 struct analogix_dp_device *VAR_4 = VAR_3->driver_private;
 int VAR_5;

 if (VAR_4->dpms_mode != VAR_1)
  return;

 if (VAR_4->plat_data->panel) {
  if (FUNC_5(VAR_4->plat_data->panel)) {
   FUNC_0("failed to disable the panel\n");
   return;
  }
 }

 FUNC_4(VAR_4->irq);

 if (VAR_4->plat_data->power_off)
  VAR_4->plat_data->power_off(VAR_4->plat_data);

 FUNC_2(VAR_4, VAR_2, 1);
 FUNC_6(VAR_4->phy);

 FUNC_3(VAR_4->clock);

 FUNC_7(VAR_4->dev);

 VAR_5 = FUNC_1(VAR_4, 0, 1);
 if (VAR_5)
  FUNC_0("failed to setup the panel ret = %d\n", VAR_5);

 VAR_4->fast_train_enable = 0;
 VAR_4->psr_supported = 0;
 VAR_4->dpms_mode = VAR_0;
}
