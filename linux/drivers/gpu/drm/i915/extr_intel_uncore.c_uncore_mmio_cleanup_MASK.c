
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct intel_uncore {int regs; TYPE_2__* i915; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int FUNC_0 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->i915->drm.pdev;

 FUNC_0(VAR_1, VAR_0->regs);
}
