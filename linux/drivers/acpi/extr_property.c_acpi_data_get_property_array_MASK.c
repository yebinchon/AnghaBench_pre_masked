
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_1__* elements; } ;
union acpi_object {TYPE_2__ package; } ;
struct acpi_device_data {int dummy; } ;
typedef scalar_t__ acpi_object_type ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_device_data const*,char const*,int ,union acpi_object const**) ;

__attribute__((used)) static int FUNC_1(const struct acpi_device_data *VAR_3,
     const char *VAR_4,
     acpi_object_type VAR_5,
     const union acpi_object **VAR_6)
{
 const union acpi_object *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_5 != VAR_0) {

  for (VAR_9 = 0; VAR_9 < VAR_7->package.count; VAR_9++)
   if (VAR_7->package.elements[VAR_9].type != VAR_5)
    return -VAR_2;
 }
 if (VAR_6)
  *VAR_6 = VAR_7;

 return 0;
}
