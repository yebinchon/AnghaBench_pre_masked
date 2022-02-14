
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int chv_phy_control; int * chv_phy_assert; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ (* is_enabled ) (struct drm_i915_private*,struct i915_power_well*) ;} ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,size_t,int ) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t,int ) ;
 int FUNC_8 (size_t,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int ,int,int,int) ;
 struct i915_power_well* FUNC_10 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*,struct i915_power_well*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_13(struct drm_i915_private *VAR_9)
{
 struct i915_power_well *VAR_10 =
  FUNC_10(VAR_9, VAR_8);
 struct i915_power_well *VAR_11 =
  FUNC_10(VAR_9, VAR_0);
 u32 VAR_12 = VAR_9->chv_phy_control;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0xffffffff;
 if (!VAR_9->chv_phy_assert[VAR_4])
  VAR_14 &= ~(FUNC_7(VAR_4, VAR_2) |
         FUNC_8(VAR_4, VAR_2, 0) |
         FUNC_8(VAR_4, VAR_2, 1) |
         FUNC_7(VAR_4, VAR_3) |
         FUNC_8(VAR_4, VAR_3, 0) |
         FUNC_8(VAR_4, VAR_3, 1));

 if (!VAR_9->chv_phy_assert[VAR_5])
  VAR_14 &= ~(FUNC_7(VAR_5, VAR_2) |
         FUNC_8(VAR_5, VAR_2, 0) |
         FUNC_8(VAR_5, VAR_2, 1));

 if (VAR_10->desc->ops->is_enabled(VAR_9, VAR_10)) {
  VAR_13 |= FUNC_6(VAR_4);


  if ((VAR_12 & FUNC_5(VAR_4, VAR_2)) == 0)
   VAR_12 |= FUNC_4(0xf, VAR_4, VAR_2);

  if ((VAR_12 & FUNC_5(VAR_4, VAR_3)) == 0)
   VAR_12 |= FUNC_4(0xf, VAR_4, VAR_3);


  if (FUNC_0(VAR_12,
        FUNC_4(0xf, VAR_4, VAR_2) |
        FUNC_4(0xf, VAR_4, VAR_3)))
   VAR_13 |= FUNC_7(VAR_4, VAR_2);






  if (FUNC_0(VAR_12,
        FUNC_4(0xf, VAR_4, VAR_3)) &&
      (FUNC_3(FUNC_1(VAR_7)) & VAR_6) == 0)
   VAR_13 |= FUNC_7(VAR_4, VAR_3);

  if (FUNC_0(VAR_12,
        FUNC_4(0x3, VAR_4, VAR_2)))
   VAR_13 |= FUNC_8(VAR_4, VAR_2, 0);
  if (FUNC_0(VAR_12,
        FUNC_4(0xc, VAR_4, VAR_2)))
   VAR_13 |= FUNC_8(VAR_4, VAR_2, 1);

  if (FUNC_0(VAR_12,
        FUNC_4(0x3, VAR_4, VAR_3)))
   VAR_13 |= FUNC_8(VAR_4, VAR_3, 0);
  if (FUNC_0(VAR_12,
        FUNC_4(0xc, VAR_4, VAR_3)))
   VAR_13 |= FUNC_8(VAR_4, VAR_3, 1);
 }

 if (VAR_11->desc->ops->is_enabled(VAR_9, VAR_11)) {
  VAR_13 |= FUNC_6(VAR_5);


  if ((VAR_12 & FUNC_5(VAR_5, VAR_2)) == 0)
   VAR_12 |= FUNC_4(0xf, VAR_5, VAR_2);

  if (FUNC_0(VAR_12,
        FUNC_4(0xf, VAR_5, VAR_2)))
   VAR_13 |= FUNC_7(VAR_5, VAR_2);

  if (FUNC_0(VAR_12,
        FUNC_4(0x3, VAR_5, VAR_2)))
   VAR_13 |= FUNC_8(VAR_5, VAR_2, 0);
  if (FUNC_0(VAR_12,
        FUNC_4(0xc, VAR_5, VAR_2)))
   VAR_13 |= FUNC_8(VAR_5, VAR_2, 1);
 }

 VAR_13 &= VAR_14;





 if (FUNC_9(VAR_9, VAR_1,
           VAR_14, VAR_13, 10))
  FUNC_2("Unexpected PHY_STATUS 0x%08x, expected 0x%08x (PHY_CONTROL=0x%08x)\n",
     FUNC_3(VAR_1) & VAR_14,
      VAR_13, VAR_9->chv_phy_control);
}
