
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int num_pipes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 TYPE_2__* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_device*) ;
 int FUNC_20 (struct drm_i915_private*) ;
 int FUNC_21 (struct drm_i915_private*) ;
 int FUNC_22 (struct drm_i915_private*,int) ;
 int FUNC_23 () ;
 int FUNC_24 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_25 (struct drm_device*) ;
 int FUNC_26 (struct pci_dev*,struct drm_i915_private*,int *,int *) ;
 int FUNC_27 (struct pci_dev*,int *,int) ;
 int FUNC_28 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_29(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_25(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->drm.pdev;
 int VAR_6;

 if (FUNC_7(VAR_4))
  return -VAR_0;

 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_2(&VAR_4->drm,
          FUNC_1(VAR_4)->num_pipes);
  if (VAR_6)
   goto out;
 }

 FUNC_8(VAR_4);
 VAR_6 = FUNC_26(VAR_5, VAR_4, ((void*)0), VAR_2);
 if (VAR_6 && VAR_6 != -VAR_0)
  goto out;

 FUNC_23();

 VAR_6 = FUNC_27(VAR_5, &VAR_1, 0);
 if (VAR_6)
  goto cleanup_vga_client;


 FUNC_24(VAR_4);

 FUNC_22(VAR_4, 0);

 FUNC_10(VAR_4);

 VAR_6 = FUNC_16(VAR_4);
 if (VAR_6)
  goto cleanup_csr;

 FUNC_12(VAR_4);



 VAR_6 = FUNC_19(VAR_3);
 if (VAR_6)
  goto cleanup_irq;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  goto cleanup_modeset;

 FUNC_20(VAR_4);

 if (!FUNC_0(VAR_4))
  return 0;

 VAR_6 = FUNC_11(VAR_3);
 if (VAR_6)
  goto cleanup_gem;


 FUNC_14(VAR_4);

 FUNC_15(VAR_4);

 return 0;

cleanup_gem:
 FUNC_6(VAR_4);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
cleanup_modeset:
 FUNC_18(VAR_3);
cleanup_irq:
 FUNC_17(VAR_4);
 FUNC_13(VAR_4);
cleanup_csr:
 FUNC_9(VAR_4);
 FUNC_21(VAR_4);
 FUNC_28(VAR_5);
cleanup_vga_client:
 FUNC_26(VAR_5, ((void*)0), ((void*)0), ((void*)0));
out:
 return VAR_6;
}
