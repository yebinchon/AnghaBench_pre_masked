
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* primary; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct device {int kobj; } ;
struct TYPE_3__ {struct device* kdev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int VAR_6 ;

void FUNC_12(struct drm_i915_private *VAR_7)
{
 struct device *VAR_8 = VAR_7->drm.primary->kdev;
 int VAR_9;
 if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_8(VAR_8, &VAR_0);
  if (VAR_9)
   FUNC_0("l3 parity sysfs setup failed\n");

  if (FUNC_7(VAR_7) > 1) {
   VAR_9 = FUNC_8(VAR_8,
           &VAR_1);
   if (VAR_9)
    FUNC_0("l3 parity slice 1 setup failed\n");
  }
 }

 VAR_9 = 0;
 if (FUNC_6(VAR_7) || FUNC_5(VAR_7))
  VAR_9 = FUNC_10(&VAR_8->kobj, VAR_6);
 else if (FUNC_4(VAR_7) >= 6)
  VAR_9 = FUNC_10(&VAR_8->kobj, VAR_2);
 if (VAR_9)
  FUNC_0("RPS sysfs setup failed\n");

 FUNC_9(VAR_8);
}
