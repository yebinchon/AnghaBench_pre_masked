
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int pclk; int core_clk; int dev; int apb_rst; int dptx_rst; int core_rst; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*,unsigned long) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct cdn_dp_device *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_5(VAR_1->pclk);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "cannot enable dp pclk %d\n", VAR_2);
  goto err_pclk;
 }

 VAR_2 = FUNC_5(VAR_1->core_clk);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "cannot enable core_clk %d\n", VAR_2);
  goto err_core_clk;
 }

 VAR_2 = FUNC_6(VAR_1->dev);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "cannot get pm runtime %d\n", VAR_2);
  goto err_pm_runtime_get;
 }

 FUNC_8(VAR_1->core_rst);
 FUNC_8(VAR_1->dptx_rst);
 FUNC_8(VAR_1->apb_rst);
 FUNC_9(VAR_1->core_rst);
 FUNC_9(VAR_1->dptx_rst);
 FUNC_9(VAR_1->apb_rst);

 VAR_3 = FUNC_4(VAR_1->core_clk);
 if (!VAR_3) {
  FUNC_0(VAR_1->dev, "get clk rate failed\n");
  VAR_2 = -VAR_0;
  goto err_set_rate;
 }

 FUNC_2(VAR_1, VAR_3);
 FUNC_1(VAR_1);

 return 0;

err_set_rate:
 FUNC_7(VAR_1->dev);
err_pm_runtime_get:
 FUNC_3(VAR_1->core_clk);
err_core_clk:
 FUNC_3(VAR_1->pclk);
err_pclk:
 return VAR_2;
}
