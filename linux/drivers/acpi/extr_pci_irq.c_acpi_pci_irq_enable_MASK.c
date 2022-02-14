
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq_managed; int irq; int class; int dev; int pin; } ;
struct acpi_prt_entry {int index; scalar_t__ link; } ;
typedef int link_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct acpi_prt_entry* FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (scalar_t__,int,int*,int*,char**) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (int *,char*,int ,char*,int,char*,char*,int) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (struct acpi_prt_entry*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,char*,char*) ;

int FUNC_12(struct pci_dev *VAR_7)
{
 struct acpi_prt_entry *VAR_8;
 int VAR_9;
 u8 VAR_10;
 int VAR_11 = VAR_4;







 int VAR_12 = VAR_6 == VAR_3 ?
          VAR_0 : VAR_1;
 char *VAR_13 = ((void*)0);
 char VAR_14[16];
 int VAR_15;

 VAR_10 = VAR_7->pin;
 if (!VAR_10) {
  FUNC_0((VAR_2,
      "No interrupt pin configured for device %s\n",
      FUNC_9(VAR_7)));
  return 0;
 }

 if (VAR_7->irq_managed && VAR_7->irq > 0)
  return 0;

 VAR_8 = FUNC_2(VAR_7, VAR_10);
 if (!VAR_8) {




  if (VAR_7->class >> 8 == VAR_5 &&
    (VAR_7->class & 0x05) == 0)
   return 0;
 }

 if (VAR_8) {
  if (VAR_8->link)
   VAR_9 = FUNC_4(VAR_8->link,
        VAR_8->index,
        &VAR_11, &VAR_12,
        &VAR_13);
  else
   VAR_9 = VAR_8->index;
 } else
  VAR_9 = -1;

 if (VAR_9 < 0) {




  if (!FUNC_3(VAR_7, VAR_10)) {
   FUNC_8(VAR_8);
   return 0;
  }

  if (FUNC_1(VAR_7))
   FUNC_7(&VAR_7->dev, "PCI INT %c: no GSI\n",
     FUNC_10(VAR_10));

  FUNC_8(VAR_8);
  return 0;
 }

 VAR_15 = FUNC_5(&VAR_7->dev, VAR_9, VAR_11, VAR_12);
 if (VAR_15 < 0) {
  FUNC_7(&VAR_7->dev, "PCI INT %c: failed to register GSI\n",
    FUNC_10(VAR_10));
  FUNC_8(VAR_8);
  return VAR_15;
 }
 VAR_7->irq = VAR_15;
 VAR_7->irq_managed = 1;

 if (VAR_13)
  FUNC_11(VAR_14, sizeof(VAR_14), " -> Link[%s]", VAR_13);
 else
  VAR_14[0] = '\0';

 FUNC_6(&VAR_7->dev, "PCI INT %c%s -> GSI %u (%s, %s) -> IRQ %d\n",
  FUNC_10(VAR_10), VAR_14, VAR_9,
  (VAR_11 == VAR_4) ? "level" : "edge",
  (VAR_12 == VAR_1) ? "low" : "high", VAR_7->irq);

 FUNC_8(VAR_8);
 return 0;
}
