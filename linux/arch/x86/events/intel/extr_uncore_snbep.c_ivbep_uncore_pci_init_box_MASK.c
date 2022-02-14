
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pci_dev;

 FUNC_0(VAR_3, VAR_1, VAR_0);
}
