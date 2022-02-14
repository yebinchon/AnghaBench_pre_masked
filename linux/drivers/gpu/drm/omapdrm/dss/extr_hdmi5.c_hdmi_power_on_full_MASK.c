
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
struct TYPE_8__ {struct videomode vm; } ;
struct omap_hdmi {TYPE_1__ pll; int wp; int output; TYPE_2__ cfg; int core; int phy; } ;
struct dss_pll_clock_info {int * clkout; int clkdco; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,unsigned int,struct dss_pll_clock_info*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,struct dss_pll_clock_info*) ;
 int FUNC_9 (int *,int *,TYPE_2__*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (struct omap_hdmi*) ;
 int FUNC_12 (struct omap_hdmi*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct omap_hdmi *VAR_6)
{
 int VAR_7;
 const struct videomode *VAR_8;
 struct dss_pll_clock_info VAR_9 = { 0 };
 unsigned int VAR_10;

 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_8 = &VAR_6->cfg.vm;

 FUNC_0("hdmi_power_on hactive= %d vactive = %d\n", VAR_8->hactive,
        VAR_8->vactive);

 VAR_10 = VAR_8->pixelclock;
 if (VAR_8->flags & VAR_0)
  VAR_10 *= 2;


 VAR_10 *= 10;

 FUNC_5(&VAR_6->pll.pll, FUNC_2(VAR_6->pll.pll.clkin),
  VAR_10, &VAR_9);


 FUNC_13(&VAR_6->wp, 0xffffffff);
 FUNC_16(&VAR_6->wp,
   FUNC_14(&VAR_6->wp));

 VAR_7 = FUNC_7(&VAR_6->pll.pll);
 if (VAR_7) {
  FUNC_1("Failed to enable PLL\n");
  goto err_pll_enable;
 }

 VAR_7 = FUNC_8(&VAR_6->pll.pll, &VAR_9);
 if (VAR_7) {
  FUNC_1("Failed to configure PLL\n");
  goto err_pll_cfg;
 }

 VAR_7 = FUNC_10(&VAR_6->phy, VAR_9.clkdco,
  VAR_9.clkout[0]);
 if (VAR_7) {
  FUNC_0("Failed to start PHY\n");
  goto err_phy_cfg;
 }

 VAR_7 = FUNC_17(&VAR_6->wp, VAR_4);
 if (VAR_7)
  goto err_phy_pwr;

 FUNC_9(&VAR_6->core, &VAR_6->wp, &VAR_6->cfg);

 VAR_7 = FUNC_4(&VAR_6->output);
 if (VAR_7)
  goto err_mgr_enable;

 VAR_7 = FUNC_18(&VAR_6->wp);
 if (VAR_7)
  goto err_vid_enable;

 FUNC_15(&VAR_6->wp,
   VAR_2 | VAR_3);

 return 0;

err_vid_enable:
 FUNC_3(&VAR_6->output);
err_mgr_enable:
 FUNC_17(&VAR_6->wp, VAR_5);
err_phy_pwr:
err_phy_cfg:
err_pll_cfg:
 FUNC_6(&VAR_6->pll.pll);
err_pll_enable:
 FUNC_11(VAR_6);
 return -VAR_1;
}
