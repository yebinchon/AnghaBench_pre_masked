
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_ctrl {int ahb_clk; int aux_clk; int link_clk; int pixel_clk; int mdp_core_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct edp_ctrl *VAR_5, u32 VAR_6)
{
 if (VAR_6 & VAR_3)
  FUNC_0(VAR_5->mdp_core_clk);
 if (VAR_6 & VAR_4)
  FUNC_0(VAR_5->pixel_clk);
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_5->link_clk);
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5->aux_clk);
 if (VAR_6 & VAR_0)
  FUNC_0(VAR_5->ahb_clk);
}
