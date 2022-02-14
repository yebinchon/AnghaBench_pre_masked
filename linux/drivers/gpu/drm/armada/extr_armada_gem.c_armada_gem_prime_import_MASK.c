
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct dma_buf_attachment* import_attach; struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct dma_buf_attachment {int dummy; } ;
struct dma_buf {int size; struct drm_gem_object* priv; int * ops; } ;
struct armada_gem_object {struct drm_gem_object obj; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct dma_buf_attachment*) ;
 struct drm_gem_object* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dma_buf_attachment*) ;
 struct armada_gem_object* FUNC_3 (struct drm_device*,int ) ;
 int VAR_1 ;
 struct dma_buf_attachment* FUNC_4 (struct dma_buf*,int ) ;
 int FUNC_5 (struct dma_buf*,struct dma_buf_attachment*) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct dma_buf*) ;

struct drm_gem_object *
FUNC_8(struct drm_device *VAR_2, struct dma_buf *VAR_3)
{
 struct dma_buf_attachment *VAR_4;
 struct armada_gem_object *VAR_5;

 if (VAR_3->ops == &VAR_1) {
  struct drm_gem_object *VAR_6 = VAR_3->priv;
  if (VAR_6->dev == VAR_2) {




   FUNC_6(VAR_6);
   return VAR_6;
  }
 }

 VAR_4 = FUNC_4(VAR_3, VAR_2->dev);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_2, VAR_3->size);
 if (!VAR_5) {
  FUNC_5(VAR_3, VAR_4);
  return FUNC_1(-VAR_0);
 }

 VAR_5->obj.import_attach = VAR_4;
 FUNC_7(VAR_3);






 return &VAR_5->obj;
}
