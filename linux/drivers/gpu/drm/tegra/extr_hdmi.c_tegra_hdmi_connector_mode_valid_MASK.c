
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_output {int dummy; } ;
struct tegra_hdmi {int clk_parent; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;
struct clk {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 long FUNC_1 (struct clk*,unsigned long) ;
 struct tegra_output* FUNC_2 (struct drm_connector*) ;
 struct tegra_hdmi* FUNC_3 (struct tegra_output*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_connector *VAR_2,
    struct drm_display_mode *VAR_3)
{
 struct tegra_output *VAR_4 = FUNC_2(VAR_2);
 struct tegra_hdmi *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6 = VAR_3->clock * 1000;
 enum drm_mode_status VAR_7 = VAR_1;
 struct clk *VAR_8;
 long VAR_9;

 VAR_8 = FUNC_0(VAR_5->clk_parent);

 VAR_9 = FUNC_1(VAR_8, VAR_6 * 4);
 if (VAR_9 <= 0)
  VAR_7 = VAR_0;

 return VAR_7;
}
