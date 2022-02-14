
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mdss {int dummy; } ;
struct dss_module_power {int num_clk; int clk_config; } ;
struct dpu_mdss {int num_paths; int * path; struct dss_module_power mp; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct dpu_mdss* FUNC_3 (struct msm_mdss*) ;

__attribute__((used)) static int FUNC_4(struct msm_mdss *VAR_0)
{
 struct dpu_mdss *VAR_1 = FUNC_3(VAR_0);
 struct dss_module_power *VAR_2 = &VAR_1->mp;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2->clk_config, VAR_2->num_clk, 0);
 if (VAR_3)
  FUNC_0("clock disable failed, ret:%d\n", VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_1->num_paths; VAR_4++)
  FUNC_1(VAR_1->path[VAR_4], 0, 0);

 return VAR_3;
}
