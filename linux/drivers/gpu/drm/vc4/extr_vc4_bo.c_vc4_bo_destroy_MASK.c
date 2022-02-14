
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int bo_lock; } ;
struct drm_gem_object {int dev; } ;
struct TYPE_3__ {struct drm_gem_object base; } ;
struct vc4_bo {TYPE_2__* validated_shader; TYPE_1__ base; } ;
struct TYPE_4__ {struct TYPE_4__* texture_samples; struct TYPE_4__* uniform_addr_offsets; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 struct vc4_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_gem_object*,int) ;

__attribute__((used)) static void FUNC_5(struct vc4_bo *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base.base;
 struct vc4_dev *VAR_2 = FUNC_3(VAR_1->dev);

 FUNC_2(&VAR_2->bo_lock);

 FUNC_4(VAR_1, -1);

 if (VAR_0->validated_shader) {
  FUNC_1(VAR_0->validated_shader->uniform_addr_offsets);
  FUNC_1(VAR_0->validated_shader->texture_samples);
  FUNC_1(VAR_0->validated_shader);
  VAR_0->validated_shader = ((void*)0);
 }

 FUNC_0(VAR_1);
}
