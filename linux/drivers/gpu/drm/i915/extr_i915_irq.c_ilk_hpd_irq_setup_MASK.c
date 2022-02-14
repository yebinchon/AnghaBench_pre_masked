
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int ,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_6)
{
 u32 VAR_7, VAR_8;

 if (FUNC_0(VAR_6) >= 8) {
  VAR_7 = VAR_2;
  VAR_8 = FUNC_5(VAR_6, VAR_3);

  FUNC_1(VAR_6, VAR_7, VAR_8);
 } else if (FUNC_0(VAR_6) >= 7) {
  VAR_7 = VAR_1;
  VAR_8 = FUNC_5(VAR_6, VAR_5);

  FUNC_4(VAR_6, VAR_7, VAR_8);
 } else {
  VAR_7 = VAR_0;
  VAR_8 = FUNC_5(VAR_6, VAR_4);

  FUNC_4(VAR_6, VAR_7, VAR_8);
 }

 FUNC_3(VAR_6);

 FUNC_2(VAR_6);
}
