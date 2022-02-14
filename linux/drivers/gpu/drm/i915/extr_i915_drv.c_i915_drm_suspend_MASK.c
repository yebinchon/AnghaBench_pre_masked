
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {int runtime_pm; int suspend_count; TYPE_1__ drm; } ;
struct drm_device {int dummy; } ;
typedef int pci_power_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_device*,int ,int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct pci_dev*) ;
 scalar_t__ FUNC_16 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_17 (struct drm_device*) ;

__attribute__((used)) static int FUNC_18(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_17(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->drm.pdev;
 pci_power_t VAR_6;

 FUNC_0(&VAR_4->runtime_pm);



 FUNC_11(VAR_4);

 FUNC_1(VAR_3);

 FUNC_15(VAR_5);

 FUNC_6(VAR_3);

 FUNC_7(VAR_4);

 FUNC_12(VAR_4);
 FUNC_9(VAR_4);

 FUNC_13(VAR_4);

 FUNC_14(VAR_4);

 FUNC_3(VAR_4);

 FUNC_4(VAR_4);

 VAR_6 = FUNC_16(VAR_4) ? VAR_1 : VAR_2;
 FUNC_10(VAR_4, VAR_6);

 FUNC_8(VAR_3, VAR_0, 1);

 VAR_4->suspend_count++;

 FUNC_5(VAR_4);

 FUNC_2(&VAR_4->runtime_pm);

 return 0;
}
