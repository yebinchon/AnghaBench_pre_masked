
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; union acpi_parse_object* arg; } ;
struct TYPE_6__ {TYPE_2__ value; int aml_opcode; union acpi_parse_object* next; } ;
struct TYPE_4__ {int data; } ;
union acpi_parse_object {TYPE_3__ common; TYPE_1__ named; } ;
typedef int u32 ;
struct acpi_walk_state {int arg_count; } ;
struct acpi_parse_state {int pkg_end; int aml; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_parse_state*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 union acpi_parse_object* FUNC_6 (int ,int ) ;
 int FUNC_7 (union acpi_parse_object*) ;
 union acpi_parse_object* FUNC_8 (struct acpi_parse_state*) ;
 int FUNC_9 (struct acpi_walk_state*,struct acpi_parse_state*,union acpi_parse_object*,int ) ;
 int FUNC_10 (struct acpi_parse_state*) ;
 int FUNC_11 (struct acpi_parse_state*,int,union acpi_parse_object*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct acpi_parse_state*) ;
 int FUNC_14 (int) ;
 int VAR_12 ;
 int FUNC_15 (int ) ;

acpi_status
FUNC_16(struct acpi_walk_state *VAR_13,
       struct acpi_parse_state *VAR_14,
       u32 VAR_15, union acpi_parse_object **VAR_16)
{
 union acpi_parse_object *VAR_17 = ((void*)0);
 union acpi_parse_object *VAR_18 = ((void*)0);
 union acpi_parse_object *VAR_19;
 u32 VAR_20;
 acpi_status VAR_21 = VAR_7;

 FUNC_2(VAR_12, VAR_14);

 FUNC_0((VAR_0,
     "Expected argument type ARGP: %s (%2.2X)\n",
     FUNC_14(VAR_15), VAR_15));

 switch (VAR_15) {
 case 145:
 case 128:
 case 140:
 case 143:
 case 138:
 case 137:



  VAR_17 = FUNC_6(VAR_8, VAR_14->aml);
  if (!VAR_17) {
   FUNC_15(VAR_6);
  }

  FUNC_11(VAR_14, VAR_15, VAR_17);
  break;

 case 134:



  VAR_14->pkg_end =
      FUNC_10(VAR_14);
  break;

 case 139:

  if (VAR_14->aml < VAR_14->pkg_end) {



   while (VAR_14->aml < VAR_14->pkg_end) {
    VAR_19 = FUNC_8(VAR_14);
    if (!VAR_19) {
     FUNC_15(VAR_6);
    }

    if (VAR_18) {
     VAR_18->common.next = VAR_19;
    } else {
     VAR_17 = VAR_19;
    }
    VAR_18 = VAR_19;
   }



   VAR_14->aml = VAR_14->pkg_end;
  }
  break;

 case 144:

  if (VAR_14->aml < VAR_14->pkg_end) {



   VAR_17 = FUNC_6(VAR_9,
            VAR_14->aml);
   if (!VAR_17) {
    FUNC_15(VAR_6);
   }



   VAR_17->common.value.size = (u32)
       FUNC_5(VAR_14->pkg_end,
       VAR_14->aml);
   VAR_17->named.data = VAR_14->aml;



   VAR_14->aml = VAR_14->pkg_end;
  }
  break;

 case 133:
 case 136:

  FUNC_0((VAR_0,
      "**** SimpleName/NameOrRef: %s (%2.2X)\n",
      FUNC_14(VAR_15),
      VAR_15));

  VAR_20 = FUNC_13(VAR_14);
  if (VAR_20 == 0 ||
      FUNC_12(VAR_20) ||
      FUNC_4(VAR_20) ||
      FUNC_3(VAR_20)) {



   VAR_17 =
       FUNC_6(VAR_11,
          VAR_14->aml);
   if (!VAR_17) {
    FUNC_15(VAR_6);
   }

   VAR_21 =
       FUNC_9(VAR_13, VAR_14,
            VAR_17,
            VAR_1);
  } else {


   VAR_13->arg_count = 1;
  }
  break;

 case 131:
 case 132:

  FUNC_0((VAR_0,
      "**** Target/Supername: %s (%2.2X)\n",
      FUNC_14(VAR_15),
      VAR_15));

  VAR_20 = FUNC_13(VAR_14);
  if (VAR_20 == 0 ||
      FUNC_12(VAR_20) ||
      FUNC_4(VAR_20) ||
      FUNC_3(VAR_20)) {



   VAR_17 =
       FUNC_6(VAR_11,
          VAR_14->aml);
   if (!VAR_17) {
    FUNC_15(VAR_6);
   }

   VAR_21 =
       FUNC_9(VAR_13, VAR_14,
            VAR_17,
            VAR_2);

   if (VAR_17->common.aml_opcode == VAR_10) {



    FUNC_7(VAR_17->common.value.arg);
    FUNC_7(VAR_17);
    VAR_17 = ((void*)0);
    VAR_13->arg_count = 1;
   }
  } else {


   VAR_13->arg_count = 1;
  }
  break;

 case 142:
 case 130:

  FUNC_0((VAR_0,
      "**** TermArg/DataObj: %s (%2.2X)\n",
      FUNC_14(VAR_15),
      VAR_15));



  VAR_13->arg_count = 1;
  break;

 case 141:
 case 129:
 case 135:

  if (VAR_14->aml < VAR_14->pkg_end) {



   VAR_13->arg_count = VAR_3;
  }
  break;

 default:

  FUNC_1((VAR_5, "Invalid ArgType: 0x%X", VAR_15));
  VAR_21 = VAR_4;
  break;
 }

 *VAR_16 = VAR_17;
 FUNC_15(VAR_21);
}
