
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct phy_configure_opts_mipi_dphy {scalar_t__ hs_clk_rate; } ;
struct drm_display_mode {int crtc_clock; unsigned int clock; } ;
struct TYPE_4__ {struct phy_configure_opts_mipi_dphy mipi_dphy; } ;
struct cdns_dsi_output {TYPE_1__* dev; TYPE_2__ phy_opts; } ;
struct cdns_dsi_cfg {unsigned long hbp; scalar_t__ hsa; } ;
struct cdns_dsi {int dphy; struct cdns_dsi_output output; } ;
struct TYPE_3__ {unsigned int lanes; int mode_flags; int format; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cdns_dsi*,struct cdns_dsi_cfg*,struct phy_configure_opts_mipi_dphy*,struct drm_display_mode const*,int) ;
 int FUNC_1 (struct cdns_dsi*,struct drm_display_mode const*,struct cdns_dsi_cfg*,int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct drm_display_mode const*,int) ;
 int FUNC_4 (int,int ,unsigned int,struct phy_configure_opts_mipi_dphy*) ;
 int FUNC_5 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct cdns_dsi *VAR_5,
          const struct drm_display_mode *VAR_6,
          struct cdns_dsi_cfg *VAR_7,
          bool VAR_8)
{
 struct cdns_dsi_output *VAR_9 = &VAR_5->output;
 struct phy_configure_opts_mipi_dphy *VAR_10 = &VAR_9->phy_opts.mipi_dphy;
 unsigned long VAR_11;
 unsigned int VAR_12 = VAR_9->dev->lanes;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_13)
  return VAR_13;

 FUNC_4(VAR_6->crtc_clock * 1000,
      FUNC_2(VAR_9->dev->format),
      VAR_12, VAR_10);

 VAR_13 = FUNC_0(VAR_5, VAR_7, VAR_10, VAR_6, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_5->dphy, VAR_4, 0, &VAR_9->phy_opts);
 if (VAR_13)
  return VAR_13;

 VAR_11 = VAR_7->hbp + VAR_0;
 if (VAR_9->dev->mode_flags & VAR_3)
  VAR_11 += VAR_7->hsa + VAR_1;






 if ((u64)VAR_10->hs_clk_rate *
     FUNC_3(VAR_6, VAR_8) * VAR_12 <
     (u64)VAR_11 *
     (VAR_8 ? VAR_6->clock : VAR_6->crtc_clock) * 1000)
  return -VAR_2;

 return 0;
}
