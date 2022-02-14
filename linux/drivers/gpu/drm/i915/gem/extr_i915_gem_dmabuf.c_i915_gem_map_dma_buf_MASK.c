
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int nents; struct scatterlist* sgl; } ;
struct scatterlist {int length; } ;
struct TYPE_4__ {TYPE_1__* pages; } ;
struct drm_i915_gem_object {TYPE_2__ mm; } ;
struct dma_buf_attachment {int dev; int dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {int nents; struct scatterlist* sgl; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scatterlist*,int ,int) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct sg_table*) ;
 struct sg_table* FUNC_6 (int,int ) ;
 int FUNC_7 (struct sg_table*,int,int ) ;
 int FUNC_8 (struct sg_table*) ;
 struct scatterlist* FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct scatterlist*,int ,int ,int ) ;

__attribute__((used)) static struct sg_table *FUNC_12(struct dma_buf_attachment *VAR_2,
          enum dma_data_direction VAR_3)
{
 struct drm_i915_gem_object *VAR_4 = FUNC_1(VAR_2->dmabuf);
 struct sg_table *VAR_5;
 struct scatterlist *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8)
  goto err;


 VAR_5 = FUNC_6(sizeof(struct sg_table), VAR_1);
 if (VAR_5 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto err_unpin_pages;
 }

 VAR_8 = FUNC_7(VAR_5, VAR_4->mm.pages->nents, VAR_1);
 if (VAR_8)
  goto err_free;

 VAR_6 = VAR_4->mm.pages->sgl;
 VAR_7 = VAR_5->sgl;
 for (VAR_9 = 0; VAR_9 < VAR_4->mm.pages->nents; VAR_9++) {
  FUNC_11(VAR_7, FUNC_10(VAR_6), VAR_6->length, 0);
  VAR_7 = FUNC_9(VAR_7);
  VAR_6 = FUNC_9(VAR_6);
 }

 if (!FUNC_2(VAR_2->dev, VAR_5->sgl, VAR_5->nents, VAR_3)) {
  VAR_8 = -VAR_0;
  goto err_free_sg;
 }

 return VAR_5;

err_free_sg:
 FUNC_8(VAR_5);
err_free:
 FUNC_5(VAR_5);
err_unpin_pages:
 FUNC_4(VAR_4);
err:
 return FUNC_0(VAR_8);
}
