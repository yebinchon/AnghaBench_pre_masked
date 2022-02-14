
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


typedef int u32 ;
struct tegra_sor_state {int bpc; } ;
struct tegra_sor_hdmi_settings {int* drive_current; int* preemphasis; int sparepll; int tx_pu_value; int avdd14_level; int avdd10_level; int bg_vref_level; int bg_temp_coef; int tmds_termadj; int loadadj; int vcocap; int filter; int ichpmp; } ;
struct tegra_sor {int index; int dev; TYPE_4__* soc; int clk; int clk_parent; int clk_pad; int * xbar_cfg; int pad; int clk_safe; } ;
struct TYPE_7__ {int state; } ;
struct tegra_output {TYPE_1__ connector; } ;
struct tegra_dc {TYPE_5__* soc; scalar_t__ pipe; } ;
struct drm_encoder {TYPE_6__* crtc; } ;
struct drm_display_mode {int clock; int htotal; int hdisplay; unsigned int hsync_end; unsigned int hsync_start; } ;
struct TYPE_12__ {TYPE_2__* state; } ;
struct TYPE_11__ {scalar_t__ has_nvdisplay; } ;
struct TYPE_10__ {int has_nvdisplay; TYPE_3__* regs; } ;
struct TYPE_9__ {scalar_t__ head_state0; scalar_t__ dp_padctl0; scalar_t__ dp_padctl2; scalar_t__ pll3; scalar_t__ pll1; scalar_t__ pll0; scalar_t__ pll2; } ;
struct TYPE_8__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (unsigned int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (unsigned int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_4 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (int ) ;
 int VAR_33 ;
 int FUNC_6 (int ) ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 int VAR_49 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 int FUNC_11 (int) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_12 (int ) ;
 int VAR_57 ;
 int FUNC_13 (int ) ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_14 (int ) ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_15 (int ) ;
 int VAR_62 ;
 int VAR_63 ;
 int FUNC_16 (int ) ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_17 (int ) ;
 int VAR_69 ;
 int FUNC_18 (int ) ;
 int VAR_70 ;
 int FUNC_19 (int ) ;
 int VAR_71 ;
 int FUNC_20 (int ) ;
 int VAR_72 ;
 int VAR_73 ;
 scalar_t__ VAR_74 ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 (unsigned int) ;
 int VAR_75 ;
 scalar_t__ VAR_76 ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int) ;
 int VAR_77 ;
 int VAR_78 ;
 int FUNC_28 (int) ;
 int VAR_79 ;
 scalar_t__ VAR_80 ;
 int FUNC_29 (scalar_t__) ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 scalar_t__ VAR_84 ;
 int FUNC_30 (unsigned int,int ) ;
 int FUNC_31 (unsigned int,unsigned int) ;
 scalar_t__ VAR_85 ;
 int FUNC_32 (int) ;
 int FUNC_33 (int,char*,int) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (int ,unsigned long) ;
 int FUNC_37 (int ,char*,int) ;
 struct tegra_output* FUNC_38 (struct drm_encoder*) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (struct tegra_dc*) ;
 int FUNC_41 (struct tegra_dc*,int ) ;
 int FUNC_42 (struct tegra_dc*,int,int ) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (struct tegra_sor*) ;
 int FUNC_45 (struct tegra_sor*) ;
 int FUNC_46 (struct tegra_sor*) ;
 struct tegra_sor_hdmi_settings* FUNC_47 (struct tegra_sor*,int) ;
 int FUNC_48 (struct tegra_sor*) ;
 int FUNC_49 (struct tegra_sor*,struct drm_display_mode*) ;
 int FUNC_50 (struct tegra_sor*,struct drm_display_mode*,struct tegra_sor_state*) ;
 int FUNC_51 (struct tegra_sor*,int) ;
 int FUNC_52 (struct tegra_sor*,scalar_t__) ;
 int FUNC_53 (struct tegra_sor*,int ) ;
 int FUNC_54 (struct tegra_sor*) ;
 int FUNC_55 (struct tegra_sor*) ;
 int FUNC_56 (struct tegra_sor*,int,scalar_t__) ;
 struct tegra_sor* FUNC_57 (struct tegra_output*) ;
 struct tegra_sor_state* FUNC_58 (int ) ;
 struct tegra_dc* FUNC_59 (TYPE_6__*) ;
 int FUNC_60 (int,int) ;

__attribute__((used)) static void FUNC_61(struct drm_encoder *VAR_86)
{
 struct tegra_output *VAR_87 = FUNC_38(VAR_86);
 unsigned int VAR_88 = 1, VAR_89, VAR_90;
 struct tegra_dc *VAR_91 = FUNC_59(VAR_86->crtc);
 struct tegra_sor_hdmi_settings *VAR_92;
 struct tegra_sor *VAR_93 = FUNC_57(VAR_87);
 struct tegra_sor_state *VAR_94;
 struct drm_display_mode *VAR_95;
 unsigned long VAR_96, VAR_97;
 unsigned int VAR_98, VAR_99;
 u32 VAR_100;
 int VAR_101;

 VAR_94 = FUNC_58(VAR_87->connector.state);
 VAR_95 = &VAR_86->crtc->state->adjusted_mode;
 VAR_97 = VAR_95->clock * 1000;

 FUNC_39(VAR_93->dev);


 VAR_101 = FUNC_53(VAR_93, VAR_93->clk_safe);
 if (VAR_101 < 0) {
  FUNC_37(VAR_93->dev, "failed to set safe parent clock: %d\n", VAR_101);
  return;
 }

 VAR_98 = FUNC_34(VAR_93->clk) / 1000000 * 4;

 VAR_101 = FUNC_43(VAR_93->pad);
 if (VAR_101 < 0)
  FUNC_37(VAR_93->dev, "failed to power on I/O pad: %d\n", VAR_101);

 FUNC_60(20, 100);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll2);
 VAR_100 &= ~VAR_65;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll2);

 FUNC_60(20, 100);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll3);
 VAR_100 &= ~VAR_73;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll3);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll0);
 VAR_100 &= ~VAR_61;
 VAR_100 &= ~VAR_59;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll0);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll2);
 VAR_100 &= ~VAR_68;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll2);

 FUNC_60(200, 400);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll2);
 VAR_100 &= ~VAR_67;
 VAR_100 &= ~VAR_66;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll2);

 FUNC_60(20, 100);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->dp_padctl0);
 VAR_100 |= VAR_32 | VAR_29 |
   VAR_30 | VAR_31;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->dp_padctl0);

 while (1) {
  VAR_100 = FUNC_52(VAR_93, VAR_52);
  if ((VAR_100 & VAR_55) == 0)
   break;

  FUNC_60(250, 1000);
 }

 VAR_100 = VAR_56 | VAR_54 |
  VAR_53 | FUNC_11(5);
 FUNC_56(VAR_93, VAR_100, VAR_52);

 while (1) {
  VAR_100 = FUNC_52(VAR_93, VAR_52);
  if ((VAR_100 & VAR_56) == 0)
   break;

  FUNC_60(250, 1000);
 }

 VAR_100 = FUNC_52(VAR_93, VAR_20);
 VAR_100 &= ~VAR_25;
 VAR_100 &= ~VAR_21;

 if (VAR_95->clock < 340000) {
  FUNC_1("setting 2.7 GHz link speed\n");
  VAR_100 |= VAR_23;
 } else {
  FUNC_1("setting 5.4 GHz link speed\n");
  VAR_100 |= VAR_24;
 }

 VAR_100 |= VAR_22;
 FUNC_56(VAR_93, VAR_100, VAR_20);


 FUNC_60(250, 1000);

 VAR_100 = FUNC_52(VAR_93, VAR_26);
 VAR_100 &= ~VAR_27;
 VAR_100 |= FUNC_4(4);
 FUNC_56(VAR_93, VAR_100, VAR_26);

 VAR_100 = FUNC_52(VAR_93, VAR_36);
 VAR_100 &= ~VAR_37;
 VAR_100 &= ~VAR_39;
 VAR_100 &= ~VAR_40;
 VAR_100 &= ~VAR_38;
 FUNC_56(VAR_93, VAR_100, VAR_36);

 VAR_100 = FUNC_25(0) | FUNC_26(0) |
  FUNC_23(8) | FUNC_24(8);
 FUNC_56(VAR_93, VAR_100, VAR_76);

 VAR_100 = VAR_77 | VAR_78 |
  VAR_79 | FUNC_28(1);
 FUNC_56(VAR_93, VAR_100, FUNC_27(0));
 FUNC_56(VAR_93, VAR_100, FUNC_27(8));

 if (!VAR_93->soc->has_nvdisplay) {

  VAR_100 = FUNC_22(VAR_98) | FUNC_21(VAR_98);
  FUNC_56(VAR_93, VAR_100, VAR_74);
 }


 for (VAR_100 = 0, VAR_99 = 0; VAR_99 < 5; VAR_99++)
  VAR_100 |= FUNC_30(VAR_99, VAR_93->xbar_cfg[VAR_99]) |
    FUNC_31(VAR_99, VAR_99);

 FUNC_56(VAR_93, 0x00000000, VAR_85);
 FUNC_56(VAR_93, VAR_100, VAR_84);


 VAR_101 = FUNC_35(VAR_93->clk, VAR_93->clk_parent);
 if (VAR_101 < 0) {
  FUNC_37(VAR_93->dev, "failed to set parent clock: %d\n", VAR_101);
  return;
 }

 VAR_101 = FUNC_53(VAR_93, VAR_93->clk_pad);
 if (VAR_101 < 0) {
  FUNC_37(VAR_93->dev, "failed to set pad clock: %d\n", VAR_101);
  return;
 }


 VAR_96 = FUNC_34(VAR_93->clk_parent);

 if (VAR_95->clock >= 340000)
  VAR_96 /= 2;

 FUNC_1("setting clock to %lu Hz, mode: %lu Hz\n", VAR_96, VAR_97);

 FUNC_36(VAR_93->clk, VAR_96);

 if (!VAR_93->soc->has_nvdisplay) {
  VAR_100 = FUNC_10(VAR_91->pipe);


  if (VAR_95->clock < 75000)
   VAR_100 |= VAR_49;

  FUNC_56(VAR_93, VAR_100, VAR_48);
 }

 VAR_90 = ((VAR_95->htotal - VAR_95->hdisplay) - VAR_75 - 18) / 32;

 VAR_100 = VAR_43 | FUNC_8(VAR_90) |
  VAR_42 | FUNC_9(VAR_75);
 FUNC_56(VAR_93, VAR_100, VAR_41);

 if (!VAR_91->soc->has_nvdisplay) {

  VAR_89 = VAR_88 +
         (VAR_95->hsync_end - VAR_95->hsync_start) +
         (VAR_95->htotal - VAR_95->hsync_end) - 10;

  VAR_100 = VAR_15 | VAR_18 |
   VAR_17 | VAR_16;
  FUNC_42(VAR_91, VAR_100, VAR_9);

  VAR_100 = FUNC_2(VAR_89 + 8) | FUNC_3(VAR_89);
  FUNC_42(VAR_91, VAR_100, VAR_10);

  VAR_100 = FUNC_41(VAR_91, VAR_6);
  VAR_100 |= VAR_12;
  FUNC_42(VAR_91, VAR_100, VAR_6);
 }


 VAR_101 = FUNC_49(VAR_93, VAR_95);
 if (VAR_101 < 0)
  FUNC_37(VAR_93->dev, "failed to setup AVI infoframe: %d\n", VAR_101);


 FUNC_46(VAR_93);


 VAR_100 = FUNC_52(VAR_93, VAR_80);
 VAR_100 &= ~VAR_82;
 VAR_100 |= VAR_83;
 FUNC_56(VAR_93, VAR_100, VAR_80);


 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->dp_padctl0);
 VAR_100 &= ~VAR_28;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->dp_padctl0);


 VAR_92 = FUNC_47(VAR_93, VAR_95->clock * 1000);
 if (!VAR_92) {
  FUNC_37(VAR_93->dev, "no settings for pixel clock %d Hz\n",
   VAR_95->clock * 1000);
  return;
 }

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll0);
 VAR_100 &= ~VAR_58;
 VAR_100 &= ~VAR_57;
 VAR_100 &= ~VAR_60;
 VAR_100 |= FUNC_13(VAR_92->ichpmp);
 VAR_100 |= FUNC_12(VAR_92->filter);
 VAR_100 |= FUNC_14(VAR_92->vcocap);
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll0);


 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll1);
 VAR_100 &= ~VAR_62;
 VAR_100 &= ~VAR_64;
 VAR_100 |= FUNC_15(VAR_92->loadadj);
 VAR_100 |= FUNC_16(VAR_92->tmds_termadj);
 VAR_100 |= VAR_63;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll1);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->pll3);
 VAR_100 &= ~VAR_71;
 VAR_100 &= ~VAR_72;
 VAR_100 &= ~VAR_69;
 VAR_100 &= ~VAR_70;
 VAR_100 |= FUNC_19(VAR_92->bg_temp_coef);
 VAR_100 |= FUNC_20(VAR_92->bg_vref_level);
 VAR_100 |= FUNC_17(VAR_92->avdd10_level);
 VAR_100 |= FUNC_18(VAR_92->avdd14_level);
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->pll3);

 VAR_100 = VAR_92->drive_current[3] << 24 |
  VAR_92->drive_current[2] << 16 |
  VAR_92->drive_current[1] << 8 |
  VAR_92->drive_current[0] << 0;
 FUNC_56(VAR_93, VAR_100, VAR_50);

 VAR_100 = VAR_92->preemphasis[3] << 24 |
  VAR_92->preemphasis[2] << 16 |
  VAR_92->preemphasis[1] << 8 |
  VAR_92->preemphasis[0] << 0;
 FUNC_56(VAR_93, VAR_100, VAR_51);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->dp_padctl0);
 VAR_100 &= ~VAR_35;
 VAR_100 |= VAR_34;
 VAR_100 |= FUNC_6(VAR_92->tx_pu_value);
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->dp_padctl0);

 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->dp_padctl2);
 VAR_100 &= ~VAR_33;
 VAR_100 |= FUNC_5(VAR_92->sparepll);
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->dp_padctl2);


 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->dp_padctl0);
 VAR_100 |= VAR_28;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->dp_padctl0);

 if (!VAR_91->soc->has_nvdisplay) {

  VAR_100 = FUNC_32(1);
  FUNC_42(VAR_91, VAR_100, VAR_7);
 }

 VAR_100 = FUNC_41(VAR_91, VAR_5);
 VAR_100 &= ~VAR_11;
 VAR_100 &= ~VAR_4;

 switch (VAR_94->bpc) {
 case 6:
  VAR_100 |= VAR_2;
  break;

 case 8:
  VAR_100 |= VAR_3;
  break;

 case 10:
  VAR_100 |= VAR_0;
  break;

 case 12:
  VAR_100 |= VAR_1;
  break;

 default:
  FUNC_33(1, "%u bits-per-color not supported\n", VAR_94->bpc);
  VAR_100 |= VAR_3;
  break;
 }

 FUNC_42(VAR_91, VAR_100, VAR_5);


 VAR_100 = FUNC_52(VAR_93, VAR_80);
 VAR_100 &= ~VAR_81;
 VAR_100 |= FUNC_29(1 + VAR_91->pipe);
 FUNC_56(VAR_93, VAR_100, VAR_80);

 VAR_101 = FUNC_51(VAR_93, 250);
 if (VAR_101 < 0)
  FUNC_37(VAR_93->dev, "failed to power up SOR: %d\n", VAR_101);


 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->head_state0 + VAR_91->pipe);
 VAR_100 &= ~VAR_47;
 VAR_100 &= ~VAR_46;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->head_state0 + VAR_91->pipe);


 VAR_100 = FUNC_52(VAR_93, VAR_93->soc->regs->head_state0 + VAR_91->pipe);
 VAR_100 &= ~VAR_44;
 VAR_100 |= VAR_45;
 FUNC_56(VAR_93, VAR_100, VAR_93->soc->regs->head_state0 + VAR_91->pipe);

 FUNC_50(VAR_93, VAR_95, VAR_94);

 FUNC_54(VAR_93);


 VAR_100 = FUNC_52(VAR_93, VAR_36);
 VAR_100 &= ~VAR_37;
 FUNC_56(VAR_93, VAR_100, VAR_36);

 VAR_101 = FUNC_44(VAR_93);
 if (VAR_101 < 0)
  FUNC_37(VAR_93->dev, "failed to attach SOR: %d\n", VAR_101);


 VAR_100 = FUNC_41(VAR_91, VAR_8);

 if (!VAR_93->soc->has_nvdisplay)
  VAR_100 |= FUNC_7(1) | VAR_19;
 else
  VAR_100 |= FUNC_7(VAR_93->index);

 FUNC_42(VAR_91, VAR_100, VAR_8);

 if (VAR_91->soc->has_nvdisplay) {
  VAR_100 = FUNC_41(VAR_91, FUNC_0(VAR_93->index));
  VAR_100 &= ~VAR_13;
  VAR_100 |= VAR_14;
  FUNC_42(VAR_91, VAR_100, FUNC_0(VAR_93->index));
 }

 FUNC_40(VAR_91);

 VAR_101 = FUNC_55(VAR_93);
 if (VAR_101 < 0)
  FUNC_37(VAR_93->dev, "failed to wakeup SOR: %d\n", VAR_101);

 FUNC_48(VAR_93);
 FUNC_45(VAR_93);
}
