
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct acpi_device_id {char* member_0; int member_1; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 struct pci_dev* FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_device*,struct acpi_device_id const*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_1, u32 VAR_2, void *VAR_3, void **VAR_4)
{
 long *VAR_5 = VAR_3;
 struct pci_dev *VAR_6;
 struct acpi_device *VAR_7;

 static const struct acpi_device_id VAR_8[] = {
  {128, 0},
  {"", 0},
 };
 if (FUNC_0(VAR_1, &VAR_7))
  return VAR_0;

 if (!FUNC_3(VAR_7, VAR_8)) {
  VAR_6 = FUNC_1(VAR_1);
  if (!VAR_6)
   return VAR_0;
  FUNC_4(VAR_6);
  *VAR_5 |= FUNC_2(VAR_1);
 }
 return VAR_0;
}
