
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int rawclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*) ;

__attribute__((used)) static u32 FUNC_7(struct drm_i915_private *VAR_8)
{
 u32 VAR_9 = 12500;
 u32 VAR_10 = 19200;
 u32 VAR_11 = 24000;

 if (FUNC_1(VAR_8) <= 4) {






  return VAR_8->rawclk_freq / 16;
 } else if (FUNC_1(VAR_8) <= 8) {






  return VAR_9;
 } else if (FUNC_1(VAR_8) <= 9) {
  u32 VAR_12 = FUNC_0(VAR_0);
  u32 VAR_13 = 0;

  if ((VAR_12 & VAR_4) == VAR_3) {
   VAR_13 = FUNC_6(VAR_8);
  } else {
   VAR_13 = FUNC_2(VAR_8) ? VAR_10 : VAR_11;





   VAR_13 >>= 3 - ((VAR_12 & VAR_1) >>
          VAR_2);
  }

  return VAR_13;
 } else if (FUNC_1(VAR_8) <= 12) {
  u32 VAR_14 = FUNC_0(VAR_0);
  u32 VAR_15 = 0;






  if ((VAR_14 & VAR_4) == VAR_3) {
   VAR_15 = FUNC_6(VAR_8);
  } else {
   u32 VAR_16 = FUNC_0(VAR_7);

   if (FUNC_1(VAR_8) <= 10)
    VAR_15 = FUNC_4(VAR_8,
        VAR_16);
   else
    VAR_15 = FUNC_5(VAR_8,
        VAR_16);





   VAR_15 >>= 3 - ((VAR_16 &
           VAR_5) >>
          VAR_6);
  }

  return VAR_15;
 }

 FUNC_3("Unknown gen, unable to read command streamer timestamp frequency\n");
 return 0;
}
