
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ event; } ;
struct TYPE_4__ {TYPE_3__ power_state; } ;
struct TYPE_5__ {TYPE_1__ power; } ;
struct pci_dev {TYPE_2__ dev; } ;
typedef int pmac_ide_hwif_t ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct pci_dev *VAR_2)
{
 pmac_ide_hwif_t *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 if (VAR_2->dev.power.power_state.event != VAR_1) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == 0)
   VAR_2->dev.power.power_state = VAR_0;
 }

 return VAR_4;
}
