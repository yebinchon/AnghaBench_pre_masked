
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_2, void *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3;

 FUNC_2(&VAR_4->drm.struct_mutex);
 if (FUNC_1(VAR_4, VAR_1))
  VAR_2 = -VAR_0;
 FUNC_3(&VAR_4->drm.struct_mutex);

 FUNC_0(VAR_4);

 return VAR_2;
}
