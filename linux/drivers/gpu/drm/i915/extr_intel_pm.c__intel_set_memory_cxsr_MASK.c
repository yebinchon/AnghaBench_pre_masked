
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 int VAR_7 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static bool FUNC_16(struct drm_i915_private *VAR_8, bool VAR_9)
{
 bool VAR_10;
 u32 VAR_11;

 if (FUNC_10(VAR_8) || FUNC_3(VAR_8)) {
  VAR_10 = FUNC_1(VAR_3) & VAR_4;
  FUNC_2(VAR_3, VAR_9 ? VAR_4 : 0);
  FUNC_11(VAR_3);
 } else if (FUNC_4(VAR_8) || FUNC_8(VAR_8)) {
  VAR_10 = FUNC_1(VAR_1) & VAR_2;
  FUNC_2(VAR_1, VAR_9 ? VAR_2 : 0);
  FUNC_11(VAR_1);
 } else if (FUNC_9(VAR_8)) {
  VAR_11 = FUNC_1(VAR_0);
  VAR_10 = VAR_11 & VAR_7;
  if (VAR_9)
   VAR_11 |= VAR_7;
  else
   VAR_11 &= ~VAR_7;
  FUNC_2(VAR_0, VAR_11);
  FUNC_11(VAR_0);
 } else if (FUNC_6(VAR_8) || FUNC_7(VAR_8)) {
  VAR_10 = FUNC_1(VAR_1) & VAR_2;
  VAR_11 = VAR_9 ? FUNC_13(VAR_2) :
          FUNC_12(VAR_2);
  FUNC_2(VAR_1, VAR_11);
  FUNC_11(VAR_1);
 } else if (FUNC_5(VAR_8)) {





  VAR_10 = FUNC_1(VAR_5) & VAR_6;
  VAR_11 = VAR_9 ? FUNC_13(VAR_6) :
          FUNC_12(VAR_6);
  FUNC_2(VAR_5, VAR_11);
  FUNC_11(VAR_5);
 } else {
  return 0;
 }

 FUNC_15(VAR_8, VAR_10, VAR_9);

 FUNC_0("memory self-refresh is %s (was %s)\n",
        FUNC_14(VAR_9),
        FUNC_14(VAR_10));

 return VAR_10;
}
