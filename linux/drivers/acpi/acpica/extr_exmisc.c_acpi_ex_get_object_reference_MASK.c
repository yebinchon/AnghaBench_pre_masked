
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {union acpi_operand_object* object; int class; } ;
struct TYPE_3__ {int type; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 int FUNC_3 (union acpi_operand_object*) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_9,
        union acpi_operand_object **VAR_10,
        struct acpi_walk_state *VAR_11)
{
 union acpi_operand_object *VAR_12;
 union acpi_operand_object *VAR_13;

 FUNC_2(VAR_8, VAR_9);

 *VAR_10 = ((void*)0);

 switch (FUNC_3(VAR_9)) {
 case 131:

  if (VAR_9->common.type != VAR_2) {
   FUNC_6(VAR_3);
  }




  switch (VAR_9->reference.class) {
  case 128:
  case 130:
  case 129:



   VAR_13 = VAR_9->reference.object;
   break;

  default:

   FUNC_1((VAR_4, "Invalid Reference Class 0x%2.2X",
        VAR_9->reference.class));
   FUNC_6(VAR_3);
  }
  break;

 case 132:



  VAR_13 = VAR_9;
  break;

 default:

  FUNC_1((VAR_4, "Invalid descriptor type 0x%X",
       FUNC_3(VAR_9)));
  FUNC_6(VAR_7);
 }



 VAR_12 =
     FUNC_4(VAR_2);
 if (!VAR_12) {
  FUNC_6(VAR_5);
 }

 VAR_12->reference.class = VAR_1;
 VAR_12->reference.object = VAR_13;
 *VAR_10 = VAR_12;

 FUNC_0((VAR_0,
     "Object %p Type [%s], returning Reference %p\n",
     VAR_9, FUNC_5(VAR_9),
     *VAR_10));

 FUNC_6(VAR_6);
}
