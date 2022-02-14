
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int chv_phy_control; int* chv_phy_assert; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ (* is_enabled ) (struct drm_i915_private*,struct i915_power_well*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_10 ;
 int FUNC_4 (unsigned int,size_t,int ) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ,size_t,int ) ;
 int FUNC_7 (size_t) ;
 int VAR_11 ;
 int FUNC_8 (int ,size_t) ;
 int VAR_12 ;
 int VAR_13 ;
 struct i915_power_well* FUNC_9 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*,struct i915_power_well*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_12(struct drm_i915_private *VAR_14)
{
 struct i915_power_well *VAR_15 =
  FUNC_9(VAR_14, VAR_13);
 struct i915_power_well *VAR_16 =
  FUNC_9(VAR_14, VAR_0);
 VAR_14->chv_phy_control =
  FUNC_8(VAR_11, VAR_4) |
  FUNC_8(VAR_11, VAR_5) |
  FUNC_6(VAR_10, VAR_4, VAR_2) |
  FUNC_6(VAR_10, VAR_4, VAR_3) |
  FUNC_6(VAR_10, VAR_5, VAR_2);
 if (VAR_15->desc->ops->is_enabled(VAR_14, VAR_15)) {
  u32 VAR_17 = FUNC_2(FUNC_0(VAR_12));
  unsigned int VAR_18;

  VAR_18 = VAR_17 & VAR_7;
  if (VAR_18 == 0xf)
   VAR_18 = 0x0;
  else
   VAR_14->chv_phy_control |=
    FUNC_5(VAR_4, VAR_2);

  VAR_14->chv_phy_control |=
   FUNC_4(VAR_18, VAR_4, VAR_2);

  VAR_18 = (VAR_17 & VAR_8) >> 4;
  if (VAR_18 == 0xf)
   VAR_18 = 0x0;
  else
   VAR_14->chv_phy_control |=
    FUNC_5(VAR_4, VAR_3);

  VAR_14->chv_phy_control |=
   FUNC_4(VAR_18, VAR_4, VAR_3);

  VAR_14->chv_phy_control |= FUNC_7(VAR_4);

  VAR_14->chv_phy_assert[VAR_4] = 0;
 } else {
  VAR_14->chv_phy_assert[VAR_4] = 1;
 }

 if (VAR_16->desc->ops->is_enabled(VAR_14, VAR_16)) {
  u32 VAR_19 = FUNC_2(VAR_6);
  unsigned int VAR_20;

  VAR_20 = VAR_19 & VAR_9;

  if (VAR_20 == 0xf)
   VAR_20 = 0x0;
  else
   VAR_14->chv_phy_control |=
    FUNC_5(VAR_5, VAR_2);

  VAR_14->chv_phy_control |=
   FUNC_4(VAR_20, VAR_5, VAR_2);

  VAR_14->chv_phy_control |= FUNC_7(VAR_5);

  VAR_14->chv_phy_assert[VAR_5] = 0;
 } else {
  VAR_14->chv_phy_assert[VAR_5] = 1;
 }

 FUNC_3(VAR_1, VAR_14->chv_phy_control);

 FUNC_1("Initial PHY_CONTROL=0x%08x\n",
        VAR_14->chv_phy_control);
}
