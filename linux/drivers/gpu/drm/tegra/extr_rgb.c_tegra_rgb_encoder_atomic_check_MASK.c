
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_rgb {int clk_parent; int clk; } ;
struct tegra_output {int dev; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;
struct drm_connector_state {int crtc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct tegra_output* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct tegra_dc*,struct drm_crtc_state*,int ,unsigned long,unsigned int) ;
 struct tegra_rgb* FUNC_4 (struct tegra_output*) ;
 struct tegra_dc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct drm_encoder *VAR_0,
          struct drm_crtc_state *VAR_1,
          struct drm_connector_state *VAR_2)
{
 struct tegra_output *VAR_3 = FUNC_2(VAR_0);
 struct tegra_dc *VAR_4 = FUNC_5(VAR_2->crtc);
 unsigned long VAR_5 = VAR_1->mode.clock * 1000;
 struct tegra_rgb *VAR_6 = FUNC_4(VAR_3);
 unsigned int VAR_7;
 int VAR_8;
 VAR_7 = ((FUNC_0(VAR_6->clk) * 2) / VAR_5) - 2;
 VAR_5 = 0;

 VAR_8 = FUNC_3(VAR_4, VAR_1, VAR_6->clk_parent,
      VAR_5, VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_3->dev, "failed to setup CRTC state: %d\n", VAR_8);
  return VAR_8;
 }

 return VAR_8;
}
