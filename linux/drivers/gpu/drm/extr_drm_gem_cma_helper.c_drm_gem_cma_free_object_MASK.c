
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_gem_object {TYPE_1__* dev; TYPE_3__* import_attach; } ;
struct TYPE_5__ {int size; } ;
struct drm_gem_cma_object {int paddr; scalar_t__ vaddr; TYPE_2__ base; int sgt; } ;
struct TYPE_6__ {int dmabuf; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,int ) ;
 int FUNC_4 (struct drm_gem_cma_object*) ;
 struct drm_gem_cma_object* FUNC_5 (struct drm_gem_object*) ;

void FUNC_6(struct drm_gem_object *VAR_0)
{
 struct drm_gem_cma_object *VAR_1;

 VAR_1 = FUNC_5(VAR_0);

 if (VAR_0->import_attach) {
  if (VAR_1->vaddr)
   FUNC_0(VAR_0->import_attach->dmabuf, VAR_1->vaddr);
  FUNC_3(VAR_0, VAR_1->sgt);
 } else if (VAR_1->vaddr) {
  FUNC_1(VAR_0->dev->dev, VAR_1->base.size,
       VAR_1->vaddr, VAR_1->paddr);
 }

 FUNC_2(VAR_0);

 FUNC_4(VAR_1);
}
