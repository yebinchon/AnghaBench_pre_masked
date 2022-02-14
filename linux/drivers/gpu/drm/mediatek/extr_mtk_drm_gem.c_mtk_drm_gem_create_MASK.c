
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_private {int dma_dev; } ;
struct drm_gem_object {int size; } ;
struct mtk_drm_gem_obj {int dma_addr; scalar_t__ cookie; scalar_t__ kvaddr; int dma_attrs; struct drm_gem_object base; } ;
struct drm_device {struct mtk_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int *,size_t) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 struct mtk_drm_gem_obj* FUNC_2 (struct mtk_drm_gem_obj*) ;
 struct mtk_drm_gem_obj* FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct mtk_drm_gem_obj*) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int ,int ) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct mtk_drm_gem_obj*) ;
 struct mtk_drm_gem_obj* FUNC_8 (struct drm_device*,size_t) ;

struct mtk_drm_gem_obj *FUNC_9(struct drm_device *VAR_4,
        size_t VAR_5, bool VAR_6)
{
 struct mtk_drm_private *VAR_7 = VAR_4->dev_private;
 struct mtk_drm_gem_obj *VAR_8;
 struct drm_gem_object *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_8(VAR_4, VAR_5);
 if (FUNC_4(VAR_8))
  return FUNC_2(VAR_8);

 VAR_9 = &VAR_8->base;

 VAR_8->dma_attrs = VAR_1;

 if (!VAR_6)
  VAR_8->dma_attrs |= VAR_0;

 VAR_8->cookie = FUNC_5(VAR_7->dma_dev, VAR_9->size,
       &VAR_8->dma_addr, VAR_3,
       VAR_8->dma_attrs);
 if (!VAR_8->cookie) {
  FUNC_1("failed to allocate %zx byte dma buffer", VAR_9->size);
  VAR_10 = -VAR_2;
  goto err_gem_free;
 }

 if (VAR_6)
  VAR_8->kvaddr = VAR_8->cookie;

 FUNC_0("cookie = %p dma_addr = %pad size = %zu\n",
    VAR_8->cookie, &VAR_8->dma_addr,
    VAR_5);

 return VAR_8;

err_gem_free:
 FUNC_6(VAR_9);
 FUNC_7(VAR_8);
 return FUNC_3(VAR_10);
}
