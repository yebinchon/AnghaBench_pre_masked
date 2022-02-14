
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int size; struct drm_device* dev; } ;
struct rockchip_gem_object {int kvaddr; int dma_attrs; int dma_addr; struct drm_gem_object base; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rockchip_gem_object *VAR_4,
      bool VAR_5)
{
 struct drm_gem_object *VAR_6 = &VAR_4->base;
 struct drm_device *VAR_7 = VAR_6->dev;

 VAR_4->dma_attrs = VAR_1;

 if (!VAR_5)
  VAR_4->dma_attrs |= VAR_0;

 VAR_4->kvaddr = FUNC_1(VAR_7->dev, VAR_6->size,
      &VAR_4->dma_addr, VAR_3,
      VAR_4->dma_attrs);
 if (!VAR_4->kvaddr) {
  FUNC_0("failed to allocate %zu byte dma buffer", VAR_6->size);
  return -VAR_2;
 }

 return 0;
}
