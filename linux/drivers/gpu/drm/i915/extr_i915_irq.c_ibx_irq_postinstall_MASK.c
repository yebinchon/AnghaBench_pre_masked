
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int uncore; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_7)
{
 u32 VAR_8;

 if (FUNC_3(VAR_7))
  return;

 if (FUNC_1(VAR_7))
  VAR_8 = VAR_4 | VAR_2 | VAR_6;
 else if (FUNC_0(VAR_7) || FUNC_2(VAR_7))
  VAR_8 = VAR_5 | VAR_3;
 else
  VAR_8 = VAR_5;

 FUNC_5(&VAR_7->uncore, VAR_0);
 FUNC_4(VAR_1, ~VAR_8);

 if (FUNC_1(VAR_7) || FUNC_0(VAR_7) ||
     FUNC_2(VAR_7))
  FUNC_6(VAR_7);
 else
  FUNC_7(VAR_7);
}
