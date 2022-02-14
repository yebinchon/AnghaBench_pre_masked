
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long u32 ;
struct phy_configure_opts_mipi_dphy {unsigned long hs_prepare; unsigned long hs_zero; int hs_clk_rate; } ;
struct drm_display_mode {unsigned long crtc_vdisplay; scalar_t__ crtc_vsync_start; scalar_t__ crtc_vsync_end; scalar_t__ crtc_vtotal; } ;
struct drm_bridge {TYPE_4__* encoder; } ;
struct TYPE_7__ {struct phy_configure_opts_mipi_dphy mipi_dphy; } ;
struct cdns_dsi_output {TYPE_6__* dev; TYPE_1__ phy_opts; } ;
struct cdns_dsi_input {int id; } ;
struct cdns_dsi_cfg {unsigned long hsa; unsigned long htotal; int hact; int hfp; int hbp; } ;
struct TYPE_11__ {int dev; } ;
struct cdns_dsi {scalar_t__ regs; TYPE_5__ base; struct cdns_dsi_output output; } ;
struct TYPE_12__ {int format; int lanes; int mode_flags; } ;
struct TYPE_10__ {TYPE_3__* crtc; } ;
struct TYPE_9__ {TYPE_2__* state; } ;
struct TYPE_8__ {struct drm_display_mode adjusted_mode; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_3 (int,int ) ;
 unsigned long FUNC_4 (unsigned long,int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_8 (unsigned long) ;
 unsigned long FUNC_9 (unsigned long) ;
 unsigned long VAR_7 ;
 unsigned long FUNC_10 (int ) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_11 (int ) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_12 (unsigned long) ;
 unsigned long FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;




 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long FUNC_14 (int ) ;
 int VAR_22 ;
 unsigned long FUNC_15 (int ) ;
 unsigned long FUNC_16 (int ) ;
 int VAR_23 ;
 unsigned long FUNC_17 (unsigned long) ;
 unsigned long FUNC_18 (unsigned long) ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long FUNC_19 (scalar_t__) ;
 unsigned long FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 unsigned long FUNC_21 (int ) ;
 scalar_t__ VAR_28 ;
 unsigned long VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 unsigned long VAR_32 ;
 scalar_t__ VAR_33 ;
 unsigned long VAR_34 ;
 unsigned long VAR_35 ;
 unsigned long VAR_36 ;
 unsigned long VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 unsigned long FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 struct cdns_dsi_input* FUNC_25 (struct drm_bridge*) ;
 int FUNC_26 (struct cdns_dsi*,struct drm_display_mode*,struct cdns_dsi_cfg*,int) ;
 int FUNC_27 (struct cdns_dsi*) ;
 int FUNC_28 (struct cdns_dsi*) ;
 int FUNC_29 (int ,char*) ;
 unsigned long FUNC_30 (struct drm_display_mode*) ;
 struct cdns_dsi* FUNC_31 (struct cdns_dsi_input*) ;
 int FUNC_32 (int) ;
 scalar_t__ FUNC_33 (int ) ;
 unsigned long FUNC_34 (scalar_t__) ;
 int FUNC_35 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_36(struct drm_bridge *VAR_41)
{
 struct cdns_dsi_input *VAR_42 = FUNC_25(VAR_41);
 struct cdns_dsi *VAR_43 = FUNC_31(VAR_42);
 struct cdns_dsi_output *VAR_44 = &VAR_43->output;
 struct drm_display_mode *VAR_45;
 struct phy_configure_opts_mipi_dphy *VAR_46 = &VAR_44->phy_opts.mipi_dphy;
 unsigned long VAR_47;
 struct cdns_dsi_cfg VAR_48;
 u32 VAR_49, VAR_50, VAR_51;
 int VAR_52, VAR_53;

 if (FUNC_23(FUNC_33(VAR_43->base.dev) < 0))
  return;

 VAR_45 = &VAR_41->encoder->crtc->state->adjusted_mode;
 VAR_52 = FUNC_32(VAR_44->dev->format);
 VAR_53 = VAR_44->dev->lanes;

 FUNC_24(FUNC_26(VAR_43, VAR_45, &VAR_48, 0));

 FUNC_27(VAR_43);
 FUNC_28(VAR_43);

 FUNC_35(FUNC_6(VAR_48.hbp) | FUNC_8(VAR_48.hsa),
        VAR_43->regs + VAR_30);
 FUNC_35(FUNC_7(VAR_48.hfp) | FUNC_5(VAR_48.hact),
        VAR_43->regs + VAR_31);

 FUNC_35(FUNC_19(VAR_45->crtc_vtotal - VAR_45->crtc_vsync_end - 1) |
        FUNC_20(VAR_45->crtc_vsync_start - VAR_45->crtc_vdisplay) |
        FUNC_22(VAR_45->crtc_vsync_end - VAR_45->crtc_vsync_start + 1),
        VAR_43->regs + VAR_39);
 FUNC_35(VAR_45->crtc_vdisplay, VAR_43->regs + VAR_40);

 VAR_49 = VAR_48.htotal -
       (VAR_48.hsa + VAR_1 +
        VAR_3);
 FUNC_35(FUNC_1(VAR_49), VAR_43->regs + VAR_27);
 if (VAR_44->dev->mode_flags & VAR_16)
  FUNC_35(FUNC_13(VAR_49 - VAR_5),
         VAR_43->regs + VAR_38);

 VAR_49 = VAR_48.htotal -
       (VAR_4 + VAR_1);
 FUNC_35(FUNC_0(VAR_49), VAR_43->regs + VAR_26);
 if (!(VAR_44->dev->mode_flags & VAR_16))
  FUNC_35(FUNC_13(VAR_49 - VAR_5),
         VAR_43->regs + VAR_38);

 VAR_49 = FUNC_4(VAR_48.htotal, VAR_53) -
       FUNC_4(VAR_48.hsa, VAR_53);

 if (!(VAR_44->dev->mode_flags & VAR_14))
  VAR_49 -= FUNC_4(VAR_2, VAR_53);

 VAR_47 = FUNC_3((u64)VAR_21 * 8,
         VAR_46->hs_clk_rate);
 VAR_50 = (VAR_46->hs_prepare + VAR_46->hs_zero) / VAR_47;
 FUNC_35(FUNC_18(VAR_50) | FUNC_17(VAR_49),
        VAR_43->regs + VAR_28);






 VAR_49 = VAR_21 / FUNC_30(VAR_45);
 VAR_49 /= VAR_47;

 for (VAR_51 = 0; VAR_51 <= VAR_0; VAR_51++) {
  if (VAR_49 <= VAR_7)
   break;

  VAR_49 >>= 1;
 }

 if (VAR_49 > VAR_7)
  VAR_49 = VAR_7;

 FUNC_35(FUNC_2(VAR_51) | FUNC_9(VAR_49),
        VAR_43->regs + VAR_10);

 FUNC_35(FUNC_12(VAR_49), VAR_43->regs + VAR_11);

 if (VAR_44->dev->mode_flags & VAR_15) {
  switch (VAR_44->dev->format) {
  case 128:
   VAR_49 = VAR_37 |
         FUNC_21(VAR_19);
   break;

  case 130:
   VAR_49 = VAR_35 |
         FUNC_21(VAR_20);
   break;

  case 129:
   VAR_49 = VAR_36 |
         FUNC_21(VAR_18);
   break;

  case 131:
   VAR_49 = VAR_34 |
         FUNC_21(VAR_17);
   break;

  default:
   FUNC_29(VAR_43->base.dev, "Unsupported DSI format\n");
   return;
  }

  if (VAR_44->dev->mode_flags & VAR_16)
   VAR_49 |= VAR_24 | VAR_25;

  VAR_49 |= FUNC_16(VAR_23) |
         FUNC_15(VAR_23) |
         FUNC_14(VAR_22) |
         VAR_32;

  FUNC_35(VAR_49, VAR_43->regs + VAR_33);
 }

 VAR_49 = FUNC_34(VAR_43->regs + VAR_12);
 VAR_49 &= ~(VAR_9 | VAR_6 | VAR_8);

 if (!(VAR_44->dev->mode_flags & VAR_14))
  VAR_49 |= VAR_6;

 if (VAR_44->dev->mode_flags & VAR_15)
  VAR_49 |= VAR_8 | FUNC_11(VAR_42->id) | VAR_29;

 FUNC_35(VAR_49, VAR_43->regs + VAR_12);

 VAR_49 = FUNC_34(VAR_43->regs + VAR_13) | FUNC_10(VAR_42->id);
 FUNC_35(VAR_49, VAR_43->regs + VAR_13);
}
