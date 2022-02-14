
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int busy_bits; int lock; } ;
struct drm_i915_private {TYPE_1__ fb_tracking; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_1,
       unsigned VAR_2)
{
 FUNC_1(&VAR_1->fb_tracking.lock);

 VAR_1->fb_tracking.busy_bits &= ~VAR_2;
 FUNC_2(&VAR_1->fb_tracking.lock);

 FUNC_0(VAR_1, VAR_2, VAR_0);
}
