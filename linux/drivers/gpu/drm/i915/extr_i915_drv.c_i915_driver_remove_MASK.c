
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_7__ {TYPE_1__ hangcheck; } ;
struct TYPE_6__ {struct pci_dev* pdev; } ;
struct drm_i915_private {int runtime_pm; TYPE_3__ gt; TYPE_2__ drm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct pci_dev*,int *,int *,int *) ;
 int FUNC_17 (struct pci_dev*) ;

void FUNC_18(struct drm_i915_private *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->drm.pdev;

 FUNC_1(&VAR_0->runtime_pm);

 FUNC_5(VAR_0);






 FUNC_11(&VAR_0->gt);


 FUNC_15();

 FUNC_7(VAR_0);

 FUNC_2(&VAR_0->drm);

 FUNC_12(VAR_0);

 FUNC_13(&VAR_0->drm);

 FUNC_9(VAR_0);

 FUNC_17(VAR_1);
 FUNC_16(VAR_1, ((void*)0), ((void*)0), ((void*)0));

 FUNC_10(VAR_0);


 FUNC_0(&VAR_0->gt.hangcheck.work);
 FUNC_8(VAR_0);

 FUNC_6(VAR_0);

 FUNC_14(VAR_0);

 FUNC_4(VAR_0);

 FUNC_3(&VAR_0->runtime_pm);
}
