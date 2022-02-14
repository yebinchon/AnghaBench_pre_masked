
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {int power_domain; int (* get_hw_state ) (struct intel_encoder*,int*) ;TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;
 int FUNC_6 (struct intel_encoder*,int*) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

int FUNC_8(struct intel_encoder *VAR_3,
         bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_7(VAR_5);
 intel_wakeref_t VAR_7;
 enum pipe VAR_8 = 0;
 int VAR_9 = 0;
 u32 VAR_10;

 VAR_7 = FUNC_4(VAR_6,
           VAR_3->power_domain);
 if (FUNC_3(!VAR_7))
  return -VAR_1;

 if (FUNC_3(!VAR_3->get_hw_state(VAR_3, &VAR_8))) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_0(FUNC_2(VAR_8));
 if (VAR_4)
  VAR_10 |= VAR_2;
 else
  VAR_10 &= ~VAR_2;
 FUNC_1(FUNC_2(VAR_8), VAR_10);
out:
 FUNC_5(VAR_6, VAR_3->power_domain, VAR_7);
 return VAR_9;
}
