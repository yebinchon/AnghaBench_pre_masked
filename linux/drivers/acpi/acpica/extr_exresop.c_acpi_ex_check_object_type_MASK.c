
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static acpi_status
FUNC_3(acpi_object_type VAR_7,
     acpi_object_type VAR_8, void *VAR_9)
{
 FUNC_1();

 if (VAR_7 == VAR_0) {



  return (VAR_5);
 }

 if (VAR_7 == VAR_2) {





  if ((VAR_8 == VAR_1) &&
      (((union acpi_operand_object *)VAR_9)->common.flags &
       VAR_6)) {
   return (VAR_5);
  }
 }

 if (VAR_7 != VAR_8) {
  FUNC_0((VAR_4,
       "Needed type [%s], found [%s] %p",
       FUNC_2(VAR_7),
       FUNC_2(VAR_8), VAR_9));

  return (VAR_3);
 }

 return (VAR_5);
}
