
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ runtime_status; scalar_t__ is_prepared; } ;
struct TYPE_4__ {TYPE_1__ power; } ;
struct pci_dev {scalar_t__ irq; scalar_t__ irq_managed; TYPE_2__ dev; int pin; } ;
struct acpi_prt_entry {int index; scalar_t__ link; } ;


 scalar_t__ VAR_0 ;
 struct acpi_prt_entry* FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (struct acpi_prt_entry*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct pci_dev *VAR_1)
{
 struct acpi_prt_entry *VAR_2;
 int VAR_3;
 u8 VAR_4;

 VAR_4 = VAR_1->pin;
 if (!VAR_4 || !VAR_1->irq_managed || VAR_1->irq <= 0)
  return;


 if (VAR_1->dev.power.is_prepared)
  return;





 VAR_2 = FUNC_0(VAR_1, VAR_4);
 if (!VAR_2)
  return;

 if (VAR_2->link)
  VAR_3 = FUNC_1(VAR_2->link);
 else
  VAR_3 = VAR_2->index;

 FUNC_4(VAR_2);






 FUNC_3(&VAR_1->dev, "PCI INT %c disabled\n", FUNC_5(VAR_4));
 if (VAR_3 >= 0) {
  FUNC_2(VAR_3);
  VAR_1->irq_managed = 0;
 }
}
