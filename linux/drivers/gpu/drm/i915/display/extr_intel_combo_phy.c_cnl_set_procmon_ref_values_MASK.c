
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct cnl_procmon {int dw1; int dw9; int dw10; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct cnl_procmon* FUNC_5 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_0,
           enum phy VAR_1)
{
 const struct cnl_procmon *VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_5(VAR_0, VAR_1);

 VAR_3 = FUNC_0(FUNC_2(VAR_1));
 VAR_3 &= ~((0xff << 16) | 0xff);
 VAR_3 |= VAR_2->dw1;
 FUNC_1(FUNC_2(VAR_1), VAR_3);

 FUNC_1(FUNC_4(VAR_1), VAR_2->dw9);
 FUNC_1(FUNC_3(VAR_1), VAR_2->dw10);
}
