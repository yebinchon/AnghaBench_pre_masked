
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psb_mmu_driver {int needs_tlbflush; int * msvdx_mmu_invaldc; struct drm_device* dev; } ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct psb_mmu_driver *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;

 if (FUNC_2(&VAR_2->needs_tlbflush) || VAR_3) {
  uint32_t VAR_6 = FUNC_0(VAR_0);
  FUNC_1(VAR_6 | VAR_1, VAR_0);


  FUNC_4();
  FUNC_1(VAR_6 & ~VAR_1, VAR_0);
  (void)FUNC_0(VAR_0);
  if (VAR_2->msvdx_mmu_invaldc)
   FUNC_3(VAR_2->msvdx_mmu_invaldc, 1);
 }
 FUNC_3(&VAR_2->needs_tlbflush, 0);
}
