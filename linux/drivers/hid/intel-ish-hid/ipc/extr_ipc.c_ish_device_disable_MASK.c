
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ishtp_device {int dev_state; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ishtp_device*) ;
 scalar_t__ FUNC_2 (struct ishtp_device*) ;
 int FUNC_3 (struct pci_dev*,int ) ;

void FUNC_4(struct ishtp_device *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;

 if (!VAR_3)
  return;


 if (FUNC_2(VAR_2)) {
  FUNC_0(&VAR_3->dev,
   "Can't reset - stuck with DMA in-progress\n");
  return;
 }


 FUNC_3(VAR_3, VAR_1);

 VAR_2->dev_state = VAR_0;
 FUNC_1(VAR_2);
}
