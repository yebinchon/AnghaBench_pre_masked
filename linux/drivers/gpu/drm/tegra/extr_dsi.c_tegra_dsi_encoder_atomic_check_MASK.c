
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_output {int dev; } ;
struct tegra_dsi_state {int pclk; int mul; int div; int lanes; int bclk; int period; int timing; int vrefresh; int format; } ;
struct tegra_dsi {int clk_parent; int dev; int format; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;
struct drm_connector_state {int crtc; } ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int,unsigned long) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 struct tegra_output* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct tegra_dc*,struct drm_crtc_state*,int ,unsigned long,unsigned int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct tegra_dsi*) ;
 int FUNC_11 (int ,int*,int*) ;
 struct tegra_dsi* FUNC_12 (struct tegra_output*) ;
 struct tegra_dsi_state* FUNC_13 (struct drm_connector_state*) ;
 struct tegra_dc* FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct drm_encoder *VAR_2,
          struct drm_crtc_state *VAR_3,
          struct drm_connector_state *VAR_4)
{
 struct tegra_output *VAR_5 = FUNC_5(VAR_2);
 struct tegra_dsi_state *VAR_6 = FUNC_13(VAR_4);
 struct tegra_dc *VAR_7 = FUNC_14(VAR_4->crtc);
 struct tegra_dsi *VAR_8 = FUNC_12(VAR_5);
 unsigned int VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_6->pclk = VAR_3->mode.clock * 1000;

 VAR_11 = FUNC_11(VAR_8->format, &VAR_6->mul, &VAR_6->div);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_6->lanes = FUNC_10(VAR_8);

 VAR_11 = FUNC_9(VAR_8->format, &VAR_6->format);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_6->vrefresh = FUNC_4(&VAR_3->mode);


 VAR_6->bclk = (VAR_6->pclk * VAR_6->mul) / (VAR_6->div * VAR_6->lanes);

 FUNC_2("mul: %u, div: %u, lanes: %u\n", VAR_6->mul, VAR_6->div,
        VAR_6->lanes);
 FUNC_2("format: %u, vrefresh: %u\n", VAR_6->format,
        VAR_6->vrefresh);
 FUNC_2("bclk: %lu\n", VAR_6->bclk);




 VAR_10 = FUNC_1(VAR_6->bclk * 8, VAR_1) * VAR_1;
 VAR_6->period = FUNC_0(VAR_0, VAR_10);

 VAR_11 = FUNC_6(&VAR_6->timing, VAR_6->period);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_7(&VAR_6->timing, VAR_6->period);
 if (VAR_11 < 0) {
  FUNC_3(VAR_8->dev, "failed to validate D-PHY timing: %d\n", VAR_11);
  return VAR_11;
 }






 VAR_10 /= 2;
 VAR_9 = ((8 * VAR_6->mul) / (VAR_6->div * VAR_6->lanes)) - 2;

 VAR_11 = FUNC_8(VAR_7, VAR_3, VAR_8->clk_parent,
      VAR_10, VAR_9);
 if (VAR_11 < 0) {
  FUNC_3(VAR_5->dev, "failed to setup CRTC state: %d\n", VAR_11);
  return VAR_11;
 }

 return VAR_11;
}
