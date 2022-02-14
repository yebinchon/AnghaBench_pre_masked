
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vga_pwrctrl {int mask; int reg; int regmap; } ;
struct zx_vga {struct zx_vga_pwrctrl pwrctrl; } ;
struct drm_encoder {int crtc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct zx_vga* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_1)
{
 struct zx_vga *VAR_2 = FUNC_1(VAR_1);
 struct zx_vga_pwrctrl *VAR_3 = &VAR_2->pwrctrl;

 FUNC_2(VAR_0, VAR_1->crtc);


 FUNC_0(VAR_3->regmap, VAR_3->reg, VAR_3->mask, 0);
}
