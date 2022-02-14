
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_drhd_unit {int list; } ;
struct acpi_dmar_header {int dummy; } ;
struct acpi_dmar_hardware_unit {int dummy; } ;


 struct dmar_drhd_unit* FUNC_0 (struct acpi_dmar_hardware_unit*) ;
 int FUNC_1 (struct dmar_drhd_unit*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct acpi_dmar_header *VAR_0, void *VAR_1)
{
 struct dmar_drhd_unit *VAR_2;

 VAR_2 = FUNC_0((struct acpi_dmar_hardware_unit *)VAR_0);
 if (VAR_2) {
  FUNC_2(&VAR_2->list);
  FUNC_3();
  FUNC_1(VAR_2);
 }

 return 0;
}
