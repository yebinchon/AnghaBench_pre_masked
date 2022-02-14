
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_output {scalar_t__ panel; } ;
struct tegra_dsi_state {int period; int timing; int vrefresh; int bclk; } ;
struct tegra_dsi {int dummy; } ;
struct tegra_dc {int pipe; } ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct tegra_output* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct tegra_dc*) ;
 int FUNC_4 (struct tegra_dc*,int ) ;
 int FUNC_5 (struct tegra_dc*,int ,int ) ;
 int FUNC_6 (struct tegra_dsi*,int ,struct drm_display_mode*) ;
 int FUNC_7 (struct tegra_dsi*) ;
 struct tegra_dsi_state* FUNC_8 (struct tegra_dsi*) ;
 int FUNC_9 (struct tegra_dsi*) ;
 int FUNC_10 (struct tegra_dsi*,int,int *) ;
 int FUNC_11 (struct tegra_dsi*,int ,int ) ;
 struct tegra_dsi* FUNC_12 (struct tegra_output*) ;
 struct tegra_dc* FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_14(struct drm_encoder *VAR_2)
{
 struct drm_display_mode *VAR_3 = &VAR_2->crtc->state->adjusted_mode;
 struct tegra_output *VAR_4 = FUNC_2(VAR_2);
 struct tegra_dc *VAR_5 = FUNC_13(VAR_2->crtc);
 struct tegra_dsi *VAR_6 = FUNC_12(VAR_4);
 struct tegra_dsi_state *VAR_7;
 u32 VAR_8;

 FUNC_9(VAR_6);

 VAR_7 = FUNC_8(VAR_6);

 FUNC_11(VAR_6, VAR_7->bclk, VAR_7->vrefresh);





 FUNC_10(VAR_6, VAR_7->period * 8, &VAR_7->timing);

 if (VAR_4->panel)
  FUNC_1(VAR_4->panel);

 FUNC_6(VAR_6, VAR_5->pipe, VAR_3);


 VAR_8 = FUNC_4(VAR_5, VAR_0);
 VAR_8 |= VAR_1;
 FUNC_5(VAR_5, VAR_8, VAR_0);

 FUNC_3(VAR_5);


 FUNC_7(VAR_6);

 if (VAR_4->panel)
  FUNC_0(VAR_4->panel);
}
