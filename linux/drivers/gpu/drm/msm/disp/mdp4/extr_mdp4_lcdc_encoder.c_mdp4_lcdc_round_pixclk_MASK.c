
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_lcdc_encoder {int lcdc_clk; } ;
struct drm_encoder {int dummy; } ;


 long FUNC_0 (int ,unsigned long) ;
 struct mdp4_lcdc_encoder* FUNC_1 (struct drm_encoder*) ;

long FUNC_2(struct drm_encoder *VAR_0, unsigned long VAR_1)
{
 struct mdp4_lcdc_encoder *VAR_2 =
   FUNC_1(VAR_0);
 return FUNC_0(VAR_2->lcdc_clk, VAR_1);
}
