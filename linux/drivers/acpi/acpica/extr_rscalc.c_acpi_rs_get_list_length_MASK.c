
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {size_t type; size_t resource_length; } ;
struct TYPE_15__ {scalar_t__ vendor_length; scalar_t__ res_source_offset; scalar_t__ vendor_offset; } ;
struct TYPE_14__ {scalar_t__ vendor_length; scalar_t__ res_source_offset; scalar_t__ vendor_offset; } ;
struct TYPE_13__ {scalar_t__ vendor_length; scalar_t__ pin_table_offset; scalar_t__ vendor_offset; } ;
struct TYPE_12__ {scalar_t__ pin_table_offset; scalar_t__ vendor_length; scalar_t__ vendor_offset; } ;
struct TYPE_11__ {int resource_length; } ;
struct TYPE_10__ {scalar_t__ pin_table_offset; scalar_t__ vendor_length; scalar_t__ vendor_offset; } ;
struct TYPE_9__ {scalar_t__ pin_table_offset; scalar_t__ vendor_length; scalar_t__ vendor_offset; } ;
union aml_resource {TYPE_8__ common_serial_bus; TYPE_7__ pin_group_config; TYPE_6__ pin_group_function; TYPE_5__ pin_group; TYPE_4__ pin_config; TYPE_3__ large_header; TYPE_2__ pin_function; TYPE_1__ gpio; } ;
typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct aml_resource_large_header {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,size_t*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int,size_t) ;
 int FUNC_7 (size_t*) ;
 int FUNC_8 (size_t*) ;
 int FUNC_9 (size_t*) ;
 int const FUNC_10 (size_t*) ;
 int FUNC_11 (int *,size_t*,size_t*) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;

acpi_status
FUNC_13(u8 *VAR_9,
   u32 VAR_10, acpi_size *VAR_11)
{
 acpi_status VAR_12;
 u8 *VAR_13;
 u8 *VAR_14;
 u32 VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 u32 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 union aml_resource *VAR_21;

 FUNC_2(VAR_8);

 *VAR_11 = VAR_1;
 VAR_13 = VAR_9 + VAR_10;



 while (VAR_9 < VAR_13) {



  VAR_12 =
      FUNC_11(((void*)0), VAR_9,
           &VAR_19);
  if (FUNC_1(VAR_12)) {




   FUNC_12(VAR_12);
  }

  VAR_21 = (void *)VAR_9;



  VAR_17 = FUNC_9(VAR_9);
  VAR_20 =
      VAR_5[VAR_19];





  VAR_18 = 0;
  VAR_14 =
      VAR_9 + FUNC_8(VAR_9);

  switch (FUNC_10(VAR_9)) {
  case 136:




   FUNC_3(&VAR_16, VAR_14);
   VAR_18 = FUNC_5(VAR_16);
   break;

  case 140:




   VAR_18 = FUNC_5(*VAR_14);
   break;

  case 128:
  case 129:




   VAR_18 = VAR_17;






   if (VAR_18) {
    VAR_18--;
   }
   break;

  case 139:



   FUNC_12(VAR_3);

  case 142:
  case 143:
  case 141:




   VAR_18 =
       FUNC_6(VAR_17,
        VAR_20);
   break;

  case 138:






   VAR_18 = (VAR_14[1] - 1) * sizeof(u32);



   VAR_18 +=
       FUNC_6(VAR_17 -
        VAR_18,
        VAR_20);
   break;

  case 137:



   if (VAR_21->gpio.vendor_length) {
    VAR_18 +=
        VAR_21->gpio.vendor_offset -
        VAR_21->gpio.pin_table_offset +
        VAR_21->gpio.vendor_length;
   } else {
    VAR_18 +=
        VAR_21->large_header.resource_length +
        sizeof(struct aml_resource_large_header) -
        VAR_21->gpio.pin_table_offset;
   }
   break;

  case 134:



   if (VAR_21->pin_function.vendor_length) {
    VAR_18 +=
        VAR_21->pin_function.vendor_offset -
        VAR_21->pin_function.
        pin_table_offset +
        VAR_21->pin_function.vendor_length;
   } else {
    VAR_18 +=
        VAR_21->large_header.resource_length +
        sizeof(struct aml_resource_large_header) -
        VAR_21->pin_function.pin_table_offset;
   }
   break;

  case 130:

   VAR_20 =
       VAR_4
       [VAR_21->common_serial_bus.type];
   VAR_18 +=
       VAR_21->common_serial_bus.resource_length -
       VAR_20;
   break;

  case 135:



   if (VAR_21->pin_config.vendor_length) {
    VAR_18 +=
        VAR_21->pin_config.vendor_offset -
        VAR_21->pin_config.pin_table_offset +
        VAR_21->pin_config.vendor_length;
   } else {
    VAR_18 +=
        VAR_21->large_header.resource_length +
        sizeof(struct aml_resource_large_header) -
        VAR_21->pin_config.pin_table_offset;
   }
   break;

  case 133:

   VAR_18 +=
       VAR_21->pin_group.vendor_offset -
       VAR_21->pin_group.pin_table_offset +
       VAR_21->pin_group.vendor_length;

   break;

  case 131:

   VAR_18 +=
       VAR_21->pin_group_function.vendor_offset -
       VAR_21->pin_group_function.res_source_offset +
       VAR_21->pin_group_function.vendor_length;

   break;

  case 132:

   VAR_18 +=
       VAR_21->pin_group_config.vendor_offset -
       VAR_21->pin_group_config.res_source_offset +
       VAR_21->pin_group_config.vendor_length;

   break;

  default:

   break;
  }







  if (FUNC_10(VAR_9) ==
      130) {
   VAR_15 =
       VAR_6
       [VAR_21->common_serial_bus.type] +
       VAR_18;
  } else {
   VAR_15 =
       VAR_7[VAR_19] +
       VAR_18;
  }

  VAR_15 = (u32)FUNC_4(VAR_15);
  *VAR_11 += VAR_15;

  FUNC_0((VAR_0,
      "Type %.2X, AmlLength %.2X InternalLength %.2X\n",
      FUNC_10(VAR_9),
      FUNC_7(VAR_9),
      VAR_15));





  VAR_9 += FUNC_7(VAR_9);
 }



 FUNC_12(VAR_2);
}
