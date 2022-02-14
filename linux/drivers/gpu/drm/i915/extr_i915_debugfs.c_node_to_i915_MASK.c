
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_info_node {TYPE_1__* minor; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct drm_i915_private* FUNC_0 (int ) ;

__attribute__((used)) static inline struct drm_i915_private *FUNC_1(struct drm_info_node *VAR_0)
{
 return FUNC_0(VAR_0->minor->dev);
}
