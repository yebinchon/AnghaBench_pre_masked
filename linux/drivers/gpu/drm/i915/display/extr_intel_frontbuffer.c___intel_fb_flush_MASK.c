
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_frontbuffer {TYPE_2__* obj; } ;
struct TYPE_6__ {unsigned int busy_bits; int lock; } ;
struct drm_i915_private {TYPE_3__ fb_tracking; } ;
typedef enum fb_op_origin { ____Placeholder_fb_op_origin } fb_op_origin ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;

void FUNC_4(struct intel_frontbuffer *VAR_1,
        enum fb_op_origin VAR_2,
        unsigned int VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_1->obj->base.dev);

 if (VAR_2 == VAR_0) {
  FUNC_1(&VAR_4->fb_tracking.lock);

  VAR_3 &= VAR_4->fb_tracking.busy_bits;
  VAR_4->fb_tracking.busy_bits &= ~VAR_3;
  FUNC_2(&VAR_4->fb_tracking.lock);
 }

 if (VAR_3)
  FUNC_0(VAR_4, VAR_3, VAR_2);
}
