
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_mmu_pt {int dummy; } ;
struct psb_mmu_pd {int hw_context; int p; int dummy_pt; int dummy_page; struct psb_mmu_pt** tables; struct psb_mmu_driver* driver; } ;
struct psb_mmu_driver {int sem; struct drm_device* dev; } ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct psb_mmu_pd*) ;
 int FUNC_4 (struct psb_mmu_driver*,int) ;
 int FUNC_5 (struct psb_mmu_pt*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct psb_mmu_pt**) ;

void FUNC_8(struct psb_mmu_pd *VAR_1)
{
 struct psb_mmu_driver *VAR_2 = VAR_1->driver;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct drm_psb_private *VAR_4 = VAR_3->dev_private;
 struct psb_mmu_pt *VAR_5;
 int VAR_6;

 FUNC_2(&VAR_2->sem);
 if (VAR_1->hw_context != -1) {
  FUNC_0(0, VAR_0 + VAR_1->hw_context * 4);
  FUNC_4(VAR_2, 1);
 }




 for (VAR_6 = 0; VAR_6 < 1024; ++VAR_6) {
  VAR_5 = VAR_1->tables[VAR_6];
  if (VAR_5)
   FUNC_5(VAR_5);
 }

 FUNC_7(VAR_1->tables);
 FUNC_1(VAR_1->dummy_page);
 FUNC_1(VAR_1->dummy_pt);
 FUNC_1(VAR_1->p);
 FUNC_3(VAR_1);
 FUNC_6(&VAR_2->sem);
}
