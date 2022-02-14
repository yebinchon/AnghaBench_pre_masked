
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crt {int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct intel_crt* FUNC_1 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct intel_encoder *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_2(VAR_6->base.dev);
 struct intel_crt *VAR_8 = FUNC_1(VAR_6);
 u32 VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_8->adpa_reg);

 if (VAR_9 & VAR_0)
  VAR_10 |= VAR_4;
 else
  VAR_10 |= VAR_2;

 if (VAR_9 & VAR_1)
  VAR_10 |= VAR_5;
 else
  VAR_10 |= VAR_3;

 return VAR_10;
}
