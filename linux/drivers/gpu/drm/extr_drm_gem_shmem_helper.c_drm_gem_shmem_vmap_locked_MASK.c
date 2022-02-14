
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int size; TYPE_1__* import_attach; } ;
struct drm_gem_shmem_object {void* vaddr; scalar_t__ vmap_use_count; int pages; struct drm_gem_object base; } ;
struct TYPE_2__ {int dmabuf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_gem_shmem_object*) ;
 int FUNC_4 (struct drm_gem_shmem_object*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int,int ,int ) ;

__attribute__((used)) static void *FUNC_7(struct drm_gem_shmem_object *VAR_4)
{
 struct drm_gem_object *VAR_5 = &VAR_4->base;
 int VAR_6;

 if (VAR_4->vmap_use_count++ > 0)
  return VAR_4->vaddr;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  goto err_zero_use;

 if (VAR_5->import_attach)
  VAR_4->vaddr = FUNC_2(VAR_5->import_attach->dmabuf);
 else
  VAR_4->vaddr = FUNC_6(VAR_4->pages, VAR_5->size >> VAR_2,
        VAR_3, FUNC_5(VAR_1));

 if (!VAR_4->vaddr) {
  FUNC_0("Failed to vmap pages\n");
  VAR_6 = -VAR_0;
  goto err_put_pages;
 }

 return VAR_4->vaddr;

err_put_pages:
 FUNC_4(VAR_4);
err_zero_use:
 VAR_4->vmap_use_count = 0;

 return FUNC_1(VAR_6);
}
