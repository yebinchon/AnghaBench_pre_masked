
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct rockchip_gem_object {int dma_attrs; int dma_addr; int kvaddr; } ;
struct drm_gem_object {int size; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ,int ) ;
 struct rockchip_gem_object* FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_2(struct drm_gem_object *VAR_0,
         struct vm_area_struct *VAR_1)
{
 struct rockchip_gem_object *VAR_2 = FUNC_1(VAR_0);
 struct drm_device *VAR_3 = VAR_0->dev;

 return FUNC_0(VAR_3->dev, VAR_1, VAR_2->kvaddr, VAR_2->dma_addr,
         VAR_0->size, VAR_2->dma_attrs);
}
