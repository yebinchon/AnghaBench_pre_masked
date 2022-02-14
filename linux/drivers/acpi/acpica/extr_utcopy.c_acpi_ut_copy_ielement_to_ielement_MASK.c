
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flags; int type; } ;
struct TYPE_8__ {int count; } ;
union acpi_operand_object {TYPE_4__ common; TYPE_3__ package; } ;
struct TYPE_10__ {size_t index; union acpi_operand_object* this_target_obj; TYPE_2__* dest_object; } ;
union acpi_generic_state {TYPE_5__ pkg; } ;
typedef int u8 ;
typedef size_t u32 ;
typedef int acpi_status ;
struct TYPE_6__ {int * elements; } ;
struct TYPE_7__ {TYPE_1__ package; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (union acpi_operand_object*,union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_3 (int ) ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;

__attribute__((used)) static acpi_status
FUNC_6(u8 VAR_3,
      union acpi_operand_object *VAR_4,
      union acpi_generic_state *VAR_5,
      void *VAR_6)
{
 acpi_status VAR_7 = VAR_2;
 u32 VAR_8;
 union acpi_operand_object **VAR_9;
 union acpi_operand_object *VAR_10;

 FUNC_1();

 VAR_8 = VAR_5->pkg.index;
 VAR_9 = (union acpi_operand_object **)
     &VAR_5->pkg.dest_object->package.elements[VAR_8];

 switch (VAR_3) {
 case 128:



  if (VAR_4) {



   VAR_10 =
       FUNC_3(VAR_4->
          common.type);
   if (!VAR_10) {
    return (VAR_1);
   }

   VAR_7 =
       FUNC_2(VAR_4,
             VAR_10);
   if (FUNC_0(VAR_7)) {
    goto error_exit;
   }

   *VAR_9 = VAR_10;
  } else {


   *VAR_9 = ((void*)0);
  }
  break;

 case 129:




  VAR_10 =
      FUNC_4(VAR_4->package.count);
  if (!VAR_10) {
   return (VAR_1);
  }

  VAR_10->common.flags = VAR_4->common.flags;



  VAR_5->pkg.this_target_obj = VAR_10;



  *VAR_9 = VAR_10;
  break;

 default:

  return (VAR_0);
 }

 return (VAR_7);

error_exit:
 FUNC_5(VAR_10);
 return (VAR_7);
}
