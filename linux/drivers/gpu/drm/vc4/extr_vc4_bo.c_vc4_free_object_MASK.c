
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {struct list_head time_list; } ;
struct vc4_dev {int bo_lock; TYPE_1__ bo_cache; } ;
struct TYPE_5__ {int base; int vaddr; } ;
struct vc4_bo {scalar_t__ madv; int t_format; TYPE_2__ base; int unref_head; int size_head; int free_time; int usecnt; TYPE_3__* validated_shader; int madv_lock; } ;
struct drm_gem_object {int size; scalar_t__ name; scalar_t__ import_attach; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {struct TYPE_6__* texture_samples; struct TYPE_6__* uniform_addr_offsets; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 struct vc4_bo* FUNC_6 (struct drm_gem_object*) ;
 struct vc4_dev* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct vc4_bo*) ;
 int FUNC_10 (struct vc4_bo*) ;
 int FUNC_11 (int *,int ) ;
 struct list_head* FUNC_12 (struct drm_device*,int ) ;

void FUNC_13(struct drm_gem_object *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 struct vc4_dev *VAR_6 = FUNC_7(VAR_5);
 struct vc4_bo *VAR_7 = FUNC_6(VAR_4);
 struct list_head *VAR_8;


 FUNC_2(&VAR_7->madv_lock);
 if (VAR_7->madv == VAR_1 && !FUNC_4(&VAR_7->usecnt))
  FUNC_10(VAR_7);
 FUNC_3(&VAR_7->madv_lock);

 FUNC_2(&VAR_6->bo_lock);


 if (VAR_4->import_attach) {
  FUNC_9(VAR_7);
  goto out;
 }


 if (VAR_4->name) {
  FUNC_9(VAR_7);
  goto out;
 }





 if (!VAR_7->base.vaddr) {
  FUNC_9(VAR_7);
  goto out;
 }

 VAR_8 = FUNC_12(VAR_5, VAR_4->size);
 if (!VAR_8) {
  FUNC_9(VAR_7);
  goto out;
 }

 if (VAR_7->validated_shader) {
  FUNC_0(VAR_7->validated_shader->uniform_addr_offsets);
  FUNC_0(VAR_7->validated_shader->texture_samples);
  FUNC_0(VAR_7->validated_shader);
  VAR_7->validated_shader = ((void*)0);
 }


 VAR_7->madv = VAR_2;
 FUNC_5(&VAR_7->usecnt, 0);

 VAR_7->t_format = 0;
 VAR_7->free_time = VAR_3;
 FUNC_1(&VAR_7->size_head, VAR_8);
 FUNC_1(&VAR_7->unref_head, &VAR_6->bo_cache.time_list);

 FUNC_11(&VAR_7->base.base, VAR_0);

 FUNC_8(VAR_5);

out:
 FUNC_3(&VAR_6->bo_lock);
}
