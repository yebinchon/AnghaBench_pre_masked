
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; union acpi_operand_object* next; union acpi_operand_object* handler; int space_id; } ;
struct TYPE_5__ {int context; int (* setup ) (union acpi_operand_object*,int ,int ,void**) ;union acpi_operand_object* region_list; } ;
struct TYPE_4__ {void* region_context; } ;
union acpi_operand_object {TYPE_3__ region; TYPE_2__ address_space; TYPE_1__ extra; } ;
typedef scalar_t__ u8 ;
typedef int acpi_status ;
typedef int (* acpi_adr_space_setup ) (union acpi_operand_object*,int ,int ,void**) ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (union acpi_operand_object*,int ) ;
 union acpi_operand_object* FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_11(union acpi_operand_object *VAR_8,
        u8 VAR_9)
{
 union acpi_operand_object *VAR_10;
 union acpi_operand_object *VAR_11;
 union acpi_operand_object *VAR_12;
 union acpi_operand_object **VAR_13;
 acpi_adr_space_setup VAR_14;
 void **VAR_15;
 union acpi_operand_object *VAR_16;
 acpi_status VAR_17;

 FUNC_4(VAR_6);

 VAR_16 = FUNC_6(VAR_8);
 if (!VAR_16) {
  VAR_7;
 }
 VAR_15 = &VAR_16->extra.region_context;



 VAR_10 = VAR_8->region.handler;
 if (!VAR_10) {



  VAR_7;
 }



 VAR_11 = VAR_10->address_space.region_list;
 VAR_12 = VAR_11;
 VAR_13 = &VAR_10->address_space.region_list;

 while (VAR_11) {



  if (VAR_11 == VAR_8) {
   FUNC_0((VAR_0,
       "Removing Region %p from address handler %p\n",
       VAR_8, VAR_10));



   *VAR_13 = VAR_11->region.next;
   VAR_11->region.next = ((void*)0);

   if (VAR_9) {
    VAR_17 =
        FUNC_9(VAR_1);
    if (FUNC_3(VAR_17)) {
     VAR_7;
    }
   }



   VAR_17 =
       FUNC_5(VAR_8,
             VAR_3);
   if (FUNC_3(VAR_17)) {
    FUNC_2((VAR_4, VAR_17,
      "from region _REG, [%s]",
      FUNC_8
      (VAR_8->region.space_id)));
   }

   if (VAR_9) {
    VAR_17 =
        FUNC_7(VAR_1);
    if (FUNC_3(VAR_17)) {
     VAR_7;
    }
   }





   if (VAR_8->region.flags & VAR_5) {
    VAR_14 = VAR_10->address_space.setup;
    VAR_17 =
        VAR_14(VAR_8,
       VAR_2,
       VAR_10->address_space.
       context, VAR_15);





    if (VAR_15) {
     *VAR_15 = ((void*)0);
    }



    if (FUNC_3(VAR_17)) {
     FUNC_2((VAR_4, VAR_17,
       "from region handler - deactivate, [%s]",
       FUNC_8
       (VAR_8->region.
        space_id)));
    }

    VAR_8->region.flags &=
        ~(VAR_5);
   }
   VAR_8->region.handler = ((void*)0);
   FUNC_10(VAR_10);

   VAR_7;
  }



  VAR_13 = &VAR_11->region.next;
  VAR_11 = VAR_11->region.next;



  if (VAR_11 == VAR_12) {
   FUNC_1((VAR_4,
        "Circular handler list in region object %p",
        VAR_8));
   VAR_7;
  }
 }



 FUNC_0((VAR_0,
     "Cannot remove region %p from address handler %p\n",
     VAR_8, VAR_10));

 VAR_7;
}
