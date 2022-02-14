
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acpi_pci_id {int function; int device; int bus; int segment; } ;
struct acpi_pci_device {struct acpi_pci_device* next; int device; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_pci_id*,int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static acpi_status
FUNC_4(struct acpi_pci_id *VAR_4,
    struct acpi_pci_device *VAR_5)
{
 acpi_status VAR_6 = VAR_1;
 struct acpi_pci_device *VAR_7;
 u16 VAR_8;
 u8 VAR_9 = VAR_2;

 FUNC_2(VAR_3);

 FUNC_0((VAR_0,
     "Input PciId:  Seg %4.4X Bus %4.4X Dev %4.4X Func %4.4X\n",
     VAR_4->segment, VAR_4->bus, VAR_4->device,
     VAR_4->function));

 VAR_8 = VAR_4->bus;
 VAR_7 = VAR_5;
 while (VAR_7) {
  VAR_6 = FUNC_3(VAR_4, VAR_7->device,
           &VAR_8, &VAR_9);
  if (FUNC_1(VAR_6)) {
   return (VAR_6);
  }

  VAR_7 = VAR_7->next;
 }

 FUNC_0((VAR_0,
     "Output PciId: Seg %4.4X Bus %4.4X Dev %4.4X Func %4.4X "
     "Status %X BusNumber %X IsBridge %X\n",
     VAR_4->segment, VAR_4->bus, VAR_4->device,
     VAR_4->function, VAR_6, VAR_8, VAR_9));

 return (VAR_1);
}
