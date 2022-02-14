
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (int *,char*,int) ;
 struct clk* FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0, struct clk **VAR_1,
       struct clk **VAR_2, struct clk **VAR_3,
       struct clk **VAR_4, struct clk **VAR_5)
{
 int VAR_6;

 *VAR_3 = ((void*)0);
 *VAR_4 = ((void*)0);
 *VAR_5 = ((void*)0);

 *VAR_1 = FUNC_5(&VAR_0->dev, "s_axi_lite_aclk");
 if (FUNC_0(*VAR_1)) {
  VAR_6 = FUNC_1(*VAR_1);
  FUNC_4(&VAR_0->dev, "failed to get axi_clk (%d)\n", VAR_6);
  return VAR_6;
 }

 *VAR_2 = FUNC_5(&VAR_0->dev, "m_axi_aclk");
 if (FUNC_0(*VAR_2)) {
  VAR_6 = FUNC_1(*VAR_2);
  FUNC_4(&VAR_0->dev, "failed to get dev_clk (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(*VAR_1);
 if (VAR_6) {
  FUNC_4(&VAR_0->dev, "failed to enable axi_clk (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(*VAR_2);
 if (VAR_6) {
  FUNC_4(&VAR_0->dev, "failed to enable dev_clk (%d)\n", VAR_6);
  goto err_disable_axiclk;
 }

 return 0;

err_disable_axiclk:
 FUNC_2(*VAR_1);

 return VAR_6;
}
