
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int saveBSM; int saveVBT; } ;
struct drm_psb_private {int suspended; int msi_addr; int msi_data; TYPE_1__ regs; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_3);
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;
 int VAR_6, VAR_7;

 if (VAR_5->suspended)
  return;

 FUNC_3(VAR_3);
 FUNC_2(VAR_3, 0x5C, &VAR_6);
 VAR_5->regs.saveBSM = VAR_6;
 FUNC_2(VAR_3, 0xFC, &VAR_7);
 VAR_5->regs.saveVBT = VAR_7;
 FUNC_2(VAR_3, VAR_1, &VAR_5->msi_addr);
 FUNC_2(VAR_3, VAR_2, &VAR_5->msi_data);

 FUNC_0(VAR_3);
 FUNC_4(VAR_3, VAR_0);

 VAR_5->suspended = 1;
}
