
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ count; union acpi_operand_object** elements; } ;
struct TYPE_4__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_3__ integer; TYPE_2__ package; TYPE_1__ common; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {int full_pathname; int return_flags; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (union acpi_operand_object**,scalar_t__,scalar_t__,int ) ;
 int VAR_10 ;

__attribute__((used)) static acpi_status
FUNC_3(struct acpi_evaluate_info *VAR_11,
     union acpi_operand_object *VAR_12,
     u32 VAR_13,
     u32 VAR_14,
     u32 VAR_15,
     u8 VAR_16, char *VAR_17)
{
 u32 VAR_18;
 union acpi_operand_object **VAR_19;
 union acpi_operand_object **VAR_20;
 union acpi_operand_object *VAR_21;
 u32 VAR_22;
 u32 VAR_23;

 FUNC_1(VAR_10);



 if (VAR_12->common.type != VAR_5) {
  return (VAR_7);
 }






 VAR_18 = VAR_12->package.count;
 if (!VAR_18 || VAR_13 >= VAR_18) {
  return (VAR_8);
 }

 VAR_19 = &VAR_12->package.elements[VAR_13];
 VAR_18 -= VAR_13;

 VAR_23 = 0;
 if (VAR_16 == VAR_3) {
  VAR_23 = VAR_6;
 }



 for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++) {



  if ((*VAR_19)->common.type != VAR_5) {
   return (VAR_7);
  }



  if ((*VAR_19)->package.count < VAR_14) {
   return (VAR_8);
  }

  VAR_20 = (*VAR_19)->package.elements;
  VAR_21 = VAR_20[VAR_15];

  if (VAR_21->common.type != VAR_4) {
   return (VAR_7);
  }





  if (((VAR_16 == VAR_2) &&
       (VAR_21->integer.value < VAR_23)) ||
      ((VAR_16 == VAR_3) &&
       (VAR_21->integer.value > VAR_23))) {
   FUNC_2(&VAR_12->package.
       elements[VAR_13],
       VAR_18, VAR_15,
       VAR_16);

   VAR_11->return_flags |= VAR_1;

   FUNC_0((VAR_0,
       "%s: Repaired unsorted list - now sorted by %s\n",
       VAR_11->full_pathname, VAR_17));
   return (VAR_9);
  }

  VAR_23 = (u32) VAR_21->integer.value;
  VAR_19++;
 }

 return (VAR_9);
}
