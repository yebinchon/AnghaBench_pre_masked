
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct drm_i915_private*,int*,int*,int,int,int ,int ) ;
 int FUNC_5 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_6,
     u32 VAR_7)
{
 u32 VAR_8 = 0, VAR_9 = 0;

 if (FUNC_1(VAR_6) || FUNC_2(VAR_6) ||
     FUNC_0(VAR_6)) {
  u32 VAR_10 = VAR_7 & VAR_1;

  if (VAR_10) {
   FUNC_4(VAR_6, &VAR_8, &VAR_9,
        VAR_10, VAR_10,
        VAR_3,
        VAR_5);

   FUNC_5(VAR_6, VAR_8, VAR_9);
  }

  if (VAR_7 & VAR_0)
   FUNC_3(VAR_6);
 } else {
  u32 VAR_11 = VAR_7 & VAR_2;

  if (VAR_11) {
   FUNC_4(VAR_6, &VAR_8, &VAR_9,
        VAR_11, VAR_11,
        VAR_4,
        VAR_5);
   FUNC_5(VAR_6, VAR_8, VAR_9);
  }
 }
}
