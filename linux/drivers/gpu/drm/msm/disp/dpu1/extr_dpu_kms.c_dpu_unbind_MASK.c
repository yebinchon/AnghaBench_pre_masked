
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dss_module_power {scalar_t__ num_clk; int clk_config; } ;
struct dpu_kms {scalar_t__ rpm_enabled; struct dss_module_power mp; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct dpu_kms* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_0);
 struct dpu_kms *VAR_4 = FUNC_2(VAR_3);
 struct dss_module_power *VAR_5 = &VAR_4->mp;

 FUNC_1(VAR_5->clk_config, VAR_5->num_clk);
 FUNC_0(&VAR_3->dev, VAR_5->clk_config);
 VAR_5->num_clk = 0;

 if (VAR_4->rpm_enabled)
  FUNC_3(&VAR_3->dev);
}
