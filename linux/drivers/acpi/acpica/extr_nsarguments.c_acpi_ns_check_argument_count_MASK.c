
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int argument_list; } ;
union acpi_predefined_info {TYPE_3__ info; } ;
typedef scalar_t__ u32 ;
struct acpi_namespace_node {int flags; scalar_t__ type; TYPE_2__* object; } ;
struct TYPE_4__ {scalar_t__ param_count; } ;
struct TYPE_5__ {TYPE_1__ method; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(char *VAR_5,
        struct acpi_namespace_node *VAR_6,
        u32 VAR_7,
        const union acpi_predefined_info *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 if (VAR_6->flags & VAR_3) {
  return;
 }

 if (!VAR_8) {




  if (VAR_6->type != VAR_0) {
   if (VAR_7) {
    FUNC_0((VAR_2, VAR_5,
            VAR_1,
            "%u arguments were passed to a non-method ACPI object (%s)",
            VAR_7,
            FUNC_3
            (VAR_6->type)));
   }

   return;
  }
  VAR_9 = VAR_6->object->method.param_count;

  if (VAR_7 < VAR_9) {
   FUNC_1((VAR_2, VAR_5,
           VAR_1,
           "Insufficient arguments - "
           "Caller passed %u, method requires %u",
           VAR_7,
           VAR_9));
  } else if (VAR_7 > VAR_9) {
   FUNC_0((VAR_2, VAR_5,
           VAR_1,
           "Excess arguments - "
           "Caller passed %u, method requires %u",
           VAR_7,
           VAR_9));
  }

  return;
 }
 VAR_10 =
     FUNC_2(VAR_8->info.argument_list);

 if (VAR_7 < VAR_10) {
  FUNC_1((VAR_2, VAR_5, VAR_1,
          "Insufficient arguments - "
          "Caller passed %u, ACPI requires %u",
          VAR_7, VAR_10));
 } else if ((VAR_7 > VAR_10) &&
     !(VAR_8->info.argument_list & VAR_4)) {
  FUNC_0((VAR_2, VAR_5, VAR_1,
          "Excess arguments - "
          "Caller passed %u, ACPI requires %u",
          VAR_7, VAR_10));
 }
}
