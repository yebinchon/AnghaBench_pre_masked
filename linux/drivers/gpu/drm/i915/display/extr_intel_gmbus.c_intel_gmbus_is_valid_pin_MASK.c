
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_6 (struct drm_i915_private*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_7(struct drm_i915_private *VAR_7,
         unsigned int VAR_8)
{
 unsigned int VAR_9;

 if (FUNC_2(VAR_7) >= VAR_0)
  VAR_9 = FUNC_0(VAR_5);
 else if (FUNC_1(VAR_7))
  VAR_9 = FUNC_0(VAR_4);
 else if (FUNC_5(VAR_7))
  VAR_9 = FUNC_0(VAR_3);
 else if (FUNC_4(VAR_7))
  VAR_9 = FUNC_0(VAR_6);
 else if (FUNC_3(VAR_7))
  VAR_9 = FUNC_0(VAR_2);
 else
  VAR_9 = FUNC_0(VAR_1);

 return VAR_8 < VAR_9 && FUNC_6(VAR_7, VAR_8)->name;
}
