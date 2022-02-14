
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_rps {int min_freq; int rp1_freq; int rp0_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct device_attribute VAR_1 ;
 struct device_attribute VAR_2 ;
 struct device_attribute VAR_3 ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4, struct device_attribute *VAR_5, char *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_2(VAR_4);
 struct intel_rps *VAR_8 = &VAR_7->gt_pm.rps;
 u32 VAR_9;

 if (VAR_5 == &VAR_1)
  VAR_9 = FUNC_1(VAR_7, VAR_8->rp0_freq);
 else if (VAR_5 == &VAR_2)
  VAR_9 = FUNC_1(VAR_7, VAR_8->rp1_freq);
 else if (VAR_5 == &VAR_3)
  VAR_9 = FUNC_1(VAR_7, VAR_8->min_freq);
 else
  FUNC_0();

 return FUNC_3(VAR_6, VAR_0, "%d\n", VAR_9);
}
