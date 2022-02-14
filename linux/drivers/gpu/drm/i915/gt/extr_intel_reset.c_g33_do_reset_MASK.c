
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct intel_gt {TYPE_2__* i915; } ;
typedef int intel_engine_mask_t ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct intel_gt *VAR_2,
   intel_engine_mask_t VAR_3,
   unsigned int VAR_4)
{
 struct pci_dev *VAR_5 = VAR_2->i915->drm.pdev;

 FUNC_1(VAR_5, VAR_1, VAR_0);
 return FUNC_2(FUNC_0(VAR_5), 50);
}
