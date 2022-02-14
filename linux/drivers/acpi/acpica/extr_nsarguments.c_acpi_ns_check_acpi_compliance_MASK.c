
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int argument_list; int expected_btypes; } ;
union acpi_predefined_info {TYPE_3__ info; } ;
typedef scalar_t__ u32 ;
struct acpi_namespace_node {int flags; scalar_t__ type; TYPE_2__* object; } ;
struct TYPE_4__ {scalar_t__ param_count; } ;
struct TYPE_5__ {TYPE_1__ method; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(char *VAR_5,
         struct acpi_namespace_node *VAR_6,
         const union acpi_predefined_info *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 if (!VAR_7 || (VAR_6->flags & VAR_3)) {
  return;
 }



 VAR_9 =
     FUNC_1(VAR_7->info.argument_list);





 if (VAR_6->type != VAR_0) {
  if (VAR_9 > 0) {



   FUNC_0((VAR_2, VAR_5,
          VAR_1,
          "Object (%s) must be a control method with %u arguments",
          FUNC_2(VAR_6->
           type),
          VAR_9));
  } else if (!VAR_9
      && !VAR_7->info.expected_btypes) {



   FUNC_0((VAR_2, VAR_5,
          VAR_1,
          "Object (%s) must be a control method "
          "with no arguments and no return value",
          FUNC_2(VAR_6->
           type)));
  }

  return;
 }
 VAR_8 = VAR_6->object->method.param_count;

 if (VAR_8 < VAR_9) {
  FUNC_0((VAR_2, VAR_5, VAR_1,
         "Insufficient arguments - "
         "ASL declared %u, ACPI requires %u",
         VAR_8,
         VAR_9));
 } else if ((VAR_8 > VAR_9)
     && !(VAR_7->info.
   argument_list & VAR_4)) {
  FUNC_0((VAR_2, VAR_5, VAR_1,
         "Excess arguments - "
         "ASL declared %u, ACPI requires %u",
         VAR_8,
         VAR_9));
 }
}
