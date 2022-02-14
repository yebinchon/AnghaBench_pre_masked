
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {scalar_t__ has_reset_engine; } ;
struct TYPE_3__ {int reset; } ;


 TYPE_2__* FUNC_0 (struct drm_i915_private*) ;
 TYPE_1__ VAR_0 ;

bool FUNC_1(struct drm_i915_private *VAR_1)
{
 return FUNC_0(VAR_1)->has_reset_engine && VAR_0.reset >= 2;
}
