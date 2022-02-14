
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_drhd_unit {int dummy; } ;
struct acpi_dmar_header {int dummy; } ;
struct acpi_dmar_hardware_unit {int dummy; } ;


 int VAR_0 ;
 struct dmar_drhd_unit* FUNC_0 (struct acpi_dmar_hardware_unit*) ;
 int FUNC_1 (struct dmar_drhd_unit*,int) ;
 int FUNC_2 (struct dmar_drhd_unit*,int) ;

__attribute__((used)) static int FUNC_3(struct acpi_dmar_header *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct dmar_drhd_unit *VAR_4;

 VAR_4 = FUNC_0((struct acpi_dmar_hardware_unit *)VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_4, 1);
 if (VAR_3 == 0)
  VAR_3 = FUNC_1(VAR_4, 1);

 return VAR_3;
}
