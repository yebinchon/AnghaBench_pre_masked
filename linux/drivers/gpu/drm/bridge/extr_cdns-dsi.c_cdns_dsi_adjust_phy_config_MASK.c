
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_configure_opts_mipi_dphy {unsigned long long hs_clk_rate; } ;
struct drm_display_mode {int clock; int crtc_clock; unsigned long htotal; unsigned long crtc_htotal; } ;
struct cdns_dsi_output {TYPE_1__* dev; } ;
struct cdns_dsi_cfg {unsigned long hbp; unsigned long htotal; scalar_t__ hfp; scalar_t__ hact; scalar_t__ hsa; } ;
struct cdns_dsi {struct cdns_dsi_output output; } ;
struct TYPE_2__ {unsigned int lanes; int mode_flags; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long long,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct cdns_dsi *VAR_5,
         struct cdns_dsi_cfg *VAR_6,
         struct phy_configure_opts_mipi_dphy *VAR_7,
         const struct drm_display_mode *VAR_8,
         bool VAR_9)
{
 struct cdns_dsi_output *VAR_10 = &VAR_5->output;
 unsigned long long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17 = VAR_10->dev->lanes;

 VAR_13 = VAR_6->hbp + VAR_0;
 if (VAR_10->dev->mode_flags & VAR_4)
  VAR_13 += VAR_6->hsa + VAR_2;

 VAR_13 += VAR_6->hact;
 VAR_13 += VAR_6->hfp + VAR_1;






 VAR_12 = VAR_13;
 if (VAR_13 % VAR_17)
  VAR_12 += VAR_17 - (VAR_13 % VAR_17);

 VAR_15 = (VAR_9 ? VAR_8->clock : VAR_8->crtc_clock) * 1000;
 VAR_11 = (unsigned long long)VAR_15 * VAR_12;


 VAR_14 = VAR_9 ? VAR_8->htotal : VAR_8->crtc_htotal;
 if (FUNC_0(VAR_11, VAR_17 * VAR_14))
  return -VAR_3;


 VAR_7->hs_clk_rate = VAR_11 * 8;

 VAR_16 = VAR_12 - VAR_13;
 VAR_6->hfp += VAR_16;
 VAR_6->htotal = VAR_13 + VAR_16;

 return 0;
}
