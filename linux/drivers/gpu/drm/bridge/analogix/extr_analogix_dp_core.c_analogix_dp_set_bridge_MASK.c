
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct analogix_dp_device {int dev; int clock; TYPE_1__* plat_data; int phy; int irq; } ;
struct TYPE_4__ {int (* power_off ) (TYPE_1__*) ;int (* power_on_end ) (TYPE_1__*) ;int (* power_on_start ) (TYPE_1__*) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct analogix_dp_device*) ;
 int FUNC_2 (struct analogix_dp_device*) ;
 int FUNC_3 (struct analogix_dp_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct analogix_dp_device *VAR_0)
{
 int VAR_1;

 FUNC_9(VAR_0->dev);

 VAR_1 = FUNC_5(VAR_0->clock);
 if (VAR_1 < 0) {
  FUNC_0("Failed to prepare_enable the clock clk [%d]\n", VAR_1);
  goto out_dp_clk_pre;
 }

 if (VAR_0->plat_data->power_on_start)
  VAR_0->plat_data->power_on_start(VAR_0->plat_data);

 FUNC_8(VAR_0->phy);

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto out_dp_init;






 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("failed to get hpd single ret = %d\n", VAR_1);
  goto out_dp_init;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0("dp commit error, ret = %d\n", VAR_1);
  goto out_dp_init;
 }

 if (VAR_0->plat_data->power_on_end)
  VAR_0->plat_data->power_on_end(VAR_0->plat_data);

 FUNC_6(VAR_0->irq);
 return 0;

out_dp_init:
 FUNC_7(VAR_0->phy);
 if (VAR_0->plat_data->power_off)
  VAR_0->plat_data->power_off(VAR_0->plat_data);
 FUNC_4(VAR_0->clock);
out_dp_clk_pre:
 FUNC_10(VAR_0->dev);

 return VAR_1;
}
