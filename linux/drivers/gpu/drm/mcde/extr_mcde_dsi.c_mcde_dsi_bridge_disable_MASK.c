
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mcde_dsi {int lp_clk; int hs_clk; scalar_t__ regs; TYPE_1__* mdsi; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_2__ {int mode_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mcde_dsi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mcde_dsi*) ;
 int FUNC_3 (struct mcde_dsi*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_bridge *VAR_4)
{
 struct mcde_dsi *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;


 FUNC_5(0, VAR_5->regs + VAR_2);

 if (VAR_5->mdsi->mode_flags & VAR_3) {

  VAR_6 = FUNC_4(VAR_5->regs + VAR_0);
  VAR_6 &= ~VAR_1;
  FUNC_5(VAR_6, VAR_5->regs + VAR_0);
  FUNC_3(VAR_5);
 } else {

  FUNC_2(VAR_5);
 }


 FUNC_1(VAR_5->hs_clk);
 FUNC_1(VAR_5->lp_clk);
}
