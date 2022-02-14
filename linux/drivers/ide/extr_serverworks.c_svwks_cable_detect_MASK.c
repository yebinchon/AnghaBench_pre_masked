
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ device; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static u8 FUNC_4(ide_hwif_t *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_3(VAR_7->dev);


 if (VAR_8->subsystem_vendor == VAR_5)
  return FUNC_2 (VAR_7);


 if (VAR_8->subsystem_vendor == VAR_4)
  return FUNC_1 (VAR_7);


 if (VAR_8->subsystem_vendor == VAR_6)
  return FUNC_0 (VAR_7);


 if ((VAR_8->device == VAR_2) ||
     (VAR_8->device == VAR_3))
  return VAR_1;

 return VAR_0;
}
