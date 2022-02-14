
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mcde_dsi {scalar_t__ regs; TYPE_1__* mdsi; void* hs_freq; int dev; int hs_clk; void* lp_freq; int lp_clk; } ;
struct drm_display_mode {int clock; int vdisplay; int hdisplay; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_2__ {int mode_flags; long lp_rate; long hs_rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 struct mcde_dsi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,void*,...) ;
 int FUNC_6 (struct mcde_dsi*,struct drm_display_mode const*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct drm_bridge *VAR_5,
         const struct drm_display_mode *VAR_6,
         const struct drm_display_mode *VAR_7)
{
 struct mcde_dsi *VAR_8 = FUNC_0(VAR_5);
 unsigned long VAR_9 = VAR_6->clock * 1000;
 unsigned long VAR_10, VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (!VAR_8->mdsi) {
  FUNC_4(VAR_8->dev, "no DSI device attached to encoder!\n");
  return;
 }

 FUNC_5(VAR_8->dev, "set DSI master to %dx%d %lu Hz %s mode\n",
   VAR_6->hdisplay, VAR_6->vdisplay, VAR_9,
   (VAR_8->mdsi->mode_flags & VAR_4) ? "VIDEO" : "CMD"
  );


 if (VAR_8->mdsi->lp_rate)
  VAR_11 = VAR_8->mdsi->lp_rate;
 else
  VAR_11 = VAR_3;
 if (VAR_8->mdsi->hs_rate)
  VAR_10 = VAR_8->mdsi->hs_rate;
 else
  VAR_10 = VAR_2;


 VAR_8->lp_freq = FUNC_2(VAR_8->lp_clk, VAR_11);
 VAR_13 = FUNC_3(VAR_8->lp_clk, VAR_8->lp_freq);
 if (VAR_13)
  FUNC_4(VAR_8->dev, "failed to set LP clock rate %lu Hz\n",
   VAR_8->lp_freq);

 VAR_8->hs_freq = FUNC_2(VAR_8->hs_clk, VAR_10);
 VAR_13 = FUNC_3(VAR_8->hs_clk, VAR_8->hs_freq);
 if (VAR_13)
  FUNC_4(VAR_8->dev, "failed to set HS clock rate %lu Hz\n",
   VAR_8->hs_freq);


 VAR_13 = FUNC_1(VAR_8->lp_clk);
 if (VAR_13)
  FUNC_4(VAR_8->dev, "failed to enable LP clock\n");
 else
  FUNC_5(VAR_8->dev, "DSI LP clock rate %lu Hz\n",
    VAR_8->lp_freq);
 VAR_13 = FUNC_1(VAR_8->hs_clk);
 if (VAR_13)
  FUNC_4(VAR_8->dev, "failed to enable HS clock\n");
 else
  FUNC_5(VAR_8->dev, "DSI HS clock rate %lu Hz\n",
    VAR_8->hs_freq);

 if (VAR_8->mdsi->mode_flags & VAR_4) {
  FUNC_6(VAR_8, VAR_6);
 } else {

  VAR_12 = FUNC_7(VAR_8->regs + VAR_0);





  VAR_12 &= ~VAR_1;
  FUNC_8(VAR_12, VAR_8->regs + VAR_0);
 }
}
