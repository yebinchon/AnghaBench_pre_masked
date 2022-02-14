
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc_state {unsigned long pclk; unsigned int div; struct clk* clk; } ;
struct tegra_dc {int clk; } ;
struct drm_crtc_state {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct clk*) ;
 struct tegra_dc_state* FUNC_1 (struct drm_crtc_state*) ;

int FUNC_2(struct tegra_dc *VAR_1,
          struct drm_crtc_state *VAR_2,
          struct clk *VAR_3, unsigned long VAR_4,
          unsigned int VAR_5)
{
 struct tegra_dc_state *VAR_6 = FUNC_1(VAR_2);

 if (!FUNC_0(VAR_1->clk, VAR_3))
  return -VAR_0;

 VAR_6->clk = VAR_3;
 VAR_6->pclk = VAR_4;
 VAR_6->div = VAR_5;

 return 0;
}
