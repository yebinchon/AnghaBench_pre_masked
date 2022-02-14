
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tegra_sor_state {int bpc; } ;
struct TYPE_5__ {int crtc; } ;
struct TYPE_6__ {TYPE_1__ encoder; } ;
struct tegra_sor {TYPE_4__* soc; TYPE_2__ output; } ;
struct tegra_dc {scalar_t__ pipe; } ;
struct drm_display_mode {int flags; int vtotal; int htotal; int vsync_end; int vsync_start; int hsync_end; int hsync_start; unsigned int vdisplay; unsigned int hdisplay; } ;
struct TYPE_8__ {TYPE_3__* regs; } ;
struct TYPE_7__ {scalar_t__ head_state5; scalar_t__ head_state4; scalar_t__ head_state3; scalar_t__ head_state2; scalar_t__ head_state1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct tegra_sor*,scalar_t__) ;
 int FUNC_2 (struct tegra_sor*,int,scalar_t__) ;
 struct tegra_dc* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_sor *VAR_16,
          const struct drm_display_mode *VAR_17,
          struct tegra_sor_state *VAR_18)
{
 struct tegra_dc *VAR_19 = FUNC_3(VAR_16->output.encoder.crtc);
 unsigned int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26;

 VAR_26 = FUNC_1(VAR_16, VAR_4);
 VAR_26 &= ~VAR_14;
 VAR_26 &= ~VAR_6;
 VAR_26 &= ~VAR_8;

 VAR_26 |= VAR_5 |
   FUNC_0(VAR_19->pipe + 1);

 if (VAR_17->flags & VAR_2)
  VAR_26 &= ~VAR_7;

 if (VAR_17->flags & VAR_0)
  VAR_26 |= VAR_7;

 if (VAR_17->flags & VAR_3)
  VAR_26 &= ~VAR_15;

 if (VAR_17->flags & VAR_1)
  VAR_26 |= VAR_15;

 switch (VAR_18->bpc) {
 case 16:
  VAR_26 |= VAR_13;
  break;

 case 12:
  VAR_26 |= VAR_12;
  break;

 case 10:
  VAR_26 |= VAR_11;
  break;

 case 8:
  VAR_26 |= VAR_10;
  break;

 case 6:
  VAR_26 |= VAR_9;
  break;

 default:
  VAR_26 |= VAR_10;
  break;
 }

 FUNC_2(VAR_16, VAR_26, VAR_4);






 VAR_26 = ((VAR_17->vtotal & 0x7fff) << 16) | (VAR_17->htotal & 0x7fff);
 FUNC_2(VAR_16, VAR_26, VAR_16->soc->regs->head_state1 + VAR_19->pipe);


 VAR_21 = VAR_17->vsync_end - VAR_17->vsync_start - 1;
 VAR_23 = VAR_17->hsync_end - VAR_17->hsync_start - 1;

 VAR_26 = ((VAR_21 & 0x7fff) << 16) | (VAR_23 & 0x7fff);
 FUNC_2(VAR_16, VAR_26, VAR_16->soc->regs->head_state2 + VAR_19->pipe);


 VAR_20 = VAR_21 + (VAR_17->vtotal - VAR_17->vsync_end);
 VAR_22 = VAR_23 + (VAR_17->htotal - VAR_17->hsync_end);

 VAR_26 = ((VAR_20 & 0x7fff) << 16) | (VAR_22 & 0x7fff);
 FUNC_2(VAR_16, VAR_26, VAR_16->soc->regs->head_state3 + VAR_19->pipe);


 VAR_24 = VAR_20 + VAR_17->vdisplay;
 VAR_25 = VAR_22 + VAR_17->hdisplay;

 VAR_26 = ((VAR_24 & 0x7fff) << 16) | (VAR_25 & 0x7fff);
 FUNC_2(VAR_16, VAR_26, VAR_16->soc->regs->head_state4 + VAR_19->pipe);


 FUNC_2(VAR_16, 0x001, VAR_16->soc->regs->head_state5 + VAR_19->pipe);
}
