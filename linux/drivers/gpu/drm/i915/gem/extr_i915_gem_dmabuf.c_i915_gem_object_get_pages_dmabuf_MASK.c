
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int sgl; } ;
struct TYPE_2__ {int import_attach; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sg_table*) ;
 int FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct drm_i915_gem_object*,struct sg_table*,unsigned int) ;
 struct sg_table* FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_gem_object *VAR_1)
{
 struct sg_table *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_3(VAR_1->base.import_attach,
           VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_2->sgl);

 FUNC_2(VAR_1, VAR_2, VAR_3);

 return 0;
}
