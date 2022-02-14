
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* pri_latency; size_t max_level; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_3)
{

 VAR_3->wm.pri_latency[VAR_1] = 3;

 VAR_3->wm.max_level = VAR_1;

 if (FUNC_0(VAR_3)) {
  VAR_3->wm.pri_latency[VAR_2] = 12;
  VAR_3->wm.pri_latency[VAR_0] = 33;

  VAR_3->wm.max_level = VAR_0;
 }
}
