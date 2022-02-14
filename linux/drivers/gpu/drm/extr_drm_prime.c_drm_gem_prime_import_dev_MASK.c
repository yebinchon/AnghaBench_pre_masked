
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int resv; struct sg_table* import_attach; struct drm_device* dev; } ;
struct drm_gem_object {int resv; struct drm_gem_object* import_attach; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct dma_buf_attachment {int resv; struct dma_buf_attachment* import_attach; struct drm_device* dev; } ;
struct dma_buf {int resv; struct sg_table* priv; int * ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct sg_table* (* gem_prime_import_sg_table ) (struct drm_device*,struct sg_table*,struct sg_table*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sg_table* FUNC_0 (struct sg_table*) ;
 struct sg_table* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 struct sg_table* FUNC_4 (struct dma_buf*,struct device*) ;
 int FUNC_5 (struct dma_buf*,struct sg_table*) ;
 struct sg_table* FUNC_6 (struct sg_table*,int ) ;
 int FUNC_7 (struct dma_buf*) ;
 int FUNC_8 (struct sg_table*,struct sg_table*,int ) ;
 int FUNC_9 (struct sg_table*) ;
 int VAR_2 ;
 int FUNC_10 (struct dma_buf*) ;
 struct sg_table* FUNC_11 (struct drm_device*,struct sg_table*,struct sg_table*) ;

struct drm_gem_object *FUNC_12(struct drm_device *VAR_3,
         struct dma_buf *VAR_4,
         struct device *VAR_5)
{
 struct dma_buf_attachment *VAR_6;
 struct sg_table *VAR_7;
 struct drm_gem_object *VAR_8;
 int VAR_9;

 if (VAR_4->ops == &VAR_2) {
  VAR_8 = VAR_4->priv;
  if (VAR_8->dev == VAR_3) {




   FUNC_9(VAR_8);
   return VAR_8;
  }
 }

 if (!VAR_3->driver->gem_prime_import_sg_table)
  return FUNC_1(-VAR_1);

 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 FUNC_10(VAR_4);

 VAR_7 = FUNC_6(VAR_6, VAR_0);
 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_3(VAR_7);
  goto fail_detach;
 }

 VAR_8 = VAR_3->driver->gem_prime_import_sg_table(VAR_3, VAR_6, VAR_7);
 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_3(VAR_8);
  goto fail_unmap;
 }

 VAR_8->import_attach = VAR_6;
 VAR_8->resv = VAR_4->resv;

 return VAR_8;

fail_unmap:
 FUNC_8(VAR_6, VAR_7, VAR_0);
fail_detach:
 FUNC_5(VAR_4, VAR_6);
 FUNC_7(VAR_4);

 return FUNC_1(VAR_9);
}
