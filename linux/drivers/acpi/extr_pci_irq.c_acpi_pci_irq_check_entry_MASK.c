
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* bus; } ;
struct TYPE_4__ {int segment; int bus; int device; } ;
struct acpi_prt_entry {int pin; int index; TYPE_1__ id; int link; } ;
struct acpi_pci_routing_table {int address; int pin; scalar_t__* source; int source_index; } ;
typedef int acpi_handle ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int *) ;
 int FUNC_3 (struct acpi_prt_entry*,struct acpi_pci_routing_table*) ;
 struct acpi_prt_entry* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(acpi_handle VAR_4, struct pci_dev *VAR_5,
      int VAR_6, struct acpi_pci_routing_table *VAR_7,
      struct acpi_prt_entry **VAR_8)
{
 int VAR_9 = FUNC_6(VAR_5->bus);
 int VAR_10 = VAR_5->bus->number;
 int VAR_11 = FUNC_5(VAR_5->bus) ? 0 : FUNC_1(VAR_5->devfn);
 struct acpi_prt_entry *VAR_12;

 if (((VAR_7->address >> 16) & 0xffff) != VAR_11 ||
     VAR_7->pin + 1 != VAR_6)
  return -VAR_1;

 VAR_12 = FUNC_4(sizeof(struct acpi_prt_entry), VAR_3);
 if (!VAR_12)
  return -VAR_2;






 VAR_12->id.segment = VAR_9;
 VAR_12->id.bus = VAR_10;
 VAR_12->id.device = (VAR_7->address >> 16) & 0xFFFF;
 VAR_12->pin = VAR_7->pin + 1;

 FUNC_3(VAR_12, VAR_7);

 VAR_12->index = VAR_7->source_index;
 if (VAR_7->source[0])
  FUNC_2(VAR_4, VAR_7->source, &VAR_12->link);
 FUNC_0((VAR_0,
         "      %04x:%02x:%02x[%c] -> %s[%d]\n",
         VAR_12->id.segment, VAR_12->id.bus,
         VAR_12->id.device, FUNC_7(VAR_12->pin),
         VAR_7->source, VAR_12->index));

 *VAR_8 = VAR_12;

 return 0;
}
