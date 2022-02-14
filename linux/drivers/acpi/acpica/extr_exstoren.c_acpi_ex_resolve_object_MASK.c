
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int class; } ;
struct TYPE_3__ {int const type; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
struct acpi_walk_state {int opcode; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;







 int const VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object **VAR_8,
         acpi_object_type VAR_9,
         struct acpi_walk_state *VAR_10)
{
 union acpi_operand_object *VAR_11 = *VAR_8;
 acpi_status VAR_12 = VAR_5;

 FUNC_2(VAR_7);



 switch (VAR_9) {
 case 136:
 case 130:
 case 133:
 case 132:




 case 135:
 case 128:
 case 137:





  if (VAR_11->common.type == VAR_1) {



   VAR_12 =
       FUNC_3(VAR_8,
           VAR_10);
   if (FUNC_1(VAR_12)) {
    break;
   }
  }



  if (VAR_10->opcode == VAR_6) {
   break;
  }



  if ((VAR_11->common.type != 135) &&
      (VAR_11->common.type != 137) &&
      (VAR_11->common.type != 128) &&
      !((VAR_11->common.type == VAR_1) &&
        (VAR_11->reference.class == VAR_0))) {



   FUNC_0((VAR_4,
        "Cannot assign type [%s] to [%s] (must be type Int/Str/Buf)",
        FUNC_4(VAR_11),
        FUNC_5(VAR_9)));

   VAR_12 = VAR_3;
  }
  break;

 case 134:
 case 131:




  FUNC_0((VAR_4, "Store into an unresolved Alias object"));
  VAR_12 = VAR_2;
  break;

 case 129:
 default:




  break;
 }

 FUNC_6(VAR_12);
}
