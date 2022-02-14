
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int busy_bits; int lock; } ;
struct drm_i915_private {TYPE_1__ fb_tracking; } ;
typedef enum fb_op_origin { ____Placeholder_fb_op_origin } fb_op_origin ;


 int FUNC_0 (struct drm_i915_private*,unsigned int) ;
 int FUNC_1 (struct drm_i915_private*,unsigned int,int) ;
 int FUNC_2 (struct drm_i915_private*,unsigned int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_0,
         unsigned int VAR_1,
         enum fb_op_origin VAR_2)
{

 FUNC_4(&VAR_0->fb_tracking.lock);
 VAR_1 &= ~VAR_0->fb_tracking.busy_bits;
 FUNC_5(&VAR_0->fb_tracking.lock);

 if (!VAR_1)
  return;

 FUNC_3();
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
