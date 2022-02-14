
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct intel_uncore {int * regs; struct drm_i915_private* i915; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int * FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct intel_uncore *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->i915;
 struct pci_dev *VAR_3 = VAR_2->drm.pdev;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, 2) ? 1 : 0;
 if (FUNC_1(VAR_2) < 5)
  VAR_5 = 512 * 1024;
 else
  VAR_5 = 2 * 1024 * 1024;
 VAR_1->regs = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_1->regs == ((void*)0)) {
  FUNC_0("failed to map registers\n");

  return -VAR_0;
 }

 return 0;
}
