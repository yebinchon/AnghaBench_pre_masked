
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxsfb_drm_private {scalar_t__ base; scalar_t__ clk; scalar_t__ clk_disp_axi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxsfb_drm_private *VAR_6)
{
 u32 VAR_7;

 if (VAR_6->clk_disp_axi)
  FUNC_0(VAR_6->clk_disp_axi);
 FUNC_0(VAR_6->clk);


 FUNC_2(VAR_0, VAR_6->base + VAR_2 + VAR_4);


 VAR_7 = FUNC_1(VAR_6->base + VAR_3);
 VAR_7 |= VAR_5;
 FUNC_2(VAR_7, VAR_6->base + VAR_3);

 FUNC_2(VAR_1, VAR_6->base + VAR_2 + VAR_4);
}
