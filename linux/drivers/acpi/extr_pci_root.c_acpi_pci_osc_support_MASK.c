
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_pci_root {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (struct acpi_pci_root*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static acpi_status FUNC_3(struct acpi_pci_root *VAR_1, u32 VAR_2)
{
 acpi_status VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_2(&VAR_0);
 return VAR_3;
}
