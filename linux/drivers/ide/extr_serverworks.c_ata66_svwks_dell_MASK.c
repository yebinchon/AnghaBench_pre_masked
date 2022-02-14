
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ vendor; scalar_t__ device; int subsystem_device; } ;
struct TYPE_3__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct pci_dev* FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(ide_hwif_t *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_0(VAR_6->dev);

 if (VAR_7->subsystem_vendor == VAR_4 &&
     VAR_7->vendor == VAR_5 &&
     (VAR_7->device == VAR_2 ||
      VAR_7->device == VAR_3))
  return ((1 << (VAR_6->channel + 14)) &
   VAR_7->subsystem_device) ? VAR_1 : VAR_0;
 return VAR_0;
}
