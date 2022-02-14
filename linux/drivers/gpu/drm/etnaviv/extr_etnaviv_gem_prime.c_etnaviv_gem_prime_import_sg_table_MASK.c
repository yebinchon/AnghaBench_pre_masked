
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct etnaviv_gem_object {struct drm_gem_object base; int pages; struct sg_table* sgt; int lock; } ;
struct drm_device {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 size_t VAR_3 ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct sg_table*,int ,int *,int) ;
 int FUNC_4 (struct drm_device*,size_t,int ,int *,struct etnaviv_gem_object**) ;
 int FUNC_5 (struct drm_device*,struct drm_gem_object*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int *,int *) ;

struct drm_gem_object *FUNC_8(struct drm_device *VAR_6,
 struct dma_buf_attachment *VAR_7, struct sg_table *VAR_8)
{
 struct etnaviv_gem_object *VAR_9;
 size_t VAR_10 = FUNC_1(VAR_7->dmabuf->size);
 int VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_6, VAR_10, VAR_1,
          &VAR_4, &VAR_9);
 if (VAR_11 < 0)
  return FUNC_0(VAR_11);

 FUNC_7(&VAR_9->lock, &VAR_5);

 VAR_12 = VAR_10 / VAR_3;

 VAR_9->sgt = VAR_8;
 VAR_9->pages = FUNC_6(VAR_12, sizeof(struct page *), VAR_2);
 if (!VAR_9->pages) {
  VAR_11 = -VAR_0;
  goto fail;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_9->pages,
            ((void*)0), VAR_12);
 if (VAR_11)
  goto fail;

 FUNC_5(VAR_6, &VAR_9->base);

 return &VAR_9->base;

fail:
 FUNC_2(&VAR_9->base);

 return FUNC_0(VAR_11);
}
