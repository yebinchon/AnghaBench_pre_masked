
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(struct pci_dev *VAR_1)
{
 u8 VAR_2;
 FUNC_1(VAR_1, VAR_0, &VAR_2);
 if (VAR_2 >= 16) return;
 FUNC_3("PCI: Setting latency timer of device %s to 64\n",
       FUNC_0(VAR_1));
 FUNC_2(VAR_1, VAR_0, 64);
}
