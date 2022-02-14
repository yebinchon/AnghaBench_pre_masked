
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* aml; scalar_t__ flags; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct acpi_opcode_info {int flags; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (union acpi_parse_object*) ;
 int FUNC_2 (union acpi_parse_object*) ;
 scalar_t__ VAR_8 ;
 union acpi_parse_object* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 union acpi_parse_object* FUNC_3 (int ) ;
 struct acpi_opcode_info* FUNC_4 (scalar_t__) ;
 int FUNC_5 (union acpi_parse_object*,scalar_t__) ;

union acpi_parse_object *FUNC_6(u16 VAR_12, u8 *VAR_13)
{
 union acpi_parse_object *VAR_14;
 const struct acpi_opcode_info *VAR_15;
 u8 VAR_16 = VAR_2;

 FUNC_0();

 VAR_15 = FUNC_4(VAR_12);



 if (VAR_15->flags & VAR_4) {
  VAR_16 = VAR_1;
 } else if (VAR_15->flags & VAR_6) {
  VAR_16 = VAR_3;
 } else if (VAR_12 == VAR_5) {
  VAR_16 = VAR_0;
 }



 if (VAR_16 == VAR_2) {



  VAR_14 = FUNC_3(VAR_10);
 } else {


  VAR_14 = FUNC_3(VAR_11);
 }



 if (VAR_14) {
  FUNC_5(VAR_14, VAR_12);
  VAR_14->common.aml = VAR_13;
  VAR_14->common.flags = VAR_16;
  FUNC_1(VAR_14);

  if (VAR_12 == VAR_7) {
   VAR_9 = VAR_14;
  }

  if (VAR_8) {
   FUNC_2(VAR_14);
  }
 }

 return (VAR_14);
}
