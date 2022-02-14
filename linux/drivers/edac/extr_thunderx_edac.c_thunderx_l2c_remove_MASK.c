
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_l2c {int debugfs; scalar_t__ regs; } ;
struct pci_dev {int device; int dev; } ;
struct edac_device_ctl_info {struct thunderx_l2c* pvt_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_6)
{
 struct edac_device_ctl_info *VAR_7 = FUNC_3(VAR_6);
 struct thunderx_l2c *VAR_8 = VAR_7->pvt_info;

 switch (VAR_6->device) {
 case 128:
  FUNC_4(VAR_4, VAR_8->regs + VAR_5);
  break;
 case 130:
  FUNC_4(VAR_0, VAR_8->regs + VAR_1);
  break;
 case 129:
  FUNC_4(VAR_2, VAR_8->regs + VAR_3);
  break;
 }

 FUNC_0(VAR_8->debugfs);

 FUNC_1(&VAR_6->dev);
 FUNC_2(VAR_7);
}
