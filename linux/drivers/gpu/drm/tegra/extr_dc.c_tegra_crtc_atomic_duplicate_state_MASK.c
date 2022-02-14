
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct tegra_dc_state {struct drm_crtc_state base; int planes; int div; int pclk; int clk; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct tegra_dc_state* FUNC_1 (int,int ) ;
 struct tegra_dc_state* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_3(struct drm_crtc *VAR_1)
{
 struct tegra_dc_state *VAR_2 = FUNC_2(VAR_1->state);
 struct tegra_dc_state *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_3->base);
 VAR_3->clk = VAR_2->clk;
 VAR_3->pclk = VAR_2->pclk;
 VAR_3->div = VAR_2->div;
 VAR_3->planes = VAR_2->planes;

 return &VAR_3->base;
}
