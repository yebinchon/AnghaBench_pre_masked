
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_drm_private {int * mdss; } ;
struct dss_module_power {int clk_config; int num_clk; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct dpu_mdss {int num_paths; int * mmio; int * path; struct dss_module_power mp; } ;


 int FUNC_0 (struct dpu_mdss*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct dpu_mdss* FUNC_9 (int *) ;
 struct platform_device* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct drm_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_10(VAR_0->dev);
 struct msm_drm_private *VAR_2 = VAR_0->dev_private;
 struct dpu_mdss *VAR_3 = FUNC_9(VAR_2->mdss);
 struct dss_module_power *VAR_4 = &VAR_3->mp;
 int VAR_5;
 int VAR_6;

 FUNC_8(VAR_0->dev);
 FUNC_7(VAR_0->dev);
 FUNC_0(VAR_3);
 VAR_5 = FUNC_6(VAR_1, 0);
 FUNC_4(VAR_5, ((void*)0), ((void*)0));
 FUNC_5(VAR_4->clk_config, VAR_4->num_clk);
 FUNC_2(&VAR_1->dev, VAR_4->clk_config);

 for (VAR_6 = 0; VAR_6 < VAR_3->num_paths; VAR_6++)
  FUNC_3(VAR_3->path[VAR_6]);

 if (VAR_3->mmio)
  FUNC_1(&VAR_1->dev, VAR_3->mmio);
 VAR_3->mmio = ((void*)0);
 VAR_2->mdss = ((void*)0);
}
