
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int engine_mask; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct drm_i915_private const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const struct drm_i915_private *VAR_2)
{
 return FUNC_2(FUNC_1(VAR_2)->engine_mask &
    FUNC_0(VAR_1 + VAR_0 - 1, VAR_1));
}
