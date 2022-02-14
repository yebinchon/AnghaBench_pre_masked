
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int bypass; int ref; int vco; int cdclk; int voltage_level; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;



 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_8,
     struct intel_cdclk_state *VAR_9)
{
 u32 VAR_10;

 VAR_9->bypass = 50000;

 VAR_10 = FUNC_0(VAR_7);
 switch (VAR_10 & VAR_6) {
 default:
  FUNC_1(VAR_10);

 case 129:
  VAR_9->ref = 24000;
  break;
 case 130:
  VAR_9->ref = 19200;
  break;
 case 128:
  VAR_9->ref = 38400;
  break;
 }

 VAR_10 = FUNC_0(VAR_1);
 if ((VAR_10 & VAR_3) == 0 ||
     (VAR_10 & VAR_2) == 0) {




  VAR_9->vco = 0;
  VAR_9->cdclk = VAR_9->bypass;
  goto out;
 }

 VAR_9->vco = (VAR_10 & VAR_4) * VAR_9->ref;

 VAR_10 = FUNC_0(VAR_5);
 FUNC_2((VAR_10 & VAR_0) != 0);

 VAR_9->cdclk = VAR_9->vco / 2;

out:




 VAR_9->voltage_level =
  FUNC_3(VAR_8, VAR_9->cdclk);
}
