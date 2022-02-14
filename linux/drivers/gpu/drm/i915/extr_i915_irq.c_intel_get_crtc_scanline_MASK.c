
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct TYPE_4__ {int lock; } ;
struct drm_i915_private {TYPE_2__ uncore; } ;


 int FUNC_0 (struct intel_crtc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_3 (int ) ;

int FUNC_4(struct intel_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_3(VAR_0->base.dev);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->uncore.lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->uncore.lock, VAR_2);

 return VAR_3;
}
