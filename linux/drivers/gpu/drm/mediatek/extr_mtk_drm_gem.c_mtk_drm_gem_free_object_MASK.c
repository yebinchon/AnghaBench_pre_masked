
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_drm_private {int dma_dev; } ;
struct mtk_drm_gem_obj {int dma_attrs; int dma_addr; int cookie; scalar_t__ sg; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
struct TYPE_2__ {struct mtk_drm_private* dev_private; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*,scalar_t__) ;
 int FUNC_3 (struct mtk_drm_gem_obj*) ;
 struct mtk_drm_gem_obj* FUNC_4 (struct drm_gem_object*) ;

void FUNC_5(struct drm_gem_object *VAR_0)
{
 struct mtk_drm_gem_obj *VAR_1 = FUNC_4(VAR_0);
 struct mtk_drm_private *VAR_2 = VAR_0->dev->dev_private;

 if (VAR_1->sg)
  FUNC_2(VAR_0, VAR_1->sg);
 else
  FUNC_0(VAR_2->dma_dev, VAR_0->size, VAR_1->cookie,
          VAR_1->dma_addr, VAR_1->dma_attrs);


 FUNC_1(VAR_0);

 FUNC_3(VAR_1);
}
