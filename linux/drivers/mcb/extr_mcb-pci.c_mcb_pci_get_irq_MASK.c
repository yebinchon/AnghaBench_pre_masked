
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct mcb_device {struct mcb_bus* bus; } ;
struct mcb_bus {struct device* carrier; } ;
struct device {int dummy; } ;


 struct pci_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct mcb_device *VAR_0)
{
 struct mcb_bus *VAR_1 = VAR_0->bus;
 struct device *VAR_2 = VAR_1->carrier;
 struct pci_dev *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->irq;
}
