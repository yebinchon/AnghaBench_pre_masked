
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct acpi_device_properties {int list; union acpi_object const* properties; int const* guid; } ;
struct acpi_device_data {int properties; } ;
typedef int guid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct acpi_device_properties* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

struct acpi_device_properties *
FUNC_3(struct acpi_device_data *VAR_1, const guid_t *VAR_2,
      const union acpi_object *VAR_3)
{
 struct acpi_device_properties *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_4->list);
  VAR_4->guid = VAR_2;
  VAR_4->properties = VAR_3;
  FUNC_2(&VAR_4->list, &VAR_1->properties);
 }

 return VAR_4;
}
