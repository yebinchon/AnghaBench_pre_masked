
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct acpi_simple_repair_info {scalar_t__ unexpected_btypes; scalar_t__ package_index; int name; scalar_t__ object_converter; } ;
struct TYPE_2__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct acpi_simple_repair_info* VAR_1 ;

__attribute__((used)) static const struct acpi_simple_repair_info *FUNC_1(struct
          acpi_namespace_node
          *VAR_2,
          u32
          VAR_3,
          u32
          VAR_4)
{
 const struct acpi_simple_repair_info *VAR_5;



 VAR_5 = VAR_1;
 while (VAR_5->object_converter) {
  if (FUNC_0(VAR_2->name.ascii, VAR_5->name)) {



   if ((VAR_3 & VAR_5->unexpected_btypes) &&
       (VAR_5->package_index ==
        VAR_0
        || VAR_4 == VAR_5->package_index)) {
    return (VAR_5);
   }

   return (((void*)0));
  }

  VAR_5++;
 }

 return (((void*)0));
}
