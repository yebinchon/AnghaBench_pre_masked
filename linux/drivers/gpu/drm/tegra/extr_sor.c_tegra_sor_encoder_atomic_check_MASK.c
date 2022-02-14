
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_sor_state {int link_speed; unsigned long pclk; int bpc; } ;
struct tegra_sor {int clk_parent; } ;
struct drm_display_info {int bpc; } ;
struct TYPE_4__ {struct drm_display_info display_info; } ;
struct tegra_output {int dev; TYPE_2__ connector; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_3__ {int clock; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;
struct drm_connector_state {int crtc; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct tegra_output* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct tegra_dc*,struct drm_crtc_state*,int ,unsigned long,int ) ;
 struct tegra_sor* FUNC_4 (struct tegra_output*) ;
 struct tegra_sor_state* FUNC_5 (struct drm_connector_state*) ;
 struct tegra_dc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct drm_encoder *VAR_0,
          struct drm_crtc_state *VAR_1,
          struct drm_connector_state *VAR_2)
{
 struct tegra_output *VAR_3 = FUNC_2(VAR_0);
 struct tegra_sor_state *VAR_4 = FUNC_5(VAR_2);
 struct tegra_dc *VAR_5 = FUNC_6(VAR_2->crtc);
 unsigned long VAR_6 = VAR_1->mode.clock * 1000;
 struct tegra_sor *VAR_7 = FUNC_4(VAR_3);
 struct drm_display_info *VAR_8;
 int VAR_9;

 VAR_8 = &VAR_3->connector.display_info;





 if (VAR_6 >= 340000000) {
  VAR_4->link_speed = 20;
  VAR_4->pclk = VAR_6 / 2;
 } else {
  VAR_4->link_speed = 10;
  VAR_4->pclk = VAR_6;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_1, VAR_7->clk_parent,
      VAR_6, 0);
 if (VAR_9 < 0) {
  FUNC_1(VAR_3->dev, "failed to setup CRTC state: %d\n", VAR_9);
  return VAR_9;
 }

 switch (VAR_8->bpc) {
 case 8:
 case 6:
  VAR_4->bpc = VAR_8->bpc;
  break;

 default:
  FUNC_0("%u bits-per-color not supported\n", VAR_8->bpc);
  VAR_4->bpc = 8;
  break;
 }

 return 0;
}
