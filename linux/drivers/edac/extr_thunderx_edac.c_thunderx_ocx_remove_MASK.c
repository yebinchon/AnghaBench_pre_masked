
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_ocx {int debugfs; scalar_t__ regs; } ;
struct pci_dev {int dev; } ;
struct edac_device_ctl_info {struct thunderx_ocx* pvt_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_4)
{
 struct edac_device_ctl_info *VAR_5 = FUNC_4(VAR_4);
 struct thunderx_ocx *VAR_6 = VAR_5->pvt_info;
 int VAR_7;

 FUNC_5(VAR_0, VAR_6->regs + VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_5(VAR_2,
         VAR_6->regs + FUNC_0(VAR_7));
 }

 FUNC_1(VAR_6->debugfs);

 FUNC_2(&VAR_4->dev);
 FUNC_3(VAR_5);
}
