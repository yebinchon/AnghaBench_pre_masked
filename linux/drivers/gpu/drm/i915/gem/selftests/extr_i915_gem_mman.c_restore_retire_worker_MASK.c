
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; int gt; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1)
{
 FUNC_2(&VAR_1->gt);

 FUNC_3(&VAR_1->drm.struct_mutex);
 FUNC_1(VAR_1, VAR_0);
 FUNC_4(&VAR_1->drm.struct_mutex);

 FUNC_0(VAR_1);
}
