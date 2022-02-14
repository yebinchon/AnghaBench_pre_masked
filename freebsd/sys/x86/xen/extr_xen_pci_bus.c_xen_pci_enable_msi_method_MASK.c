
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct pcicfg_msi {int msi_ctrl; scalar_t__ msi_location; } ;
struct TYPE_2__ {struct pcicfg_msi msi; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;

void
FUNC_2(device_t VAR_2, device_t VAR_3, uint64_t VAR_4,
     uint16_t VAR_5)
{
 struct pci_devinfo *VAR_6 = FUNC_0(VAR_3);
 struct pcicfg_msi *VAR_7 = &VAR_6->cfg.msi;


 VAR_7->msi_ctrl |= VAR_0;
 FUNC_1(VAR_3, VAR_7->msi_location + VAR_1,
     VAR_7->msi_ctrl, 2);
}
