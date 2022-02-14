
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int busy_frontbuffer_bits; int lock; int work; int active; int pipe; int enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;
typedef enum fb_op_origin { ____Placeholder_fb_op_origin } fb_op_origin ;


 int FUNC_0 (struct drm_i915_private*) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_i915_private *VAR_1,
       unsigned VAR_2, enum fb_op_origin VAR_3)
{
 if (!FUNC_0(VAR_1))
  return;

 if (VAR_3 == VAR_0)
  return;

 FUNC_2(&VAR_1->psr.lock);
 if (!VAR_1->psr.enabled) {
  FUNC_3(&VAR_1->psr.lock);
  return;
 }

 VAR_2 &= FUNC_1(VAR_1->psr.pipe);
 VAR_1->psr.busy_frontbuffer_bits &= ~VAR_2;


 if (VAR_2)
  FUNC_4(VAR_1);

 if (!VAR_1->psr.active && !VAR_1->psr.busy_frontbuffer_bits)
  FUNC_5(&VAR_1->psr.work);
 FUNC_3(&VAR_1->psr.lock);
}
