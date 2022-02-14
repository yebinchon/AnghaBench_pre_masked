
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_mmu_driver {int default_pd; int bif_ctrl; struct drm_device* dev; } ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct psb_mmu_driver*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct psb_mmu_driver *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;

 FUNC_0(VAR_1->bif_ctrl, VAR_0);
 FUNC_2(VAR_1->default_pd);
 FUNC_1(VAR_1);
}
