
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int size; struct drm_device* dev; } ;
struct rockchip_gem_object {int dma_attrs; int dma_addr; int kvaddr; struct drm_gem_object base; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rockchip_gem_object *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base;
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2->dev, VAR_1->size, VAR_0->kvaddr, VAR_0->dma_addr,
         VAR_0->dma_attrs);
}
