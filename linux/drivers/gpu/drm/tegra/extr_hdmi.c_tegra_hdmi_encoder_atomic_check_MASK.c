
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_output {int dev; } ;
struct tegra_hdmi {int clk_parent; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;
struct drm_connector_state {int crtc; } ;


 int FUNC_0 (int ,char*,int) ;
 struct tegra_output* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct tegra_dc*,struct drm_crtc_state*,int ,unsigned long,int ) ;
 struct tegra_hdmi* FUNC_3 (struct tegra_output*) ;
 struct tegra_dc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct drm_encoder *VAR_0,
    struct drm_crtc_state *VAR_1,
    struct drm_connector_state *VAR_2)
{
 struct tegra_output *VAR_3 = FUNC_1(VAR_0);
 struct tegra_dc *VAR_4 = FUNC_4(VAR_2->crtc);
 unsigned long VAR_5 = VAR_1->mode.clock * 1000;
 struct tegra_hdmi *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_1, VAR_6->clk_parent,
      VAR_5, 0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_3->dev, "failed to setup CRTC state: %d\n", VAR_7);
  return VAR_7;
 }

 return VAR_7;
}
