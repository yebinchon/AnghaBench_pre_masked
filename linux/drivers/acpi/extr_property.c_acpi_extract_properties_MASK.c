
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ pointer; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ buffer; TYPE_1__ package; } ;
struct acpi_device_data {int properties; } ;
typedef int guid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct acpi_device_data*,int const*,union acpi_object const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (union acpi_object const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(const union acpi_object *VAR_2,
        struct acpi_device_data *VAR_3)
{
 int VAR_4;

 if (VAR_2->package.count % 2)
  return 0;


 for (VAR_4 = 0; VAR_4 < VAR_2->package.count; VAR_4 += 2) {
  const union acpi_object *VAR_5, *VAR_6;

  VAR_5 = &VAR_2->package.elements[VAR_4];
  VAR_6 = &VAR_2->package.elements[VAR_4 + 1];





  if (VAR_5->type != VAR_0 ||
      VAR_5->buffer.length != 16 ||
      VAR_6->type != VAR_1)
   break;

  if (!FUNC_1((guid_t *)VAR_5->buffer.pointer))
   continue;





  if (!FUNC_2(VAR_6))
   continue;

  FUNC_0(VAR_3, (const guid_t *)VAR_5->buffer.pointer,
        VAR_6);
 }

 return !FUNC_3(&VAR_3->properties);
}
