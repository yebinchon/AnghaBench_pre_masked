
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_shmem_object {int vmap_lock; int pages_lock; int pages_use_count; scalar_t__ pages; struct drm_gem_shmem_object* sgt; int nents; int sgl; int vmap_use_count; } ;
struct drm_gem_object {TYPE_1__* dev; scalar_t__ import_attach; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_shmem_object*) ;
 int FUNC_4 (struct drm_gem_object*,struct drm_gem_shmem_object*) ;
 int FUNC_5 (struct drm_gem_shmem_object*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_gem_shmem_object*) ;
 struct drm_gem_shmem_object* FUNC_9 (struct drm_gem_object*) ;

void FUNC_10(struct drm_gem_object *VAR_1)
{
 struct drm_gem_shmem_object *VAR_2 = FUNC_9(VAR_1);

 FUNC_0(VAR_2->vmap_use_count);

 if (VAR_1->import_attach) {
  VAR_2->pages_use_count--;
  FUNC_4(VAR_1, VAR_2->sgt);
  FUNC_6(VAR_2->pages);
 } else {
  if (VAR_2->sgt) {
   FUNC_1(VAR_1->dev->dev, VAR_2->sgt->sgl,
         VAR_2->sgt->nents, VAR_0);
   FUNC_8(VAR_2->sgt);
   FUNC_5(VAR_2->sgt);
  }
  if (VAR_2->pages)
   FUNC_3(VAR_2);
 }

 FUNC_0(VAR_2->pages_use_count);

 FUNC_2(VAR_1);
 FUNC_7(&VAR_2->pages_lock);
 FUNC_7(&VAR_2->vmap_lock);
 FUNC_5(VAR_2);
}
