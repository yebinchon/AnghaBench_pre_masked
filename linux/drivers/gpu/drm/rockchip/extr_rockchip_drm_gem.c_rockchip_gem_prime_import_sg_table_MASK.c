
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct rockchip_gem_object {struct drm_gem_object base; } ;
struct rockchip_drm_private {scalar_t__ domain; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; } ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (char*,int) ;
 struct drm_gem_object* FUNC_1 (struct rockchip_gem_object*) ;
 struct drm_gem_object* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct rockchip_gem_object*) ;
 struct rockchip_gem_object* FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,struct dma_buf_attachment*,struct sg_table*,struct rockchip_gem_object*) ;
 int FUNC_6 (struct drm_device*,struct dma_buf_attachment*,struct sg_table*,struct rockchip_gem_object*) ;
 int FUNC_7 (struct rockchip_gem_object*) ;

struct drm_gem_object *
FUNC_8(struct drm_device *VAR_0,
       struct dma_buf_attachment *VAR_1,
       struct sg_table *VAR_2)
{
 struct rockchip_drm_private *VAR_3 = VAR_0->dev_private;
 struct rockchip_gem_object *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_0, VAR_1->dmabuf->size);
 if (FUNC_3(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_3->domain)
  VAR_5 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_4);
 else
  VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_4);

 if (VAR_5 < 0) {
  FUNC_0("failed to import sg table: %d\n", VAR_5);
  goto err_free_rk_obj;
 }

 return &VAR_4->base;

err_free_rk_obj:
 FUNC_7(VAR_4);
 return FUNC_2(VAR_5);
}
