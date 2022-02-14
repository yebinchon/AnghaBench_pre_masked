
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_repair_info {int name; scalar_t__ repair_function; } ;
struct TYPE_2__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct acpi_repair_info* VAR_0 ;

__attribute__((used)) static const struct acpi_repair_info *FUNC_1(struct
           acpi_namespace_node
           *VAR_1)
{
 const struct acpi_repair_info *VAR_2;



 VAR_2 = VAR_0;
 while (VAR_2->repair_function) {
  if (FUNC_0(VAR_1->name.ascii, VAR_2->name)) {
   return (VAR_2);
  }

  VAR_2++;
 }

 return (((void*)0));
}
