
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (char*,size_t,size_t,int) ;
 int* VAR_0 ;

int FUNC_1(const struct pci_dev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = VAR_0[VAR_2];

 FUNC_0("PCI: Mapping TITAN IRQ for slot %d, pin %c to irq %d\n",
  VAR_2, VAR_3 - 1 + 'A', VAR_4);

 return VAR_4;
}
