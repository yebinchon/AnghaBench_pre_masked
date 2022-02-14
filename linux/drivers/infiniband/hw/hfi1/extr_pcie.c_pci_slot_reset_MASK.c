
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 struct hfi1_devdata* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_2(struct pci_dev *VAR_1)
{
 struct hfi1_devdata *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, "HFI1 slot_reset function called, ignored\n");
 return VAR_0;
}
