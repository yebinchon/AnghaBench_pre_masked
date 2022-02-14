
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int * chv_phy_assert; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,int,int,int,int,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_11, enum dpio_phy VAR_12,
         enum dpio_channel VAR_13, bool VAR_14, unsigned int VAR_15)
{
 enum pipe VAR_16 = VAR_12 == VAR_6 ? VAR_7 : VAR_8;
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 if (!VAR_11->chv_phy_assert[VAR_12])
  return;

 if (VAR_13 == VAR_4)
  VAR_17 = VAR_9;
 else
  VAR_17 = VAR_10;

 FUNC_1(VAR_11);
 VAR_18 = FUNC_3(VAR_11, VAR_16, VAR_17);
 FUNC_2(VAR_11);






 if (!VAR_14 || VAR_15 == 0xf) {
  VAR_19 = VAR_0 | VAR_1;
  if (VAR_13 == VAR_5 && VAR_18 == 0)
   VAR_19 = 0;
 } else if (VAR_15 != 0x0) {
  VAR_19 = VAR_1;
 } else {
  VAR_19 = 0;
 }

 if (VAR_13 == VAR_4)
  VAR_20 = VAR_18 >> VAR_2;
 else
  VAR_20 = VAR_18 >> VAR_3;
 VAR_20 &= VAR_0 | VAR_1;

 FUNC_0(VAR_20 != VAR_19,
      "Unexpected DPIO lane power down: all %d, any %d. Expected: all %d, any %d. (0x%x = 0x%08x)\n",
      !!(VAR_20 & VAR_0), !!(VAR_20 & VAR_1),
      !!(VAR_19 & VAR_0), !!(VAR_19 & VAR_1),
      VAR_17, VAR_18);
}
