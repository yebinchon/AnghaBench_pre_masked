
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* pointer; size_t length; } ;
struct TYPE_7__ {size_t length; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int type; } ;
union acpi_operand_object {TYPE_4__ buffer; TYPE_3__ string; TYPE_2__ integer; TYPE_1__ common; } ;
typedef char u8 ;
typedef int u64 ;
typedef size_t u32 ;
typedef int u16 ;
typedef int acpi_status ;
typedef int acpi_size ;




 int FUNC_0 (int ,union acpi_operand_object*) ;

 size_t VAR_0 ;
 size_t FUNC_1 (int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (int ,int,char*,int) ;
 int VAR_5 ;
 union acpi_operand_object* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(union acpi_operand_object * VAR_7,
     union acpi_operand_object ** VAR_8, u32 VAR_9)
{
 union acpi_operand_object *VAR_10;
 u8 *VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u16 VAR_14 = 16;
 u8 VAR_15 = ',';

 FUNC_0(VAR_6, VAR_7);

 switch (VAR_7->common.type) {
 case 128:



  *VAR_8 = VAR_7;
  FUNC_4(VAR_3);

 case 129:

  switch (VAR_9) {
  case 133:





   VAR_13 = VAR_0;
   VAR_14 = 10;
   break;

  default:



   VAR_13 = FUNC_1(VAR_5);
   break;
  }





  VAR_10 =
      FUNC_3((acpi_size)VAR_13);
  if (!VAR_10) {
   FUNC_4(VAR_2);
  }

  VAR_11 = VAR_10->buffer.pointer;



  VAR_13 =
      FUNC_2(VAR_7->integer.value, VAR_14,
          VAR_11,
          VAR_5);



  VAR_10->string.length = VAR_13;
  VAR_11[VAR_13] = 0;
  break;

 case 130:



  switch (VAR_9) {
  case 133:






   VAR_14 = 10;





   for (VAR_12 = 0; VAR_12 < VAR_7->buffer.length; VAR_12++) {
    if (VAR_7->buffer.pointer[VAR_12] >= 100) {
     VAR_13 += 4;
    } else if (VAR_7->buffer.pointer[VAR_12] >= 10) {
     VAR_13 += 3;
    } else {
     VAR_13 += 2;
    }
   }
   break;

  case 131:
   VAR_15 = ' ';
   VAR_13 = (VAR_7->buffer.length * 5);
   break;

  case 132:
   VAR_15 = ',';
   VAR_13 = (VAR_7->buffer.length * 5);
   break;

  default:
   FUNC_4(VAR_1);
  }






  if (VAR_13) {
   VAR_13--;
  }

  VAR_10 =
      FUNC_3((acpi_size)VAR_13);
  if (!VAR_10) {
   FUNC_4(VAR_2);
  }

  VAR_11 = VAR_10->buffer.pointer;





  for (VAR_12 = 0; VAR_12 < VAR_7->buffer.length; VAR_12++) {
   if (VAR_14 == 16) {



    *VAR_11++ = '0';
    *VAR_11++ = 'x';
   }

   VAR_11 += FUNC_2((u64) VAR_7->
           buffer.pointer[VAR_12],
           VAR_14, VAR_11, 1);



   *VAR_11++ = VAR_15;
  }





  if (VAR_7->buffer.length) {
   VAR_11--;
  }
  *VAR_11 = 0;
  break;

 default:

  FUNC_4(VAR_4);
 }

 *VAR_8 = VAR_10;
 FUNC_4(VAR_3);
}
