
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int saveVBT; int saveBSM; } ;
struct drm_psb_private {int suspended; int msi_data; int msi_addr; TYPE_1__ regs; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 struct drm_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int,int ) ;

__attribute__((used)) static bool FUNC_6(struct pci_dev *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_2(VAR_3);
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;
 int VAR_6;

 if (!VAR_5->suspended)
  return 1;

 FUNC_4(VAR_3, VAR_0);
 FUNC_3(VAR_3);
 FUNC_5(VAR_3, 0x5c, VAR_5->regs.saveBSM);
 FUNC_5(VAR_3, 0xFC, VAR_5->regs.saveVBT);

 FUNC_5(VAR_3, VAR_1, VAR_5->msi_addr);
 FUNC_5(VAR_3, VAR_2, VAR_5->msi_data);
 VAR_6 = FUNC_1(VAR_3);

 if (VAR_6 != 0)
  FUNC_0(&VAR_3->dev, "pci_enable failed: %d\n", VAR_6);
 else
  VAR_5->suspended = 0;
 return !VAR_5->suspended;
}
