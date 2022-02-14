
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tegra_sor_state {int bpc; } ;
struct tegra_sor_config {int bits_per_pixel; } ;
struct tegra_sor {int dev; int aux; TYPE_4__* soc; int clk_dp; int * xbar_cfg; int pad; int clk_safe; } ;
struct TYPE_7__ {int state; } ;
struct tegra_output {scalar_t__ panel; TYPE_2__ connector; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {TYPE_5__* crtc; } ;
struct drm_dp_link {int num_lanes; int capabilities; int rate; } ;
struct drm_display_mode {int dummy; } ;
typedef int config ;
struct TYPE_10__ {TYPE_1__* state; } ;
struct TYPE_9__ {TYPE_3__* regs; } ;
struct TYPE_8__ {int dp_padctl0; int pll2; int pll0; int pll1; int pll3; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 int FUNC_2 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int VAR_47 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct drm_dp_link*) ;
 int FUNC_10 (int ,struct drm_dp_link*) ;
 int FUNC_11 (int ,struct drm_dp_link*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 struct tegra_output* FUNC_15 (struct drm_encoder*) ;
 int FUNC_16 (struct tegra_sor_config*,int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct tegra_dc*) ;
 int FUNC_19 (struct tegra_dc*,int ) ;
 int FUNC_20 (struct tegra_dc*,int,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct tegra_sor*,struct tegra_sor_config*) ;
 int FUNC_23 (struct tegra_sor*) ;
 int FUNC_24 (struct tegra_sor*,struct drm_display_mode*,struct tegra_sor_config*,struct drm_dp_link*) ;
 int FUNC_25 (struct tegra_sor*,struct drm_dp_link*) ;
 int FUNC_26 (struct tegra_sor*,struct drm_display_mode*,struct tegra_sor_state*) ;
 int FUNC_27 (struct tegra_sor*,int) ;
 int FUNC_28 (struct tegra_sor*,int ) ;
 int FUNC_29 (struct tegra_sor*,int ) ;
 int FUNC_30 (struct tegra_sor*,int) ;
 int FUNC_31 (struct tegra_sor*) ;
 int FUNC_32 (struct tegra_sor*) ;
 int FUNC_33 (struct tegra_sor*,int,int ) ;
 struct tegra_sor* FUNC_34 (struct tegra_output*) ;
 struct tegra_sor_state* FUNC_35 (int ) ;
 struct tegra_dc* FUNC_36 (TYPE_5__*) ;
 int FUNC_37 (int,int) ;

__attribute__((used)) static void FUNC_38(struct drm_encoder *VAR_48)
{
 struct drm_display_mode *VAR_49 = &VAR_48->crtc->state->adjusted_mode;
 struct tegra_output *VAR_50 = FUNC_15(VAR_48);
 struct tegra_dc *VAR_51 = FUNC_36(VAR_48->crtc);
 struct tegra_sor *VAR_52 = FUNC_34(VAR_50);
 struct tegra_sor_config VAR_53;
 struct tegra_sor_state *VAR_54;
 struct drm_dp_link VAR_55;
 u8 VAR_56, VAR_57;
 unsigned int VAR_58;
 int VAR_59 = 0;
 u32 VAR_60;

 VAR_54 = FUNC_35(VAR_50->connector.state);

 FUNC_17(VAR_52->dev);

 if (VAR_50->panel)
  FUNC_14(VAR_50->panel);

 VAR_59 = FUNC_8(VAR_52->aux);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to enable DP: %d\n", VAR_59);

 VAR_59 = FUNC_11(VAR_52->aux, &VAR_55);
 if (VAR_59 < 0) {
  FUNC_7(VAR_52->dev, "failed to probe eDP link: %d\n", VAR_59);
  return;
 }


 VAR_59 = FUNC_29(VAR_52, VAR_52->clk_safe);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to set safe parent clock: %d\n", VAR_59);

 FUNC_16(&VAR_53, 0, sizeof(VAR_53));
 VAR_53.bits_per_pixel = VAR_54->bpc * 3;

 VAR_59 = FUNC_24(VAR_52, VAR_49, &VAR_53, &VAR_55);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to compute configuration: %d\n", VAR_59);

 VAR_60 = FUNC_28(VAR_52, VAR_2);
 VAR_60 &= ~VAR_3;
 VAR_60 |= VAR_4;
 FUNC_33(VAR_52, VAR_60, VAR_2);

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 &= ~VAR_36;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);
 FUNC_37(20, 100);

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll3);
 VAR_60 |= VAR_42;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll3);

 VAR_60 = FUNC_3(0xf) | VAR_32 |
  VAR_29 | VAR_31;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll0);

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 |= VAR_40;
 VAR_60 &= ~VAR_41;
 VAR_60 |= VAR_37;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);

 VAR_60 = VAR_34 | VAR_35;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll1);

 while (1) {
  VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
  if ((VAR_60 & VAR_41) == 0)
   break;

  FUNC_37(250, 1000);
 }

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 &= ~VAR_39;
 VAR_60 &= ~VAR_38;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);






 VAR_60 = FUNC_28(VAR_52, VAR_2);
 VAR_60 &= ~VAR_6;
 VAR_60 |= VAR_5;
 FUNC_33(VAR_52, VAR_60, VAR_2);


 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 |= VAR_41 | VAR_38 |
   VAR_36;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll0);
 VAR_60 |= VAR_33 | VAR_30;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll0);

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->dp_padctl0);
 VAR_60 &= ~VAR_16;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->dp_padctl0);


 VAR_59 = FUNC_21(VAR_52->pad);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to power on I/O pad: %d\n", VAR_59);

 FUNC_37(5, 100);


 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 &= ~VAR_36;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);

 FUNC_37(20, 100);


 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll0);
 VAR_60 &= ~VAR_33;
 VAR_60 &= ~VAR_30;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll0);

 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 &= ~VAR_41;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);

 FUNC_37(200, 1000);


 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->pll2);
 VAR_60 &= ~VAR_38;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->pll2);


 for (VAR_60 = 0, VAR_58 = 0; VAR_58 < 5; VAR_58++)
  VAR_60 |= FUNC_4(VAR_58, VAR_52->xbar_cfg[VAR_58]) |
    FUNC_5(VAR_58, VAR_58);

 FUNC_33(VAR_52, 0x00000000, VAR_47);
 FUNC_33(VAR_52, VAR_60, VAR_46);


 VAR_59 = FUNC_29(VAR_52, VAR_52->clk_dp);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to set parent clock: %d\n", VAR_59);


 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->dp_padctl0);

 if (VAR_55.num_lanes <= 2)
  VAR_60 &= ~(VAR_20 | VAR_19);
 else
  VAR_60 |= VAR_20 | VAR_19;

 if (VAR_55.num_lanes <= 1)
  VAR_60 &= ~VAR_18;
 else
  VAR_60 |= VAR_18;

 if (VAR_55.num_lanes == 0)
  VAR_60 &= ~VAR_17;
 else
  VAR_60 |= VAR_17;

 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->dp_padctl0);

 VAR_60 = FUNC_28(VAR_52, VAR_12);
 VAR_60 &= ~VAR_15;
 VAR_60 |= FUNC_1(VAR_55.num_lanes);
 FUNC_33(VAR_52, VAR_60, VAR_12);


 VAR_60 = VAR_28 | VAR_27 |
  VAR_26;
 FUNC_33(VAR_52, VAR_60, VAR_25);

 while (1) {
  VAR_60 = FUNC_28(VAR_52, VAR_25);
  if ((VAR_60 & VAR_28) == 0)
   break;

  FUNC_37(250, 1000);
 }


 VAR_60 = FUNC_28(VAR_52, VAR_2);
 VAR_60 &= ~VAR_6;
 VAR_60 |= FUNC_12(VAR_55.rate) << 2;
 FUNC_33(VAR_52, VAR_60, VAR_2);

 FUNC_22(VAR_52, &VAR_53);


 VAR_60 = FUNC_28(VAR_52, VAR_12);
 VAR_60 |= VAR_13;
 VAR_60 |= VAR_14;
 FUNC_33(VAR_52, VAR_60, VAR_12);

 for (VAR_58 = 0, VAR_60 = 0; VAR_58 < 4; VAR_58++) {
  unsigned long VAR_61 = VAR_22 |
         VAR_24 |
         VAR_23;
  VAR_60 = (VAR_60 << 8) | VAR_61;
 }

 FUNC_33(VAR_52, VAR_60, VAR_21);


 VAR_60 = FUNC_28(VAR_52, VAR_52->soc->regs->dp_padctl0);
 VAR_60 |= VAR_16;
 FUNC_33(VAR_52, VAR_60, VAR_52->soc->regs->dp_padctl0);

 VAR_59 = FUNC_11(VAR_52->aux, &VAR_55);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to probe eDP link: %d\n", VAR_59);

 VAR_59 = FUNC_10(VAR_52->aux, &VAR_55);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to power up eDP link: %d\n", VAR_59);

 VAR_59 = FUNC_9(VAR_52->aux, &VAR_55);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to configure eDP link: %d\n", VAR_59);

 VAR_56 = FUNC_12(VAR_55.rate);
 VAR_57 = VAR_55.num_lanes;

 VAR_60 = FUNC_28(VAR_52, VAR_2);
 VAR_60 &= ~VAR_6;
 VAR_60 |= FUNC_0(VAR_56);
 FUNC_33(VAR_52, VAR_60, VAR_2);

 VAR_60 = FUNC_28(VAR_52, VAR_12);
 VAR_60 &= ~VAR_15;
 VAR_60 |= FUNC_1(VAR_57);

 if (VAR_55.capabilities & VAR_1)
  VAR_60 |= VAR_14;

 FUNC_33(VAR_52, VAR_60, VAR_12);



 for (VAR_58 = 0; VAR_58 < VAR_55.num_lanes; VAR_58++) {
  unsigned long VAR_62 = VAR_22 |
         VAR_24 |
         VAR_23;
  VAR_60 = (VAR_60 << 8) | VAR_62;
 }

 FUNC_33(VAR_52, VAR_60, VAR_21);

 VAR_59 = FUNC_25(VAR_52, &VAR_55);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "DP fast link training failed: %d\n", VAR_59);

 FUNC_6(VAR_52->dev, "fast link training succeeded\n");

 VAR_59 = FUNC_27(VAR_52, 250);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to power up SOR: %d\n", VAR_59);


 VAR_60 = VAR_10 | VAR_8 | VAR_9 |
  VAR_11;
 FUNC_33(VAR_52, VAR_60, VAR_7);


 VAR_60 = FUNC_28(VAR_52, VAR_43);
 VAR_60 &= ~VAR_45;
 VAR_60 |= VAR_44;
 FUNC_33(VAR_52, VAR_60, VAR_43);

 FUNC_26(VAR_52, VAR_49, VAR_54);


 VAR_59 = FUNC_30(VAR_52, 250);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to setup PWM: %d\n", VAR_59);

 FUNC_31(VAR_52);

 VAR_60 = FUNC_19(VAR_51, VAR_0);
 VAR_60 |= FUNC_2(0);
 FUNC_20(VAR_51, VAR_60, VAR_0);

 FUNC_18(VAR_51);

 VAR_59 = FUNC_23(VAR_52);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to attach SOR: %d\n", VAR_59);

 VAR_59 = FUNC_32(VAR_52);
 if (VAR_59 < 0)
  FUNC_7(VAR_52->dev, "failed to enable DC: %d\n", VAR_59);

 if (VAR_50->panel)
  FUNC_13(VAR_50->panel);
}
