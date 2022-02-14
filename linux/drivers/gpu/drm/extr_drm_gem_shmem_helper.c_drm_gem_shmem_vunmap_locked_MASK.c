
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {TYPE_1__* import_attach; } ;
struct drm_gem_shmem_object {scalar_t__ vmap_use_count; int * vaddr; struct drm_gem_object base; } ;
struct TYPE_2__ {int dmabuf; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_gem_shmem_object*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_gem_shmem_object *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base;

 if (FUNC_0(!VAR_0->vmap_use_count))
  return;

 if (--VAR_0->vmap_use_count > 0)
  return;

 if (VAR_1->import_attach)
  FUNC_1(VAR_1->import_attach->dmabuf, VAR_0->vaddr);
 else
  FUNC_3(VAR_0->vaddr);

 VAR_0->vaddr = ((void*)0);
 FUNC_2(VAR_0);
}
