
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int clock; } ;
struct ade_hw_ctx {int ade_pix_clk; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ade_hw_ctx *VAR_0,
       struct drm_display_mode *VAR_1,
       struct drm_display_mode *VAR_2)
{
 u32 VAR_3 = VAR_1->clock * 1000;
 int VAR_4;





 VAR_4 = FUNC_2(VAR_0->ade_pix_clk, VAR_3);
 if (VAR_4)
  FUNC_0("failed to set pixel clk %dHz (%d)\n", VAR_3, VAR_4);
 VAR_2->clock = FUNC_1(VAR_0->ade_pix_clk) / 1000;
}
