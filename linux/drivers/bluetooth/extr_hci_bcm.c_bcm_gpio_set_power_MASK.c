
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bcm_device {int res_enabled; int (* set_shutdown ) (struct bcm_device*,int) ;int (* set_device_wakeup ) (struct bcm_device*,int) ;TYPE_1__* supplies; int lpo_clk; int txco_clk; int dev; } ;
struct TYPE_3__ {scalar_t__ supply; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (struct bcm_device*,int) ;
 int FUNC_7 (struct bcm_device*,int) ;
 int FUNC_8 (struct bcm_device*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct bcm_device *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (VAR_2 && !VAR_1->res_enabled) {



  if (VAR_1->supplies[0].supply) {
   VAR_3 = FUNC_5(VAR_0,
          VAR_1->supplies);
   if (VAR_3)
    return VAR_3;
  }


  VAR_3 = FUNC_2(VAR_1->lpo_clk, 32768);
  if (VAR_3) {
   FUNC_3(VAR_1->dev, "Could not set LPO clock rate\n");
   goto err_regulator_disable;
  }

  VAR_3 = FUNC_1(VAR_1->lpo_clk);
  if (VAR_3)
   goto err_regulator_disable;

  VAR_3 = FUNC_1(VAR_1->txco_clk);
  if (VAR_3)
   goto err_lpo_clk_disable;
 }

 VAR_3 = VAR_1->set_shutdown(VAR_1, VAR_2);
 if (VAR_3)
  goto err_txco_clk_disable;

 VAR_3 = VAR_1->set_device_wakeup(VAR_1, VAR_2);
 if (VAR_3)
  goto err_revert_shutdown;

 if (!VAR_2 && VAR_1->res_enabled) {
  FUNC_0(VAR_1->txco_clk);
  FUNC_0(VAR_1->lpo_clk);




  if (VAR_1->supplies[0].supply)
   FUNC_4(VAR_0,
            VAR_1->supplies);
 }


 FUNC_9(100000, 120000);

 VAR_1->res_enabled = VAR_2;

 return 0;

err_revert_shutdown:
 VAR_1->set_shutdown(VAR_1, !VAR_2);
err_txco_clk_disable:
 if (VAR_2 && !VAR_1->res_enabled)
  FUNC_0(VAR_1->txco_clk);
err_lpo_clk_disable:
 if (VAR_2 && !VAR_1->res_enabled)
  FUNC_0(VAR_1->lpo_clk);
err_regulator_disable:
 if (VAR_2 && !VAR_1->res_enabled)
  FUNC_4(VAR_0, VAR_1->supplies);
 return VAR_3;
}
