
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_drm {struct tegra_display_hub* hub; } ;
struct tegra_display_hub_state {scalar_t__ dc; scalar_t__ clk; int rate; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {struct device* dev; } ;
struct tegra_display_hub {int clk_disp; TYPE_2__ base; TYPE_1__ client; } ;
struct drm_device {struct tegra_drm* dev_private; } ;
struct drm_atomic_state {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct device*,char*,int ,scalar_t__,...) ;
 int FUNC_3 (scalar_t__) ;
 struct tegra_display_hub_state* FUNC_4 (int ) ;

void FUNC_5(struct drm_device *VAR_0,
         struct drm_atomic_state *VAR_1)
{
 struct tegra_drm *VAR_2 = VAR_0->dev_private;
 struct tegra_display_hub *VAR_3 = VAR_2->hub;
 struct tegra_display_hub_state *VAR_4;
 struct device *VAR_5 = VAR_3->client.dev;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3->base.state);

 if (VAR_4->clk) {
  VAR_6 = FUNC_1(VAR_4->clk, VAR_4->rate);
  if (VAR_6 < 0)
   FUNC_2(VAR_5, "failed to set rate of %pC to %lu Hz\n",
    VAR_4->clk, VAR_4->rate);

  VAR_6 = FUNC_0(VAR_3->clk_disp, VAR_4->clk);
  if (VAR_6 < 0)
   FUNC_2(VAR_5, "failed to set parent of %pC to %pC: %d\n",
    VAR_3->clk_disp, VAR_4->clk, VAR_6);
 }

 if (VAR_4->dc)
  FUNC_3(VAR_4->dc);
}
