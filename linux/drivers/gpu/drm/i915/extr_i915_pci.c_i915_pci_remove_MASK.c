
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_i915_private {int drm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct drm_i915_private *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return;

 FUNC_1(VAR_1);
 FUNC_3(VAR_0, ((void*)0));

 FUNC_0(&VAR_1->drm);
}
