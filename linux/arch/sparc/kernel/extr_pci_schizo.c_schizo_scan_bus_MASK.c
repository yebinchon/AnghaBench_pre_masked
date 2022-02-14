
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_pbm_info {scalar_t__ chip_type; int pci_bus; TYPE_2__* op; int is_66mhz_capable; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (struct pci_pbm_info*) ;
 int FUNC_2 (struct pci_pbm_info*,struct device*) ;
 int FUNC_3 (struct pci_pbm_info*) ;
 int FUNC_4 (struct pci_pbm_info*) ;

__attribute__((used)) static void FUNC_5(struct pci_pbm_info *VAR_1, struct device *VAR_2)
{
 FUNC_1(VAR_1);
 VAR_1->is_66mhz_capable =
  (FUNC_0(VAR_1->op->dev.of_node, "66mhz-capable", ((void*)0))
   != ((void*)0));

 VAR_1->pci_bus = FUNC_2(VAR_1, VAR_2);

 if (VAR_1->chip_type == VAR_0)
  FUNC_4(VAR_1);
 else
  FUNC_3(VAR_1);
}
