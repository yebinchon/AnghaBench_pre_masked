
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct acpi_device {int data; } ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,union acpi_object const**) ;

int FUNC_1(const struct acpi_device *VAR_1, const char *VAR_2,
     acpi_object_type VAR_3, const union acpi_object **VAR_4)
{
 return VAR_1 ? FUNC_0(&VAR_1->data, VAR_2, VAR_3, VAR_4) : -VAR_0;
}
