
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct msm_gem_object {int lock; int pages; struct sg_table* sgt; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dev; } ;
struct dma_buf {int size; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_device*,struct drm_gem_object*,int) ;
 int FUNC_5 (struct sg_table*,int ,int *,int) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct drm_device*,int,int ,struct drm_gem_object**,int) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct msm_gem_object* FUNC_11 (struct drm_gem_object*) ;

struct drm_gem_object *FUNC_12(struct drm_device *VAR_5,
  struct dma_buf *VAR_6, struct sg_table *VAR_7)
{
 struct msm_gem_object *VAR_8;
 struct drm_gem_object *VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12;


 if (!FUNC_8(VAR_5)) {
  FUNC_0(VAR_5->dev, "cannot import without IOMMU\n");
  return FUNC_1(-VAR_0);
 }

 VAR_10 = FUNC_2(VAR_6->size);

 VAR_11 = FUNC_7(VAR_5, VAR_10, VAR_3, &VAR_9, 0);
 if (VAR_11)
  goto fail;

 FUNC_4(VAR_5, VAR_9, VAR_10);

 VAR_12 = VAR_10 / VAR_4;

 VAR_8 = FUNC_11(VAR_9);
 FUNC_9(&VAR_8->lock);
 VAR_8->sgt = VAR_7;
 VAR_8->pages = FUNC_6(VAR_12, sizeof(struct page *), VAR_2);
 if (!VAR_8->pages) {
  FUNC_10(&VAR_8->lock);
  VAR_11 = -VAR_1;
  goto fail;
 }

 VAR_11 = FUNC_5(VAR_7, VAR_8->pages, ((void*)0), VAR_12);
 if (VAR_11) {
  FUNC_10(&VAR_8->lock);
  goto fail;
 }

 FUNC_10(&VAR_8->lock);
 return VAR_9;

fail:
 FUNC_3(VAR_9);
 return FUNC_1(VAR_11);
}
