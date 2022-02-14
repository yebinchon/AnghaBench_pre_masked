
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct videomode {unsigned int pixelclock; int flags; int vactive; int hactive; } ;
struct TYPE_9__ {int clkin; } ;
struct TYPE_7__ {TYPE_3__ pll; } ;
struct hdmi_wp_data {int dummy; } ;
struct TYPE_8__ {struct videomode vm; } ;
struct omap_hdmi {TYPE_1__ pll; struct hdmi_wp_data wp; int output; TYPE_2__ cfg; int core; int phy; } ;
struct dss_pll_clock_info {int * clkout; int clkdco; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,unsigned int,struct dss_pll_clock_info*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,struct dss_pll_clock_info*) ;
 int FUNC_9 (int *,struct hdmi_wp_data*,TYPE_2__*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (struct omap_hdmi*) ;
 int FUNC_12 (struct omap_hdmi*) ;
 int FUNC_13 (struct hdmi_wp_data*,int ) ;
 int FUNC_14 (struct hdmi_wp_data*,int) ;
 int FUNC_15 (struct hdmi_wp_data*,int ) ;
 int FUNC_16 (struct hdmi_wp_data*,int ) ;
 int FUNC_17 (struct hdmi_wp_data*) ;

__attribute__((used)) static int FUNC_18(struct omap_hdmi *VAR_7)
{
 int VAR_8;
 const struct videomode *VAR_9;
 struct hdmi_wp_data *VAR_10 = &VAR_7->wp;
 struct dss_pll_clock_info VAR_11 = { 0 };
 unsigned int VAR_12;

 VAR_8 = FUNC_12(VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_13(VAR_10, ~VAR_2);
 FUNC_15(VAR_10, ~VAR_2);

 VAR_9 = &VAR_7->cfg.vm;

 FUNC_0("hdmi_power_on hactive= %d vactive = %d\n", VAR_9->hactive,
        VAR_9->vactive);

 VAR_12 = VAR_9->pixelclock;
 if (VAR_9->flags & VAR_0)
  VAR_12 *= 2;


 VAR_12 *= 10;

 FUNC_5(&VAR_7->pll.pll, FUNC_2(VAR_7->pll.pll.clkin),
  VAR_12, &VAR_11);

 VAR_8 = FUNC_7(&VAR_7->pll.pll);
 if (VAR_8) {
  FUNC_1("Failed to enable PLL\n");
  goto err_pll_enable;
 }

 VAR_8 = FUNC_8(&VAR_7->pll.pll, &VAR_11);
 if (VAR_8) {
  FUNC_1("Failed to configure PLL\n");
  goto err_pll_cfg;
 }

 VAR_8 = FUNC_10(&VAR_7->phy, VAR_11.clkdco,
  VAR_11.clkout[0]);
 if (VAR_8) {
  FUNC_0("Failed to configure PHY\n");
  goto err_phy_cfg;
 }

 VAR_8 = FUNC_16(VAR_10, VAR_5);
 if (VAR_8)
  goto err_phy_pwr;

 FUNC_9(&VAR_7->core, &VAR_7->wp, &VAR_7->cfg);

 VAR_8 = FUNC_4(&VAR_7->output);
 if (VAR_8)
  goto err_mgr_enable;

 VAR_8 = FUNC_17(&VAR_7->wp);
 if (VAR_8)
  goto err_vid_enable;

 FUNC_14(VAR_10,
  VAR_3 | VAR_4);

 return 0;

err_vid_enable:
 FUNC_3(&VAR_7->output);
err_mgr_enable:
 FUNC_16(&VAR_7->wp, VAR_6);
err_phy_pwr:
err_phy_cfg:
err_pll_cfg:
 FUNC_6(&VAR_7->pll.pll);
err_pll_enable:
 FUNC_11(VAR_7);
 return -VAR_1;
}
