
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_clk {scalar_t__ max_rate; } ;
struct drm_device {int dummy; } ;
struct dpu_mdss_cfg {int dummy; } ;
struct dpu_core_perf {scalar_t__ max_core_clk_rate; struct dss_clk* core_clk; struct dpu_mdss_cfg* catalog; struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(struct dpu_core_perf *VAR_1,
  struct drm_device *VAR_2,
  struct dpu_mdss_cfg *VAR_3,
  struct dss_clk *VAR_4)
{
 VAR_1->dev = VAR_2;
 VAR_1->catalog = VAR_3;
 VAR_1->core_clk = VAR_4;

 VAR_1->max_core_clk_rate = VAR_4->max_rate;
 if (!VAR_1->max_core_clk_rate) {
  FUNC_0("optional max core clk rate, use default\n");
  VAR_1->max_core_clk_rate = VAR_0;
 }

 return 0;
}
