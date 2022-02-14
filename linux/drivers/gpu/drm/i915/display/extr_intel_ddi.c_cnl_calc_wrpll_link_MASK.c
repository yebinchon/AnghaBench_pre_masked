
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dpll_hw_state {int cfgcr1; int cfgcr0; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*) ;

int FUNC_3(struct drm_i915_private *VAR_7,
   struct intel_dpll_hw_state *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = VAR_8->cfgcr1 & VAR_4;
 VAR_11 = VAR_8->cfgcr1 & VAR_3;

 if (VAR_8->cfgcr1 & FUNC_0(1))
  VAR_10 = (VAR_8->cfgcr1 & VAR_5) >>
   VAR_6;
 else
  VAR_10 = 1;


 switch (VAR_9) {
 case 131:
  VAR_9 = 2;
  break;
 case 130:
  VAR_9 = 3;
  break;
 case 129:
  VAR_9 = 5;
  break;
 case 128:
  VAR_9 = 7;
  break;
 }

 switch (VAR_11) {
 case 134:
  VAR_11 = 1;
  break;
 case 133:
  VAR_11 = 2;
  break;
 case 132:
  VAR_11 = 3;
  break;
 }

 VAR_13 = FUNC_2(VAR_7);

 VAR_12 = (VAR_8->cfgcr0 & VAR_2)
  * VAR_13;

 VAR_12 += (((VAR_8->cfgcr0 & VAR_0) >>
        VAR_1) * VAR_13) / 0x8000;

 if (FUNC_1(VAR_9 == 0 || VAR_10 == 0 || VAR_11 == 0))
  return 0;

 return VAR_12 / (VAR_9 * VAR_10 * VAR_11 * 5);
}
