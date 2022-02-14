
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ class; int node; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_4__ reference; TYPE_3__ string; TYPE_2__ common; TYPE_1__ package; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct acpi_pci_routing_table {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;

acpi_status
FUNC_4(union acpi_operand_object *VAR_9,
         acpi_size *VAR_10)
{
 u32 VAR_11;
 acpi_size VAR_12 = 0;
 union acpi_operand_object **VAR_13;
 u32 VAR_14;
 union acpi_operand_object *VAR_15;
 union acpi_operand_object **VAR_16;
 u8 VAR_17;
 u32 VAR_18;

 FUNC_0(VAR_8);

 VAR_11 = VAR_9->package.count;
 VAR_13 = VAR_9->package.elements;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {



  VAR_15 = *VAR_13;



  if (!VAR_15 ||
      (VAR_15->common.type != VAR_2)) {
   FUNC_3(VAR_4);
  }





  VAR_16 = VAR_15->package.elements;



  VAR_17 = VAR_6;

  for (VAR_18 = 0;
       VAR_18 < VAR_15->package.count
       && !VAR_17; VAR_18++) {
   if (*VAR_16 &&
       ((VAR_3 ==
         (*VAR_16)->common.type) ||
        ((VAR_1 ==
          (*VAR_16)->common.type) &&
         ((*VAR_16)->reference.class ==
          VAR_0)))) {
    VAR_17 = VAR_7;
   } else {


    VAR_16++;
   }
  }

  VAR_12 += (sizeof(struct acpi_pci_routing_table) - 4);



  if (VAR_17) {
   if ((*VAR_16)->common.type == VAR_3) {




    VAR_12 += ((acpi_size)
           (*VAR_16)->string.
           length + 1);
   } else {
    VAR_12 += FUNC_2((*VAR_16)->reference.node);
   }
  } else {




   VAR_12 += sizeof(u32);
  }



  VAR_12 = FUNC_1(VAR_12);



  VAR_13++;
 }





 *VAR_10 =
     VAR_12 + sizeof(struct acpi_pci_routing_table);
 FUNC_3(VAR_5);
}
