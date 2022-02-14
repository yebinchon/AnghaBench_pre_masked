
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_object_info {int * types; } ;
struct TYPE_2__ {int ascii; } ;
struct acpi_namespace_node {size_t type; TYPE_1__ name; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static acpi_status
FUNC_1(acpi_handle VAR_2,
          u32 VAR_3,
          void *VAR_4, void **VAR_5)
{
 struct acpi_object_info *VAR_6 = (struct acpi_object_info *)VAR_4;
 struct acpi_namespace_node *VAR_7 =
     (struct acpi_namespace_node *)VAR_2;

 if (VAR_7->type > VAR_0) {
  FUNC_0("[%4.4s]: Unknown object type %X\n",
          VAR_7->name.ascii, VAR_7->type);
 } else {
  VAR_6->types[VAR_7->type]++;
 }

 return (VAR_1);
}
