
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct drm_i915_gem_object {TYPE_2__* stolen; TYPE_1__ base; } ;
struct TYPE_4__ {int size; int start; } ;


 scalar_t__ FUNC_0 (struct sg_table*) ;
 int FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct drm_i915_gem_object*,struct sg_table*,int ) ;
 struct sg_table* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_i915_gem_object *VAR_0)
{
 struct sg_table *VAR_1 =
  FUNC_3(VAR_0->base.dev,
          VAR_0->stolen->start,
          VAR_0->stolen->size);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 FUNC_2(VAR_0, VAR_1, VAR_0->stolen->size);

 return 0;
}
