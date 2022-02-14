
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int const*) ;
 int FUNC_8 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_7)
{
 u32 VAR_8, VAR_9;
 const u32 *VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_2(VAR_7) >= 12 ? VAR_6 : VAR_5;
 VAR_9 = FUNC_7(VAR_7, VAR_10);
 VAR_8 = VAR_2 | VAR_1;

 VAR_11 = FUNC_0(VAR_0);
 VAR_11 &= ~VAR_8;
 FUNC_1(VAR_0, VAR_11);
 FUNC_4(VAR_0);

 FUNC_5(VAR_7);

 if (FUNC_3(VAR_7) >= VAR_4)
  FUNC_8(VAR_7);
 else if (FUNC_3(VAR_7) >= VAR_3)
  FUNC_6(VAR_7);
}
