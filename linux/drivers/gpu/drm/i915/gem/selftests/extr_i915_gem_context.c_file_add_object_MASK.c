
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle_count; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_file {int object_idr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (int *,TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_file *VAR_1,
       struct drm_i915_gem_object *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->base.handle_count);


 VAR_3 = FUNC_2(&VAR_1->object_idr, &VAR_2->base, 1, 0, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_2);
 VAR_2->base.handle_count++;
 return 0;
}
