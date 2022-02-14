
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {struct sg_table* import_attach; struct drm_device* dev; } ;
struct drm_gem_object {struct drm_gem_object* import_attach; struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct dma_buf_attachment {struct dma_buf_attachment* import_attach; struct drm_device* dev; } ;
struct dma_buf {int size; struct sg_table* priv; int * ops; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (struct sg_table*) ;
 struct sg_table* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 struct sg_table* FUNC_4 (struct dma_buf*,int ) ;
 int FUNC_5 (struct dma_buf*,struct sg_table*) ;
 struct sg_table* FUNC_6 (struct sg_table*,int ) ;
 int FUNC_7 (struct dma_buf*) ;
 int FUNC_8 (struct sg_table*,struct sg_table*,int ) ;
 int FUNC_9 (struct sg_table*) ;
 int FUNC_10 (struct dma_buf*) ;
 int VAR_1 ;
 struct sg_table* FUNC_11 (struct drm_device*,int ,struct sg_table*) ;

struct drm_gem_object *FUNC_12(struct drm_device *VAR_2,
          struct dma_buf *VAR_3)
{
 struct dma_buf_attachment *VAR_4;
 struct drm_gem_object *VAR_5;
 struct sg_table *VAR_6;
 int VAR_7;

 if (VAR_3->ops == &VAR_1) {
  VAR_5 = VAR_3->priv;
  if (VAR_5->dev == VAR_2) {




   FUNC_9(VAR_5);
   return VAR_5;
  }
 }

 VAR_4 = FUNC_4(VAR_3, VAR_2->dev);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 FUNC_10(VAR_3);

 VAR_6 = FUNC_6(VAR_4, VAR_0);
 if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_3(VAR_6);
  goto fail_detach;
 }

 VAR_5 = FUNC_11(VAR_2, VAR_3->size, VAR_6);
 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_3(VAR_5);
  goto fail_unmap;
 }

 VAR_5->import_attach = VAR_4;

 return VAR_5;

fail_unmap:
 FUNC_8(VAR_4, VAR_6, VAR_0);
fail_detach:
 FUNC_5(VAR_3, VAR_4);
 FUNC_7(VAR_3);

 return FUNC_1(VAR_7);
}
