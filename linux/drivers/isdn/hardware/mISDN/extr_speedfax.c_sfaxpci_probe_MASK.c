
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfax_hw {int irq; int cfg; struct pci_dev* pdev; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sfax_hw*) ;
 struct sfax_hw* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,struct sfax_hw*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (struct sfax_hw*) ;

__attribute__((used)) static int
FUNC_9(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct sfax_hw *VAR_5 = FUNC_1(sizeof(struct sfax_hw), VAR_1);

 if (!VAR_5) {
  FUNC_6("No memory for Speedfax+ PCI\n");
  return VAR_4;
 }
 VAR_5->pdev = VAR_2;
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_5);
  return VAR_4;
 }

 FUNC_7("mISDN: Speedfax found adapter %s at %s\n",
    (char *)VAR_3->driver_data, FUNC_3(VAR_2));

 VAR_5->cfg = FUNC_4(VAR_2, 0);
 VAR_5->irq = VAR_2->irq;
 FUNC_5(VAR_2, VAR_5);
 VAR_4 = FUNC_8(VAR_5);
 if (VAR_4)
  FUNC_5(VAR_2, ((void*)0));
 return VAR_4;
}
