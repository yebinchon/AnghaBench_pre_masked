
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int target_type; size_t value; union acpi_operand_object* object; union acpi_operand_object** where; int class; } ;
struct TYPE_7__ {int * pointer; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int type; int reference_count; } ;
union acpi_operand_object {TYPE_4__ reference; TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ common; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static acpi_status
FUNC_8(union acpi_operand_object *VAR_7,
         union acpi_operand_object *VAR_8,
         struct acpi_walk_state *VAR_9)
{
 acpi_status VAR_10 = VAR_5;
 union acpi_operand_object *VAR_11;
 union acpi_operand_object *VAR_12;
 u8 VAR_13 = 0;
 u32 VAR_14;

 FUNC_2(VAR_6);





 switch (VAR_8->reference.target_type) {
 case 129:
  VAR_11 = *(VAR_8->reference.where);

  if (VAR_7->common.type == VAR_1 &&
      VAR_7->reference.class == VAR_0) {



   FUNC_3(VAR_7);
   VAR_12 = VAR_7;
  } else {


   VAR_10 =
       FUNC_4(VAR_7,
           &VAR_12,
           VAR_9);
   if (FUNC_1(VAR_10)) {
    FUNC_7(VAR_10);
   }
  }

  if (VAR_11) {



   for (VAR_14 = 0; VAR_14 < ((union acpi_operand_object *)
      VAR_8->reference.object)->common.
        reference_count; VAR_14++) {
    FUNC_6(VAR_11);
   }
  }

  *(VAR_8->reference.where) = VAR_12;



  for (VAR_14 = 1; VAR_14 < ((union acpi_operand_object *)
     VAR_8->reference.object)->common.
       reference_count; VAR_14++) {
   FUNC_3(VAR_12);
  }

  break;

 case 131:
  VAR_11 = VAR_8->reference.object;
  if ((VAR_11->common.type != 132) &&
      (VAR_11->common.type != 128)) {
   FUNC_7(VAR_2);
  }





  switch (VAR_7->common.type) {
  case 130:



   VAR_13 = (u8) (VAR_7->integer.value);
   break;

  case 132:
  case 128:



   VAR_13 = VAR_7->buffer.pointer[0];
   break;

  default:



   FUNC_0((VAR_4,
        "Source must be type [Integer/Buffer/String], found [%s]",
        FUNC_5(VAR_7)));
   FUNC_7(VAR_2);
  }



  VAR_11->buffer.pointer[VAR_8->reference.value] = VAR_13;
  break;

 default:
  FUNC_0((VAR_4,
       "Target is not of type [Package/BufferField]"));
  VAR_10 = VAR_3;
  break;
 }

 FUNC_7(VAR_10);
}
