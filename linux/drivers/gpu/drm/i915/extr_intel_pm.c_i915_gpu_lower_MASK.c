
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_delay; scalar_t__ min_delay; } ;
struct drm_i915_private {int drm; TYPE_1__ ips; } ;


 int FUNC_0 (int *) ;
 struct drm_i915_private* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(void)
{
 struct drm_i915_private *VAR_1;

 VAR_1 = FUNC_1();
 if (!VAR_1)
  return 0;

 FUNC_2(&VAR_0);
 if (VAR_1->ips.max_delay < VAR_1->ips.min_delay)
  VAR_1->ips.max_delay++;
 FUNC_3(&VAR_0);

 FUNC_0(&VAR_1->drm);
 return 1;
}
