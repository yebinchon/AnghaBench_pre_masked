
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int resv; struct dma_buf_attachment* import_attach; struct drm_device* dev; } ;
struct drm_i915_gem_object {struct drm_gem_object base; scalar_t__ write_domain; int read_domains; } ;
struct drm_device {int dev; } ;
struct dma_buf_attachment {int dummy; } ;
struct dma_buf {int resv; int size; int * ops; } ;
struct TYPE_2__ {struct drm_gem_object base; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct dma_buf_attachment*) ;
 struct drm_gem_object* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct dma_buf_attachment*) ;
 struct dma_buf_attachment* FUNC_3 (struct dma_buf*,int ) ;
 int FUNC_4 (struct dma_buf*,struct dma_buf_attachment*) ;
 int FUNC_5 (struct dma_buf*) ;
 struct drm_i915_gem_object* FUNC_6 (struct dma_buf*) ;
 int FUNC_7 (struct drm_device*,struct drm_gem_object*,int ) ;
 int FUNC_8 (struct dma_buf*) ;
 int VAR_2 ;
 struct drm_i915_gem_object* FUNC_9 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (struct drm_i915_gem_object*,int *) ;

struct drm_gem_object *FUNC_12(struct drm_device *VAR_4,
          struct dma_buf *VAR_5)
{
 struct dma_buf_attachment *VAR_6;
 struct drm_i915_gem_object *VAR_7;
 int VAR_8;


 if (VAR_5->ops == &VAR_2) {
  VAR_7 = FUNC_6(VAR_5);

  if (VAR_7->base.dev == VAR_4) {




   return &FUNC_10(VAR_7)->base;
  }
 }


 VAR_6 = FUNC_3(VAR_5, VAR_4->dev);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 FUNC_8(VAR_5);

 VAR_7 = FUNC_9();
 if (VAR_7 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto fail_detach;
 }

 FUNC_7(VAR_4, &VAR_7->base, VAR_5->size);
 FUNC_11(VAR_7, &VAR_3);
 VAR_7->base.import_attach = VAR_6;
 VAR_7->base.resv = VAR_5->resv;
 VAR_7->read_domains = VAR_1;
 VAR_7->write_domain = 0;

 return &VAR_7->base;

fail_detach:
 FUNC_4(VAR_5, VAR_6);
 FUNC_5(VAR_5);

 return FUNC_1(VAR_8);
}
