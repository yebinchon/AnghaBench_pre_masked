
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ open_count; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 struct drm_i915_private* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_1(struct pci_dev *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_0(VAR_0);






 return VAR_1 && VAR_1->drm.open_count == 0;
}
