
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (struct hfi1_devdata*,int) ;
 struct hfi1_devdata* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void
FUNC_3(struct pci_dev *VAR_0)
{
 struct hfi1_devdata *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1, "HFI1 resume function called\n");





 FUNC_1(VAR_1, 1);
}
