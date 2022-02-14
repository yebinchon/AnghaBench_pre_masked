
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct drm_i915_private*,int,int*,int*) ;

void FUNC_12(struct drm_i915_private *VAR_10,
      enum port VAR_11, u32 VAR_12, u32 VAR_13,
      u32 VAR_14, u32 VAR_15)
{
 u32 VAR_16;
 enum dpio_phy VAR_17;
 enum dpio_channel VAR_18;

 FUNC_11(VAR_10, VAR_11, &VAR_17, &VAR_18);





 VAR_16 = FUNC_9(FUNC_1(VAR_17, VAR_18));
 VAR_16 &= ~(VAR_6 | VAR_5);
 FUNC_10(FUNC_0(VAR_17, VAR_18), VAR_16);

 VAR_16 = FUNC_9(FUNC_3(VAR_17, VAR_18));
 VAR_16 &= ~(VAR_2 | VAR_8);
 VAR_16 |= VAR_12 << VAR_3 | VAR_13 << VAR_9;
 FUNC_10(FUNC_2(VAR_17, VAR_18), VAR_16);

 VAR_16 = FUNC_9(FUNC_5(VAR_17, VAR_18));
 VAR_16 &= ~VAR_4;
 if (VAR_14)
  VAR_16 |= VAR_4;

 if ((VAR_16 & VAR_7) && !(VAR_16 & VAR_4))
  FUNC_8("Disabled scaling while ouniqetrangenmethod was set");

 FUNC_10(FUNC_4(VAR_17, VAR_18), VAR_16);

 VAR_16 = FUNC_9(FUNC_7(VAR_17, VAR_18));
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_15 << VAR_0;
 FUNC_10(FUNC_6(VAR_17, VAR_18), VAR_16);

 VAR_16 = FUNC_9(FUNC_1(VAR_17, VAR_18));
 VAR_16 |= VAR_6 | VAR_5;
 FUNC_10(FUNC_0(VAR_17, VAR_18), VAR_16);
}
