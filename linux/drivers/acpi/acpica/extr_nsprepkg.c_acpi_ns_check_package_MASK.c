
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int type; size_t count1; size_t count2; int object_type2; int object_type1; } ;
struct TYPE_7__ {size_t count; int tail_object_type; int * object_type; } ;
union acpi_predefined_info {TYPE_6__ ret_info; TYPE_1__ ret_info3; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_10__ {size_t count; union acpi_operand_object** elements; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_8__ {int value; } ;
union acpi_operand_object {TYPE_5__ buffer; TYPE_4__ package; TYPE_3__ common; TYPE_2__ integer; } ;
typedef size_t u32 ;
struct acpi_evaluate_info {int node_flags; int full_pathname; union acpi_predefined_info* predefined; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct acpi_evaluate_info*,union acpi_operand_object**,int ,size_t) ;
 int FUNC_5 (struct acpi_evaluate_info*,union acpi_operand_object**,int ,size_t,int ,size_t,int ) ;
 int FUNC_6 (struct acpi_evaluate_info*,union acpi_predefined_info const*,union acpi_operand_object**,size_t) ;
 int FUNC_7 (struct acpi_evaluate_info*,union acpi_operand_object**,size_t) ;
 int FUNC_8 (struct acpi_evaluate_info*,int,union acpi_operand_object*) ;
 int FUNC_9 (struct acpi_evaluate_info*,union acpi_operand_object*,union acpi_operand_object**) ;
 int VAR_8 ;

acpi_status
FUNC_10(struct acpi_evaluate_info *VAR_9,
        union acpi_operand_object **VAR_10)
{
 union acpi_operand_object *VAR_11 = *VAR_10;
 const union acpi_predefined_info *VAR_12;
 union acpi_operand_object **VAR_13;
 acpi_status VAR_14 = VAR_7;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 FUNC_2(VAR_8);



 VAR_12 = VAR_9->predefined + 1;

 FUNC_0((VAR_0,
     "%s Validating return Package of Type %X, Count %X\n",
     VAR_9->full_pathname, VAR_12->ret_info.type,
     VAR_11->package.count));





 FUNC_8(VAR_9, VAR_12->ret_info.type,
         VAR_11);



 VAR_13 = VAR_11->package.elements;
 VAR_16 = VAR_11->package.count;





 if (!VAR_16) {
  if (VAR_12->ret_info.type == 138) {
   return (VAR_7);
  }

  FUNC_3((VAR_6, VAR_9->full_pathname,
          VAR_9->node_flags,
          "Return Package has no elements (empty)"));

  return (VAR_5);
 }







 switch (VAR_12->ret_info.type) {
 case 128:

  VAR_14 = FUNC_7(VAR_9, VAR_13, VAR_16);
  break;

 case 140:






  VAR_15 =
      VAR_12->ret_info.count1 + VAR_12->ret_info.count2;
  if (VAR_16 < VAR_15) {
   goto package_too_small;
  } else if (VAR_16 > VAR_15) {
   FUNC_0((VAR_1,
       "%s: Return Package is larger than needed - "
       "found %u, expected %u\n",
       VAR_9->full_pathname, VAR_16,
       VAR_15));
  }



  VAR_14 = FUNC_5(VAR_9, VAR_13,
       VAR_12->ret_info.
       object_type1,
       VAR_12->ret_info.
       count1,
       VAR_12->ret_info.
       object_type2,
       VAR_12->ret_info.
       count2, 0);
  break;

 case 138:




  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   VAR_14 = FUNC_4(VAR_9, VAR_13,
          VAR_12->ret_info.
          object_type1, VAR_17);
   if (FUNC_1(VAR_14)) {
    return (VAR_14);
   }

   VAR_13++;
  }
  break;

 case 139:







  VAR_15 = VAR_12->ret_info3.count;
  if (VAR_16 < VAR_15) {
   goto package_too_small;
  }



  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   if (VAR_17 < VAR_12->ret_info3.count) {



    VAR_14 =
        FUNC_4(VAR_9, VAR_13,
             VAR_12->
             ret_info3.
             object_type[VAR_17],
             VAR_17);
    if (FUNC_1(VAR_14)) {
     return (VAR_14);
    }
   } else {


    VAR_14 =
        FUNC_4(VAR_9, VAR_13,
             VAR_12->
             ret_info3.
             tail_object_type,
             VAR_17);
    if (FUNC_1(VAR_14)) {
     return (VAR_14);
    }
   }

   VAR_13++;
  }
  break;

 case 131:



  VAR_14 =
      FUNC_4(VAR_9, VAR_13,
           VAR_2, 0);
  if (FUNC_1(VAR_14)) {
   return (VAR_14);
  }

  VAR_13++;
  VAR_16--;



  VAR_14 =
      FUNC_6(VAR_9, VAR_12, VAR_13, VAR_16);
  break;

 case 132:



  VAR_14 =
      FUNC_4(VAR_9, VAR_13,
           VAR_2, 0);
  if (FUNC_1(VAR_14)) {
   return (VAR_14);
  }





  VAR_15 = (u32)(*VAR_13)->integer.value;
  if (VAR_15 >= VAR_16) {
   goto package_too_small;
  }

  VAR_16 = VAR_15;
  VAR_13++;



  VAR_14 =
      FUNC_6(VAR_9, VAR_12, VAR_13, VAR_16);
  break;

 case 137:
 case 135:
 case 133:
 case 136:
 case 134:
  if (*VAR_13
      && ((*VAR_13)->common.type != VAR_3)) {



   VAR_14 =
       FUNC_9(VAR_9, VAR_11,
            VAR_10);
   if (FUNC_1(VAR_14)) {
    return (VAR_14);
   }



   VAR_11 = *VAR_10;
   VAR_13 = VAR_11->package.elements;
   VAR_16 = 1;
  }



  VAR_14 =
      FUNC_6(VAR_9, VAR_12, VAR_13, VAR_16);
  break;

 case 129:




  break;

 case 130:



  if (VAR_16 & 1) {
   VAR_15 = VAR_16 + 1;
   goto package_too_small;
  }

  while (VAR_16 > 0) {
   VAR_14 = FUNC_4(VAR_9, VAR_13,
          VAR_12->ret_info.
          object_type1, 0);
   if (FUNC_1(VAR_14)) {
    return (VAR_14);
   }



   if ((*VAR_13)->buffer.length != 16) {
    FUNC_3((VAR_6,
            VAR_9->full_pathname,
            VAR_9->node_flags,
            "Invalid length for UUID Buffer"));
    return (VAR_5);
   }

   VAR_14 = FUNC_4(VAR_9, VAR_13 + 1,
          VAR_12->ret_info.
          object_type2, 0);
   if (FUNC_1(VAR_14)) {
    return (VAR_14);
   }

   VAR_13 += 2;
   VAR_16 -= 2;
  }
  break;

 default:



  FUNC_3((VAR_6, VAR_9->full_pathname,
          VAR_9->node_flags,
          "Invalid internal return type in table entry: %X",
          VAR_12->ret_info.type));

  return (VAR_4);
 }

 return (VAR_14);

package_too_small:



 FUNC_3((VAR_6, VAR_9->full_pathname, VAR_9->node_flags,
         "Return Package is too small - found %u elements, expected %u",
         VAR_16, VAR_15));

 return (VAR_5);
}
