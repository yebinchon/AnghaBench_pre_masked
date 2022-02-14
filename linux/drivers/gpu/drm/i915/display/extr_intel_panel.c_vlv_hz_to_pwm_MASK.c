
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int rawclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static u32 FUNC_6(struct intel_connector *VAR_2, u32 VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_2->base.dev);
 int VAR_5, VAR_6;

 if ((FUNC_1(VAR_0) & VAR_1) == 0) {
  if (FUNC_2(VAR_4))
   VAR_6 = FUNC_3(19200);
  else
   VAR_6 = FUNC_4(25);
  VAR_5 = 16;
 } else {
  VAR_6 = FUNC_3(VAR_4->rawclk_freq);
  VAR_5 = 128;
 }

 return FUNC_0(VAR_6, VAR_3 * VAR_5);
}
