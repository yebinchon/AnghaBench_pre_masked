
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct mtk_drm_private {int dma_dev; } ;
struct mtk_drm_gem_obj {int dma_attrs; int dma_addr; int cookie; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
struct TYPE_2__ {struct mtk_drm_private* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct sg_table* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct sg_table*,int ,int ,int ,int ) ;
 int FUNC_3 (struct sg_table*) ;
 struct sg_table* FUNC_4 (int,int ) ;
 struct mtk_drm_gem_obj* FUNC_5 (struct drm_gem_object*) ;

struct sg_table *FUNC_6(struct drm_gem_object *VAR_2)
{
 struct mtk_drm_gem_obj *VAR_3 = FUNC_5(VAR_2);
 struct mtk_drm_private *VAR_4 = VAR_2->dev->dev_private;
 struct sg_table *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_2(VAR_4->dma_dev, VAR_5, VAR_3->cookie,
        VAR_3->dma_addr, VAR_2->size,
        VAR_3->dma_attrs);
 if (VAR_6) {
  FUNC_0("failed to allocate sgt, %d\n", VAR_6);
  FUNC_3(VAR_5);
  return FUNC_1(VAR_6);
 }

 return VAR_5;
}
