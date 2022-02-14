
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct device {int fwnode; } ;
struct acpi_iort_root_complex {scalar_t__ pci_segment_number; } ;
struct acpi_iort_node {scalar_t__ type; scalar_t__ node_data; } ;
struct acpi_iort_named_component {int device_name; } ;
struct acpi_device {int handle; } ;
struct acpi_buffer {int pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct acpi_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (int ,int ) ;
 struct acpi_device* FUNC_6 (int ) ;
 struct pci_bus* FUNC_7 (struct device*) ;

__attribute__((used)) static acpi_status FUNC_8(struct acpi_iort_node *VAR_6,
         void *VAR_7)
{
 struct device *VAR_8 = VAR_7;
 acpi_status VAR_9 = VAR_4;

 if (VAR_6->type == VAR_2) {
  struct acpi_buffer VAR_10 = { VAR_0, ((void*)0) };
  struct acpi_device *VAR_11 = FUNC_6(VAR_8->fwnode);
  struct acpi_iort_named_component *VAR_12;

  if (!VAR_11)
   goto out;

  VAR_9 = FUNC_1(VAR_11->handle, VAR_1, &VAR_10);
  if (FUNC_0(VAR_9)) {
   FUNC_3(VAR_8, "Can't get device full path name\n");
   goto out;
  }

  VAR_12 = (struct acpi_iort_named_component *)VAR_6->node_data;
  VAR_9 = !FUNC_5(VAR_12->device_name, VAR_10.pointer) ?
       VAR_5 : VAR_4;
  FUNC_2(VAR_10.pointer);
 } else if (VAR_6->type == VAR_3) {
  struct acpi_iort_root_complex *VAR_13;
  struct pci_bus *VAR_14;

  VAR_14 = FUNC_7(VAR_8);
  VAR_13 = (struct acpi_iort_root_complex *)VAR_6->node_data;






  VAR_9 = VAR_13->pci_segment_number == FUNC_4(VAR_14) ?
       VAR_5 : VAR_4;
 }
out:
 return VAR_9;
}
