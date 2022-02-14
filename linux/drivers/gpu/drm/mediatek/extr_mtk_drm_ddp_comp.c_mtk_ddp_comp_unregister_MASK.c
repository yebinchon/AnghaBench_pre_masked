
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_private {int ** ddp_comp; } ;
struct mtk_ddp_comp {size_t id; } ;
struct drm_device {struct mtk_drm_private* dev_private; } ;



void FUNC_0(struct drm_device *VAR_0, struct mtk_ddp_comp *VAR_1)
{
 struct mtk_drm_private *VAR_2 = VAR_0->dev_private;

 VAR_2->ddp_comp[VAR_1->id] = ((void*)0);
}
