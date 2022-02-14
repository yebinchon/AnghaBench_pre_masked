
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_private {struct mtk_ddp_comp** ddp_comp; } ;
struct mtk_ddp_comp {size_t id; } ;
struct drm_device {struct mtk_drm_private* dev_private; } ;


 int VAR_0 ;

int FUNC_0(struct drm_device *VAR_1, struct mtk_ddp_comp *VAR_2)
{
 struct mtk_drm_private *VAR_3 = VAR_1->dev_private;

 if (VAR_3->ddp_comp[VAR_2->id])
  return -VAR_0;

 VAR_3->ddp_comp[VAR_2->id] = VAR_2;
 return 0;
}
