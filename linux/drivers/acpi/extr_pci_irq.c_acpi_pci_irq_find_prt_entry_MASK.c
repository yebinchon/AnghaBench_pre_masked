
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct acpi_prt_entry {int dummy; } ;
struct acpi_pci_routing_table {scalar_t__ length; } ;
struct acpi_buffer {struct acpi_pci_routing_table* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;
struct TYPE_2__ {scalar_t__ bridge; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct acpi_buffer*) ;
 int FUNC_3 (int *,struct pci_dev*,int,struct acpi_pci_routing_table*,struct acpi_prt_entry**) ;
 int FUNC_4 (struct acpi_pci_routing_table*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2,
     int VAR_3, struct acpi_prt_entry **VAR_4)
{
 acpi_status VAR_5;
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 struct acpi_pci_routing_table *VAR_7;
 acpi_handle VAR_8 = ((void*)0);

 if (VAR_2->bus->bridge)
  VAR_8 = FUNC_1(VAR_2->bus->bridge);

 if (!VAR_8)
  return -VAR_1;


 VAR_5 = FUNC_2(VAR_8, &VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_6.pointer);
  return -VAR_1;
 }

 VAR_7 = VAR_6.pointer;
 while (VAR_7 && (VAR_7->length > 0)) {
  if (!FUNC_3(VAR_8, VAR_2, VAR_3,
       VAR_7, VAR_4))
   break;
  VAR_7 = (struct acpi_pci_routing_table *)
      ((unsigned long)VAR_7 + VAR_7->length);
 }

 FUNC_4(VAR_6.pointer);
 return 0;
}
