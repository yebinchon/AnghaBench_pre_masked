
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct mtk_drm_private {int dma_dev; } ;
struct mtk_drm_gem_obj {int dma_attrs; int dma_addr; int cookie; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
struct TYPE_2__ {struct mtk_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ,int ) ;
 int FUNC_1 (struct vm_area_struct*) ;
 struct mtk_drm_gem_obj* FUNC_2 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_3(struct drm_gem_object *VAR_1,
       struct vm_area_struct *VAR_2)

{
 int VAR_3;
 struct mtk_drm_gem_obj *VAR_4 = FUNC_2(VAR_1);
 struct mtk_drm_private *VAR_5 = VAR_1->dev->dev_private;





 VAR_2->vm_flags &= ~VAR_0;

 VAR_3 = FUNC_0(VAR_5->dma_dev, VAR_2, VAR_4->cookie,
        VAR_4->dma_addr, VAR_1->size, VAR_4->dma_attrs);
 if (VAR_3)
  FUNC_1(VAR_2);

 return VAR_3;
}
