
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
struct drm_gem_cma_object {int paddr; int vaddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sg_table*,int ,int ,int ) ;
 int FUNC_2 (struct sg_table*) ;
 struct sg_table* FUNC_3 (int,int ) ;
 struct drm_gem_cma_object* FUNC_4 (struct drm_gem_object*) ;

struct sg_table *FUNC_5(struct drm_gem_object *VAR_2)
{
 struct drm_gem_cma_object *VAR_3 = FUNC_4(VAR_2);
 struct sg_table *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_2->dev->dev, VAR_4, VAR_3->vaddr,
         VAR_3->paddr, VAR_2->size);
 if (VAR_5 < 0)
  goto out;

 return VAR_4;

out:
 FUNC_2(VAR_4);
 return FUNC_0(VAR_5);
}
