
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {struct pci_dev* pdev; int isr_name; int devno; } ;
struct pci_dev {int dev; scalar_t__ msi_enabled; int irq; } ;


 char* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int ,int ,int ,struct skd_device*) ;
 int FUNC_2 (struct pci_dev*,int,int,unsigned int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct skd_device*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,int,char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct skd_device *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->pdev;
 unsigned int VAR_10 = VAR_2;
 int VAR_11;

 if (VAR_7 == VAR_5) {
  VAR_11 = FUNC_4(VAR_8);
  if (!VAR_11)
   return 0;

  FUNC_0(&VAR_8->pdev->dev,
   "failed to enable MSI-X, re-trying with MSI %d\n", VAR_11);
 }

 FUNC_5(VAR_8->isr_name, sizeof(VAR_8->isr_name), "%s%d", VAR_0,
   VAR_8->devno);

 if (VAR_7 != VAR_4)
  VAR_10 |= VAR_3;
 VAR_11 = FUNC_2(VAR_9, 1, 1, VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_8->pdev->dev,
   "failed to allocate the MSI interrupt %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_1(&VAR_9->dev, VAR_9->irq, VAR_6,
   VAR_9->msi_enabled ? 0 : VAR_1,
   VAR_8->isr_name, VAR_8);
 if (VAR_11) {
  FUNC_3(VAR_9);
  FUNC_0(&VAR_8->pdev->dev, "failed to allocate interrupt %d\n",
   VAR_11);
  return VAR_11;
 }

 return 0;
}
