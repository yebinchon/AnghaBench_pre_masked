
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ msi_enabled; int dev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {int pm_qos; TYPE_1__ drm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 scalar_t__ FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_i915_private*) ;
 int FUNC_19 (struct drm_i915_private*) ;
 int FUNC_20 (struct drm_i915_private*,char*) ;
 int FUNC_21 (struct drm_i915_private*) ;
 int FUNC_22 (struct drm_i915_private*) ;
 int FUNC_23 (struct drm_i915_private*) ;
 int FUNC_24 (struct drm_i915_private*) ;
 int FUNC_25 (struct drm_i915_private*) ;
 int FUNC_26 (struct drm_i915_private*) ;
 int FUNC_27 (struct drm_i915_private*) ;
 int FUNC_28 (struct drm_i915_private*) ;
 int FUNC_29 (struct drm_i915_private*) ;
 scalar_t__ FUNC_30 (struct drm_i915_private*) ;
 int FUNC_31 (struct drm_i915_private*) ;
 int FUNC_32 (struct drm_i915_private*) ;
 int FUNC_33 (struct pci_dev*) ;
 scalar_t__ FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct pci_dev*) ;
 int FUNC_36 (int *,int ,int ) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_39(struct drm_i915_private *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->drm.pdev;
 int VAR_7;

 if (FUNC_16(VAR_5))
  return -VAR_0;

 FUNC_22(VAR_5);

 if (FUNC_4(VAR_5)) {
  if (FUNC_30(VAR_5) &&
      !FUNC_31(VAR_5)) {
   FUNC_20(VAR_5,
       "incompatible vGPU found, support for isolated ppGTT required\n");
   return -VAR_1;
  }
 }

 if (FUNC_3(VAR_5)) {





  if (FUNC_30(VAR_5) &&
      !FUNC_32(VAR_5)) {
   FUNC_20(VAR_5,
       "old vGPU host found, support for HWSP emulation required\n");
   return -VAR_1;
  }
 }

 FUNC_29(VAR_5);


 FUNC_11(VAR_5);

 FUNC_19(VAR_5);

 VAR_7 = FUNC_15(VAR_5);
 if (VAR_7)
  goto err_perf;





 VAR_7 = FUNC_17(VAR_5);
 if (VAR_7) {
  FUNC_2("failed to remove conflicting framebuffer drivers\n");
  goto err_ggtt;
 }

 VAR_7 = FUNC_38(VAR_6);
 if (VAR_7) {
  FUNC_2("failed to remove conflicting VGA console\n");
  goto err_ggtt;
 }

 VAR_7 = FUNC_14(VAR_5);
 if (VAR_7)
  goto err_ggtt;

 FUNC_24(VAR_5);

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7) {
  FUNC_2("failed to enable GGTT\n");
  goto err_ggtt;
 }

 FUNC_35(VAR_6);





 FUNC_10(&VAR_6->dev, VAR_4);


 if (FUNC_6(VAR_5, 2)) {
  VAR_7 = FUNC_9(&VAR_6->dev, FUNC_0(30));
  if (VAR_7) {
   FUNC_2("failed to set DMA mask\n");

   goto err_ggtt;
  }
 }
 if (FUNC_7(VAR_5) || FUNC_8(VAR_5)) {
  VAR_7 = FUNC_9(&VAR_6->dev, FUNC_0(32));

  if (VAR_7) {
   FUNC_2("failed to set DMA mask\n");

   goto err_ggtt;
  }
 }

 FUNC_36(&VAR_5->pm_qos, VAR_2,
      VAR_3);


 FUNC_28(VAR_5);

 FUNC_25(VAR_5);
 if (FUNC_5(VAR_5) >= 5) {
  if (FUNC_34(VAR_6) < 0)
   FUNC_1("can't enable MSI");
 }

 VAR_7 = FUNC_26(VAR_5);
 if (VAR_7)
  goto err_msi;

 FUNC_27(VAR_5);




 FUNC_23(VAR_5);

 FUNC_21(VAR_5);

 return 0;

err_msi:
 if (VAR_6->msi_enabled)
  FUNC_33(VAR_6);
 FUNC_37(&VAR_5->pm_qos);
err_ggtt:
 FUNC_12(VAR_5);
err_perf:
 FUNC_18(VAR_5);
 return VAR_7;
}
