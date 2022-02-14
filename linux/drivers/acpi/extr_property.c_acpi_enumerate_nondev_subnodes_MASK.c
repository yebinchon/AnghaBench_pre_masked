
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ pointer; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ buffer; TYPE_1__ package; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_device_data {int subnodes; } ;
typedef int guid_t ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,union acpi_object const*,int *,struct fwnode_handle*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(acpi_handle VAR_3,
        const union acpi_object *VAR_4,
        struct acpi_device_data *VAR_5,
        struct fwnode_handle *VAR_6)
{
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_4->package.count; VAR_7 += 2) {
  const union acpi_object *VAR_8, *VAR_9;

  VAR_8 = &VAR_4->package.elements[VAR_7];
  VAR_9 = &VAR_4->package.elements[VAR_7 + 1];





  if (VAR_8->type != VAR_0 ||
      VAR_8->buffer.length != 16 ||
      VAR_9->type != VAR_1)
   break;

  if (!FUNC_1((guid_t *)VAR_8->buffer.pointer, &VAR_2))
   continue;

  return FUNC_0(VAR_3, VAR_9, &VAR_5->subnodes,
      VAR_6);
 }

 return 0;
}
