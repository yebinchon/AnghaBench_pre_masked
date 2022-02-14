
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psb_mmu_driver {int sem; int * msvdx_mmu_invaldc; int needs_tlbflush; struct drm_device* dev; } ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

void FUNC_7(struct psb_mmu_driver *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;
 uint32_t VAR_6;

 FUNC_4(&VAR_3->sem);
 VAR_6 = FUNC_0(VAR_0);
 if (FUNC_2(&VAR_3->needs_tlbflush))
  FUNC_1(VAR_6 | VAR_2, VAR_0);
 else
  FUNC_1(VAR_6 | VAR_1, VAR_0);



 FUNC_6();
 FUNC_1(VAR_6 & ~(VAR_1 | VAR_2),
     VAR_0);
 (void)FUNC_0(VAR_0);

 FUNC_3(&VAR_3->needs_tlbflush, 0);
 if (VAR_3->msvdx_mmu_invaldc)
  FUNC_3(VAR_3->msvdx_mmu_invaldc, 1);
 FUNC_5(&VAR_3->sem);
}
