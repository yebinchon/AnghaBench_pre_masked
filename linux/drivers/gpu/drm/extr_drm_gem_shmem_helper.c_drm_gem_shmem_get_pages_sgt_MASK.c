
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct drm_gem_shmem_object {struct sg_table* sgt; int base; } ;
struct drm_gem_object {TYPE_1__* dev; int import_attach; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct sg_table*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct drm_gem_shmem_object*) ;
 struct sg_table* FUNC_6 (int *) ;
 int FUNC_7 (struct drm_gem_shmem_object*) ;
 struct drm_gem_shmem_object* FUNC_8 (struct drm_gem_object*) ;

struct sg_table *FUNC_9(struct drm_gem_object *VAR_1)
{
 int VAR_2;
 struct drm_gem_shmem_object *VAR_3 = FUNC_8(VAR_1);
 struct sg_table *VAR_4;

 if (VAR_3->sgt)
  return VAR_3->sgt;

 FUNC_3(VAR_1->import_attach);

 VAR_2 = FUNC_5(VAR_3);
 if (VAR_2)
  return FUNC_0(VAR_2);

 VAR_4 = FUNC_6(&VAR_3->base);
 if (FUNC_1(VAR_4)) {
  VAR_2 = FUNC_2(VAR_4);
  goto err_put_pages;
 }

 FUNC_4(VAR_1->dev->dev, VAR_4->sgl, VAR_4->nents, VAR_0);

 VAR_3->sgt = VAR_4;

 return VAR_4;

err_put_pages:
 FUNC_7(VAR_3);
 return FUNC_0(VAR_2);
}
