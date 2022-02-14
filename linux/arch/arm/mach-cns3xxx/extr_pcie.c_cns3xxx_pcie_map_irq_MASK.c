
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct cns3xxx_pcie {int* irqs; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 struct cns3xxx_pcie* FUNC_3 (struct pci_dev const*) ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct cns3xxx_pcie *VAR_3 = FUNC_3(VAR_0);
 int VAR_4 = VAR_3->irqs[!!VAR_0->bus->number];

 FUNC_4("PCIe map irq: %04d:%02x:%02x.%02x slot %d, pin %d, irq: %d\n",
  FUNC_2(VAR_0->bus), VAR_0->bus->number, FUNC_1(VAR_0->devfn),
  FUNC_0(VAR_0->devfn), VAR_1, VAR_2, VAR_4);

 return VAR_4;
}
