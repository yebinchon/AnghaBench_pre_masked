
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 int FUNC_0 (struct pci_dev*,int,int ) ;
 int FUNC_1 (struct intel_uncore_box*) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pci_dev;
 int VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2, 0);
}
