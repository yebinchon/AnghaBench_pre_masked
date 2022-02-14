
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct exynos_drm_gem {int size; struct drm_gem_object base; int pages; int flags; struct sg_table* sgt; int dma_addr; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct exynos_drm_gem*) ;
 int VAR_4 ;
 int FUNC_2 (struct exynos_drm_gem*) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct sg_table*,int ,int *,int) ;
 struct exynos_drm_gem* FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct exynos_drm_gem*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int ) ;

struct drm_gem_object *
FUNC_10(struct drm_device *VAR_5,
         struct dma_buf_attachment *VAR_6,
         struct sg_table *VAR_7)
{
 struct exynos_drm_gem *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_5, VAR_6->dmabuf->size);
 if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
  return FUNC_0(VAR_10);
 }

 VAR_8->dma_addr = FUNC_9(VAR_7->sgl);

 VAR_9 = VAR_8->size >> VAR_4;
 VAR_8->pages = FUNC_8(VAR_9, sizeof(struct page *), VAR_3);
 if (!VAR_8->pages) {
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_10 = FUNC_4(VAR_7, VAR_8->pages, ((void*)0),
            VAR_9);
 if (VAR_10 < 0)
  goto err_free_large;

 VAR_8->sgt = VAR_7;

 if (VAR_7->nents == 1) {

  VAR_8->flags |= VAR_1;
 } else {






  VAR_8->flags |= VAR_2;
 }

 return &VAR_8->base;

err_free_large:
 FUNC_7(VAR_8->pages);
err:
 FUNC_3(&VAR_8->base);
 FUNC_6(VAR_8);
 return FUNC_0(VAR_10);
}
