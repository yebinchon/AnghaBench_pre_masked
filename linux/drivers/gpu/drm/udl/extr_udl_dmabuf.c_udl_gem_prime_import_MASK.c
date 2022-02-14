
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct sg_table* import_attach; } ;
struct udl_gem_object {struct drm_gem_object base; int flags; } ;
struct sg_table {int dummy; } ;
struct drm_device {int dev; } ;
typedef struct sg_table dma_buf_attachment ;
struct dma_buf {int size; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct sg_table*) ;
 struct drm_gem_object* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 int VAR_1 ;
 struct sg_table* FUNC_4 (struct dma_buf*,int ) ;
 int FUNC_5 (struct dma_buf*,struct sg_table*) ;
 struct sg_table* FUNC_6 (struct sg_table*,int ) ;
 int FUNC_7 (struct dma_buf*) ;
 int FUNC_8 (struct sg_table*,struct sg_table*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dma_buf*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct drm_device*,int ,struct sg_table*,struct udl_gem_object**) ;

struct drm_gem_object *FUNC_13(struct drm_device *VAR_2,
    struct dma_buf *VAR_3)
{
 struct dma_buf_attachment *VAR_4;
 struct sg_table *VAR_5;
 struct udl_gem_object *VAR_6;
 int VAR_7;


 FUNC_9(VAR_2->dev);
 VAR_4 = FUNC_4(VAR_3, VAR_2->dev);
 if (FUNC_2(VAR_4)) {
  FUNC_11(VAR_2->dev);
  return FUNC_0(VAR_4);
 }

 FUNC_10(VAR_3);

 VAR_5 = FUNC_6(VAR_4, VAR_0);
 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_3(VAR_5);
  goto fail_detach;
 }

 VAR_7 = FUNC_12(VAR_2, VAR_3->size, VAR_5, &VAR_6);
 if (VAR_7)
  goto fail_unmap;

 VAR_6->base.import_attach = VAR_4;
 VAR_6->flags = VAR_1;

 return &VAR_6->base;

fail_unmap:
 FUNC_8(VAR_4, VAR_5, VAR_0);
fail_detach:
 FUNC_5(VAR_3, VAR_4);
 FUNC_7(VAR_3);
 FUNC_11(VAR_2->dev);
 return FUNC_1(VAR_7);
}
