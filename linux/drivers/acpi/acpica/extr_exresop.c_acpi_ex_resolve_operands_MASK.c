
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int const class; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ reference; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct acpi_walk_state {int num_operands; int operands; } ;
struct acpi_opcode_info {scalar_t__ class; scalar_t__ runtime_args; int name; } ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int const FUNC_5 (union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;



 int VAR_4 ;

 int VAR_5 ;




 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int,union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_10 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_11 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_12 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int VAR_18 ;
 union acpi_operand_object* FUNC_13 (struct acpi_namespace_node*) ;
 struct acpi_opcode_info* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (union acpi_operand_object*) ;
 int FUNC_17 (union acpi_operand_object*) ;
 int FUNC_18 (union acpi_operand_object*) ;
 int FUNC_19 (union acpi_operand_object*) ;
 int FUNC_20 (int) ;
 int VAR_19 ;
 int FUNC_21 (int ) ;

acpi_status
FUNC_22(u16 VAR_20,
    union acpi_operand_object **VAR_21,
    struct acpi_walk_state *VAR_22)
{
 union acpi_operand_object *VAR_23;
 acpi_status VAR_24 = VAR_12;
 u8 VAR_25;
 u32 VAR_26;
 const struct acpi_opcode_info *VAR_27;
 u32 VAR_28;
 acpi_object_type VAR_29;
 u16 VAR_30 = 0;

 FUNC_4(VAR_19, VAR_20);

 VAR_27 = FUNC_14(VAR_20);
 if (VAR_27->class == VAR_14) {
  FUNC_21(VAR_7);
 }

 VAR_26 = VAR_27->runtime_args;
 if (VAR_26 == VAR_17) {
  FUNC_2((VAR_11, "Unknown AML opcode 0x%X", VAR_20));

  FUNC_21(VAR_8);
 }

 FUNC_0((VAR_0,
     "Opcode %X [%s] RequiredOperandTypes=%8.8X\n",
     VAR_20, VAR_27->name, VAR_26));
 while (FUNC_6(VAR_26)) {
  if (!VAR_21 || !*VAR_21) {
   FUNC_2((VAR_11, "Null stack entry at %p",
        VAR_21));

   FUNC_21(VAR_8);
  }



  VAR_23 = *VAR_21;



  switch (FUNC_5(VAR_23)) {
  case 170:



   VAR_25 =
       ((struct acpi_namespace_node *)VAR_23)->type;






   if (VAR_25 == VAR_5) {
    VAR_23 = FUNC_13((struct
         acpi_namespace_node
         *)
               VAR_23);
    *VAR_21 = VAR_23;
    VAR_25 =
        ((struct acpi_namespace_node *)VAR_23)->
        type;
   }
   break;

  case 169:



   VAR_25 = VAR_23->common.type;



   if (!FUNC_20(VAR_25)) {
    FUNC_2((VAR_11,
         "Bad operand object type [0x%X]",
         VAR_25));

    FUNC_21(VAR_9);
   }

   if (VAR_25 == (u8) 155) {



    switch (VAR_23->reference.class) {
    case 167:

     VAR_30 = VAR_15;



    case 168:
    case 165:
    case 166:
    case 163:
    case 162:
    case 164:

     FUNC_0((VAR_0,
         "Operand is a Reference, Class [%s] %2.2X\n",
         FUNC_18
         (VAR_23),
         VAR_23->reference.
         class));
     break;

    default:

     FUNC_2((VAR_11,
          "Unknown Reference Class 0x%2.2X in %p",
          VAR_23->reference.class,
          VAR_23));

     FUNC_21(VAR_9);
    }
   }
   break;

  default:



   FUNC_2((VAR_11, "Invalid descriptor %p [%s]",
        VAR_23,
        FUNC_16(VAR_23)));

   FUNC_21(VAR_9);
  }



  VAR_28 = FUNC_6(VAR_26);
  FUNC_7(VAR_26);





  switch (VAR_28) {
  case 133:

   if ((FUNC_5(VAR_23) ==
        169) &&
       (VAR_23->common.type == 151)) {




    goto next_operand;
   }







  case 134:
  case 138:
  case 136:
  case 142:
  case 128:
  case 140:
  case 131:
  case 130:





   if (FUNC_5(VAR_23) ==
       170) {
    goto next_operand;
   }

   VAR_24 =
       FUNC_8(155,
            VAR_25, VAR_23);
   if (FUNC_3(VAR_24)) {
    FUNC_21(VAR_24);
   }
   goto next_operand;

  case 144:






   if ((VAR_20 == VAR_16) &&
       ((*VAR_21)->common.type ==
        155)
       && ((*VAR_21)->reference.class ==
    166)) {
    goto next_operand;
   }
   break;

  default:



   break;
  }




  VAR_24 = FUNC_12(VAR_21, VAR_22);
  if (FUNC_3(VAR_24)) {
   FUNC_21(VAR_24);
  }



  VAR_23 = *VAR_21;




  switch (VAR_28) {




  case 137:



   VAR_29 = VAR_6;
   break;

  case 141:



   VAR_29 = VAR_4;
   break;

  case 135:



   VAR_29 = 153;
   break;

  case 150:



   VAR_29 = VAR_3;
   break;

  case 143:



   VAR_29 = 155;
   break;




  case 139:







   VAR_24 = FUNC_10(VAR_23, VAR_21,
           VAR_1);
   if (FUNC_3(VAR_24)) {
    if (VAR_24 == VAR_13) {
     FUNC_2((VAR_11,
          "Needed [Integer/String/Buffer], found [%s] %p",
          FUNC_17
          (VAR_23), VAR_23));

     FUNC_21(VAR_9);
    }

    FUNC_21(VAR_24);
   }

   if (VAR_23 != *VAR_21) {
    FUNC_19(VAR_23);
   }
   goto next_operand;

  case 149:





   VAR_24 = FUNC_9(VAR_23, VAR_21);
   if (FUNC_3(VAR_24)) {
    if (VAR_24 == VAR_13) {
     FUNC_2((VAR_11,
          "Needed [Integer/String/Buffer], found [%s] %p",
          FUNC_17
          (VAR_23), VAR_23));

     FUNC_21(VAR_9);
    }

    FUNC_21(VAR_24);
   }

   if (VAR_23 != *VAR_21) {
    FUNC_19(VAR_23);
   }
   goto next_operand;

  case 129:





   VAR_24 =
       FUNC_11(VAR_23, VAR_21,
            VAR_2);
   if (FUNC_3(VAR_24)) {
    if (VAR_24 == VAR_13) {
     FUNC_2((VAR_11,
          "Needed [Integer/String/Buffer], found [%s] %p",
          FUNC_17
          (VAR_23), VAR_23));

     FUNC_21(VAR_9);
    }

    FUNC_21(VAR_24);
   }

   if (VAR_23 != *VAR_21) {
    FUNC_19(VAR_23);
   }
   goto next_operand;

  case 146:



   switch (VAR_23->common.type) {
   case 158:
   case 151:
   case 161:


    break;

   default:
    FUNC_2((VAR_11,
         "Needed [Integer/String/Buffer], found [%s] %p",
         FUNC_17
         (VAR_23), VAR_23));

    FUNC_21(VAR_9);
   }
   goto next_operand;

  case 148:



   switch (VAR_23->common.type) {
   case 151:
   case 161:


    break;

   case 158:



    VAR_24 =
        FUNC_9(VAR_23,
             VAR_21);
    if (FUNC_3(VAR_24)) {
     FUNC_21(VAR_24);
    }

    if (VAR_23 != *VAR_21) {
     FUNC_19(VAR_23);
    }
    break;

   default:
    FUNC_2((VAR_11,
         "Needed [Integer/String/Buffer], found [%s] %p",
         FUNC_17
         (VAR_23), VAR_23));

    FUNC_21(VAR_9);
   }
   goto next_operand;

  case 145:







   switch (VAR_23->common.type) {
   case 153:
   case 151:
   case 161:
   case 155:


    break;

   default:

    FUNC_2((VAR_11,
         "Needed [Buffer/String/Package/Reference], found [%s] %p",
         FUNC_17
         (VAR_23), VAR_23));

    FUNC_21(VAR_9);
   }
   goto next_operand;

  case 147:



   switch (VAR_23->common.type) {
   case 153:
   case 151:
   case 161:


    break;

   default:

    FUNC_2((VAR_11,
         "Needed [Buffer/String/Package], found [%s] %p",
         FUNC_17
         (VAR_23), VAR_23));

    FUNC_21(VAR_9);
   }
   goto next_operand;

  case 132:





   switch (VAR_23->common.type) {
   case 161:
   case 152:


    break;

   default:

    FUNC_2((VAR_11,
         "Needed [Region/Buffer], found [%s] %p",
         FUNC_17
         (VAR_23), VAR_23));

    FUNC_21(VAR_9);
   }
   goto next_operand;

  case 144:



   switch (VAR_23->common.type) {
   case 158:
   case 153:
   case 151:
   case 161:
   case 160:
   case 155:
   case 154:
   case 157:
   case 156:
   case 159:


    break;

   default:

    if (VAR_18) {





     break;
    }

    if (VAR_30 == VAR_15) {



     break;
    }

    FUNC_2((VAR_11,
         "Needed Integer/Buffer/String/Package/Ref/Ddb]"
         ", found [%s] %p",
         FUNC_17
         (VAR_23), VAR_23));

    FUNC_21(VAR_9);
   }
   goto next_operand;

  default:



   FUNC_2((VAR_11,
        "Internal - Unknown ARGI (required operand) type 0x%X",
        VAR_28));

   FUNC_21(VAR_10);
  }





  VAR_24 =
      FUNC_8(VAR_29,
           (*VAR_21)->common.type,
           *VAR_21);
  if (FUNC_3(VAR_24)) {
   FUNC_21(VAR_24);
  }

next_operand:




  if (FUNC_6(VAR_26)) {
   VAR_21--;
  }
 }

 FUNC_1(VAR_22->operands,
      FUNC_15(VAR_20),
      VAR_22->num_operands);

 FUNC_21(VAR_24);
}
