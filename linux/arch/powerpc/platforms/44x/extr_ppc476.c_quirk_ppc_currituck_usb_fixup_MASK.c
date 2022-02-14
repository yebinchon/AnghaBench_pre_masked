
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 if (FUNC_0("ibm,currituck")) {
  FUNC_1(VAR_0, 0xe0, 0x0114231f);
  FUNC_1(VAR_0, 0xe4, 0x00006c40);
 }
}
