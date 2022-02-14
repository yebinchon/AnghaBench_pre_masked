
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_dpll_hw_state {int mg_pll_div1; int mg_pll_div0; int mg_clktop2_hsclkctl; } ;
struct TYPE_3__ {int ref; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_8,
    const struct intel_dpll_hw_state *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u64 VAR_16;

 VAR_15 = VAR_8->cdclk.hw.ref;

 VAR_10 = VAR_9->mg_pll_div1 & VAR_7;
 VAR_11 = VAR_9->mg_pll_div0 & VAR_5;
 VAR_12 = (VAR_9->mg_pll_div0 & VAR_6) ?
  (VAR_9->mg_pll_div0 & VAR_3) >>
  VAR_4 : 0;

 switch (VAR_9->mg_clktop2_hsclkctl &
  VAR_2) {
 case 131:
  VAR_13 = 2;
  break;
 case 130:
  VAR_13 = 3;
  break;
 case 129:
  VAR_13 = 5;
  break;
 case 128:
  VAR_13 = 7;
  break;
 default:
  FUNC_0(VAR_9->mg_clktop2_hsclkctl);
  return 0;
 }

 VAR_14 = (VAR_9->mg_clktop2_hsclkctl &
  VAR_0) >>
  VAR_1;


 if (VAR_14 == 0)
  VAR_14 = 1;





 VAR_16 = (u64)VAR_10 * VAR_11 * VAR_15 +
       (((u64)VAR_10 * VAR_12 * VAR_15) >> 22);
 VAR_16 = FUNC_1(VAR_16, 5 * VAR_13 * VAR_14);

 return VAR_16;
}
