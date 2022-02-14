
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flip_bits; unsigned int busy_bits; int lock; } ;
struct drm_i915_private {TYPE_1__ fb_tracking; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_i915_private *VAR_0,
        unsigned VAR_1)
{
 FUNC_0(&VAR_0->fb_tracking.lock);
 VAR_0->fb_tracking.flip_bits |= VAR_1;

 VAR_0->fb_tracking.busy_bits &= ~VAR_1;
 FUNC_1(&VAR_0->fb_tracking.lock);
}
