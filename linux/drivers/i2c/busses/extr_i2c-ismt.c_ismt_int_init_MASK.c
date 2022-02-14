
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ismt_priv {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ,int ,char*,struct ismt_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ismt_priv *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_4(VAR_3->pci_dev);
 if (VAR_4)
  goto intx;

 VAR_4 = FUNC_2(&VAR_3->pci_dev->dev,
          VAR_3->pci_dev->irq,
          VAR_2,
          0,
          "ismt-msi",
          VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_3->pci_dev);
  goto intx;
 }

 return 0;


intx:
 FUNC_1(&VAR_3->pci_dev->dev,
   "Unable to use MSI interrupts, falling back to legacy\n");

 VAR_4 = FUNC_2(&VAR_3->pci_dev->dev,
          VAR_3->pci_dev->irq,
          VAR_1,
          VAR_0,
          "ismt-intx",
          VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_3->pci_dev->dev, "no usable interrupts\n");
  return VAR_4;
 }

 return 0;
}
