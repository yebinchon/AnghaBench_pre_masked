
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_dphy_timing {int clk_prepare; int hs_rqst; int clk_zero; } ;
typedef int s32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_dphy_timing *VAR_0,
     s32 VAR_1, s32 VAR_2, s32 VAR_3)
{
 s32 VAR_4, VAR_5, VAR_6;
 s32 VAR_7;


 VAR_7 = 300 * VAR_2 - ((VAR_0->clk_prepare >> 1) + 1) * 2 * VAR_1;
 VAR_5 = FUNC_0(VAR_7, VAR_1) - 2;
 if (VAR_5 > 255) {
  VAR_4 = 511;
  VAR_6 = FUNC_1(2 * VAR_5, VAR_5, VAR_3, 0, 1);
 } else {
  VAR_4 = 255;
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_3, 0, 1);
 }


 VAR_7 = (VAR_0->hs_rqst + VAR_0->clk_prepare + VAR_6) & 0x7;
 VAR_0->clk_zero = VAR_6 + 8 - VAR_7;
}
