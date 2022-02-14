
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well {TYPE_1__* desc; } ;
struct drm_i915_private {int chv_phy_control; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*,int,int ) ;
 int FUNC_12 (struct drm_i915_private*,int,int ,int) ;
 int FUNC_13 (struct drm_i915_private*,struct i915_power_well*,int) ;

__attribute__((used)) static void FUNC_14(struct drm_i915_private *VAR_16,
        struct i915_power_well *VAR_17)
{
 enum dpio_phy VAR_18;
 enum pipe VAR_19;
 u32 VAR_20;

 FUNC_5(VAR_17->desc->id != VAR_14 &&
       VAR_17->desc->id != VAR_2);

 if (VAR_17->desc->id == VAR_14) {
  VAR_19 = VAR_12;
  VAR_18 = VAR_9;
 } else {
  VAR_19 = VAR_13;
  VAR_18 = VAR_10;
 }


 FUNC_8(1);
 FUNC_13(VAR_16, VAR_17, 1);


 if (FUNC_7(VAR_16, VAR_4,
      FUNC_4(VAR_18), 1))
  FUNC_1("Display PHY %d is not power up\n", VAR_18);

 FUNC_9(VAR_16);


 VAR_20 = FUNC_11(VAR_16, VAR_19, VAR_0);
 VAR_20 |= VAR_7 | VAR_5 |
  VAR_11;
 FUNC_12(VAR_16, VAR_19, VAR_0, VAR_20);

 if (VAR_17->desc->id == VAR_14) {
  VAR_20 = FUNC_11(VAR_16, VAR_19, VAR_15);
  VAR_20 |= VAR_8;
  FUNC_12(VAR_16, VAR_19, VAR_15, VAR_20);
 } else {





  VAR_20 = FUNC_11(VAR_16, VAR_19, VAR_1);
  VAR_20 |= VAR_6;
  FUNC_12(VAR_16, VAR_19, VAR_1, VAR_20);
 }

 FUNC_10(VAR_16);

 VAR_16->chv_phy_control |= FUNC_3(VAR_18);
 FUNC_2(VAR_3, VAR_16->chv_phy_control);

 FUNC_0("Enabled DPIO PHY%d (PHY_CONTROL=0x%08x)\n",
        VAR_18, VAR_16->chv_phy_control);

 FUNC_6(VAR_16);
}
