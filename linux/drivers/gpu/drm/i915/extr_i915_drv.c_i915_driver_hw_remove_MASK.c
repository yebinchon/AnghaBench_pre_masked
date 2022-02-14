
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ msi_enabled; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {int pm_qos; TYPE_1__ drm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->drm.pdev;

 FUNC_0(VAR_0);

 if (VAR_1->msi_enabled)
  FUNC_1(VAR_1);

 FUNC_2(&VAR_0->pm_qos);
}
