
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; int device; scalar_t__ subsystem_vendor; int subsystem_device; } ;
struct ata_host {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ata_host *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2->dev);
 if (VAR_3->vendor == VAR_0 && VAR_3->device == 0x2920 &&
     VAR_3->subsystem_vendor == VAR_1 &&
     VAR_3->subsystem_device == 0xb049) {
  FUNC_0(VAR_2->dev,
    "Samsung DB-P70 detected, disabling SIDPR\n");
  return 1;
 }

 return 0;
}
