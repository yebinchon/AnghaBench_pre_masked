
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int string; } ;
struct TYPE_6__ {union acpi_parse_object* parent; union acpi_parse_object* next; TYPE_2__ value; int aml_opcode; } ;
struct TYPE_4__ {scalar_t__ aml_opcode; } ;
union acpi_parse_object {TYPE_3__ common; TYPE_1__ named; } ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_parse_object*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (union acpi_parse_object*) ;
 union acpi_parse_object* FUNC_5 (union acpi_parse_object*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_7(union acpi_parse_object *VAR_7)
{
 union acpi_parse_object *VAR_8 = VAR_7;
 union acpi_parse_object *VAR_9 = ((void*)0);
 union acpi_parse_object *VAR_10 = ((void*)0);
 u32 VAR_11 = 0;

 FUNC_1(VAR_5, VAR_7);

 FUNC_0((VAR_0, " root %p\n", VAR_7));



 while (VAR_8) {
  if (VAR_8 != VAR_10) {



   if (FUNC_2
       (VAR_1, VAR_4)) {



    FUNC_3("      %*.s%s %p", (VAR_11 * 4),
            " ",
            FUNC_6(VAR_8->
               common.
               aml_opcode),
            VAR_8);

    if (VAR_8->named.aml_opcode == VAR_2) {
     FUNC_3("  %4.4s",
             VAR_8->common.value.string);
    }
    if (VAR_8->named.aml_opcode == VAR_3) {
     FUNC_3("  %s",
             VAR_8->common.value.string);
    }
    FUNC_3("\n");
   }



   VAR_9 = FUNC_5(VAR_8, 0);
   if (VAR_9) {



    VAR_8 = VAR_9;
    VAR_11++;
    continue;
   }
  }



  VAR_9 = VAR_8->common.next;
  VAR_10 = VAR_8->common.parent;

  FUNC_4(VAR_8);



  if (VAR_8 == VAR_7) {
   VAR_6;
  }

  if (VAR_9) {
   VAR_8 = VAR_9;
  } else {
   VAR_11--;
   VAR_8 = VAR_10;
  }
 }

 VAR_6;
}
