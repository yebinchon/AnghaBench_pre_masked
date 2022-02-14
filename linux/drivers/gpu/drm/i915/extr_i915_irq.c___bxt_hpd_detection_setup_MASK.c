
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_14,
          u32 VAR_15)
{
 u32 VAR_16;

 VAR_16 = FUNC_1(VAR_7);
 VAR_16 |= VAR_8 |
     VAR_9 |
     VAR_10;

 FUNC_0("Invert bit setting: hp_ctl:%x hp_port:%x\n",
        VAR_16, VAR_15);
 VAR_16 &= ~VAR_3;





 if ((VAR_15 & VAR_4) &&
     FUNC_3(VAR_14, VAR_11))
  VAR_16 |= VAR_0;
 if ((VAR_15 & VAR_5) &&
     FUNC_3(VAR_14, VAR_12))
  VAR_16 |= VAR_1;
 if ((VAR_15 & VAR_6) &&
     FUNC_3(VAR_14, VAR_13))
  VAR_16 |= VAR_2;

 FUNC_2(VAR_7, VAR_16);
}
