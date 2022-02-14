
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct rockchip_gem_object {int mm; int size; int dma_addr; TYPE_1__ base; } ;
struct rockchip_drm_private {int mm_lock; int domain; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct rockchip_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->base.dev;
 struct rockchip_drm_private *VAR_2 = VAR_1->dev_private;

 FUNC_1(VAR_2->domain, VAR_0->dma_addr, VAR_0->size);

 FUNC_2(&VAR_2->mm_lock);

 FUNC_0(&VAR_0->mm);

 FUNC_3(&VAR_2->mm_lock);

 return 0;
}
