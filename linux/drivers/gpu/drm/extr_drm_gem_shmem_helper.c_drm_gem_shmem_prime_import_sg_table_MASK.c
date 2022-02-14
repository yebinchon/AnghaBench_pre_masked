
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_gem_shmem_object {int pages_use_count; struct drm_gem_object base; int pages; struct sg_table* sgt; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (struct drm_gem_shmem_object*) ;
 struct drm_gem_object* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_gem_shmem_object*) ;
 size_t FUNC_4 (int ) ;
 size_t VAR_2 ;
 int FUNC_5 (struct drm_gem_object*) ;
 struct drm_gem_shmem_object* FUNC_6 (struct drm_device*,size_t) ;
 int FUNC_7 (struct sg_table*,int ,int *,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (size_t,int,int ) ;

struct drm_gem_object *
FUNC_10(struct drm_device *VAR_3,
        struct dma_buf_attachment *VAR_4,
        struct sg_table *VAR_5)
{
 size_t VAR_6 = FUNC_4(VAR_4->dmabuf->size);
 size_t VAR_7 = VAR_6 >> VAR_2;
 struct drm_gem_shmem_object *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(VAR_3, VAR_6);
 if (FUNC_3(VAR_8))
  return FUNC_1(VAR_8);

 VAR_8->pages = FUNC_9(VAR_7, sizeof(struct page *), VAR_1);
 if (!VAR_8->pages) {
  VAR_9 = -VAR_0;
  goto err_free_gem;
 }

 VAR_9 = FUNC_7(VAR_5, VAR_8->pages, ((void*)0), VAR_7);
 if (VAR_9 < 0)
  goto err_free_array;

 VAR_8->sgt = VAR_5;
 VAR_8->pages_use_count = 1;

 FUNC_0("size = %zu\n", VAR_6);

 return &VAR_8->base;

err_free_array:
 FUNC_8(VAR_8->pages);
err_free_gem:
 FUNC_5(&VAR_8->base);

 return FUNC_2(VAR_9);
}
