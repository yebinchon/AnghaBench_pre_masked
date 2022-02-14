
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int mchbar_need_disable; int bridge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static void
FUNC_8(struct drm_i915_private *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4) >= 4 ? VAR_3 : VAR_2;
 u32 VAR_6;
 bool VAR_7;

 if (FUNC_4(VAR_4) || FUNC_1(VAR_4))
  return;

 VAR_4->mchbar_need_disable = 0;

 if (FUNC_2(VAR_4) || FUNC_3(VAR_4)) {
  FUNC_6(VAR_4->bridge_dev, VAR_0, &VAR_6);
  VAR_7 = !!(VAR_6 & VAR_1);
 } else {
  FUNC_6(VAR_4->bridge_dev, VAR_5, &VAR_6);
  VAR_7 = VAR_6 & 1;
 }


 if (VAR_7)
  return;

 if (FUNC_5(VAR_4))
  return;

 VAR_4->mchbar_need_disable = 1;


 if (FUNC_2(VAR_4) || FUNC_3(VAR_4)) {
  FUNC_7(VAR_4->bridge_dev, VAR_0,
           VAR_6 | VAR_1);
 } else {
  FUNC_6(VAR_4->bridge_dev, VAR_5, &VAR_6);
  FUNC_7(VAR_4->bridge_dev, VAR_5, VAR_6 | 1);
 }
}
