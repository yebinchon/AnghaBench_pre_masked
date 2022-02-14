
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tvenc_pwrctrl {int mask; int reg; int regmap; } ;
struct zx_tvenc {scalar_t__ mmio; struct zx_tvenc_pwrctrl pwrctrl; } ;
struct drm_encoder {int crtc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct zx_tvenc* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_2)
{
 struct zx_tvenc *VAR_3 = FUNC_1(VAR_2);
 struct zx_tvenc_pwrctrl *VAR_4 = &VAR_3->pwrctrl;


 FUNC_0(VAR_4->regmap, VAR_4->reg, VAR_4->mask,
      VAR_4->mask);

 FUNC_2(VAR_1, VAR_2->crtc);

 FUNC_3(VAR_3->mmio + VAR_0, 1);
}
