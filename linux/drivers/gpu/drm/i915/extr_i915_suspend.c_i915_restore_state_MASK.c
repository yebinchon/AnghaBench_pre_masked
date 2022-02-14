
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int struct_mutex; struct pci_dev* pdev; } ;
struct TYPE_3__ {int saveCACHE_MODE_0; int saveMI_ARB_STATE; int* saveSWF0; int* saveSWF1; int* saveSWF3; int saveGCDGMBUS; } ;
struct drm_i915_private {TYPE_2__ drm; TYPE_1__ regfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct pci_dev*,int ,int ) ;

int FUNC_13(struct drm_i915_private *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->drm.pdev;
 int VAR_5;

 FUNC_10(&VAR_3->drm.struct_mutex);

 if (FUNC_3(VAR_3, 4))
  FUNC_12(VAR_4, VAR_1,
          VAR_3->regfile.saveGCDGMBUS);
 FUNC_8(VAR_3);


 if (FUNC_2(VAR_3) < 7)
  FUNC_1(VAR_0, VAR_3->regfile.saveCACHE_MODE_0 |
      0xffff0000);


 FUNC_1(VAR_2, VAR_3->regfile.saveMI_ARB_STATE | 0xffff0000);


 if (FUNC_3(VAR_3, 2) && FUNC_4(VAR_3)) {
  for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
   FUNC_1(FUNC_5(VAR_5), VAR_3->regfile.saveSWF0[VAR_5]);
   FUNC_1(FUNC_6(VAR_5), VAR_3->regfile.saveSWF1[VAR_5]);
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
   FUNC_1(FUNC_7(VAR_5), VAR_3->regfile.saveSWF3[VAR_5]);
 } else if (FUNC_3(VAR_3, 2)) {
  for (VAR_5 = 0; VAR_5 < 7; VAR_5++)
   FUNC_1(FUNC_6(VAR_5), VAR_3->regfile.saveSWF1[VAR_5]);
 } else if (FUNC_0(VAR_3)) {
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
   FUNC_1(FUNC_5(VAR_5), VAR_3->regfile.saveSWF0[VAR_5]);
   FUNC_1(FUNC_6(VAR_5), VAR_3->regfile.saveSWF1[VAR_5]);
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
   FUNC_1(FUNC_7(VAR_5), VAR_3->regfile.saveSWF3[VAR_5]);
 }

 FUNC_11(&VAR_3->drm.struct_mutex);

 FUNC_9(VAR_3);

 return 0;
}
