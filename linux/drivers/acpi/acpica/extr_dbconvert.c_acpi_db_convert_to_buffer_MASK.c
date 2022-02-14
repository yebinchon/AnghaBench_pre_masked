
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t length; int * pointer; } ;
union acpi_object {TYPE_1__ buffer; int type; } ;
typedef int u8 ;
typedef size_t u32 ;
typedef int acpi_status ;


 int * FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static acpi_status
FUNC_4(char *VAR_3, union acpi_object *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u8 *VAR_8;
 acpi_status VAR_9;



 for (VAR_5 = 0, VAR_7 = 0; VAR_3[VAR_5];) {
  VAR_5 += 2;
  VAR_7++;

  while (VAR_3[VAR_5] && ((VAR_3[VAR_5] == ',') || (VAR_3[VAR_5] == ' '))) {
   VAR_5++;
  }
 }

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8) {
  return (VAR_1);
 }



 for (VAR_5 = 0, VAR_6 = 0; VAR_3[VAR_5];) {
  VAR_9 = FUNC_3(&VAR_3[VAR_5], &VAR_8[VAR_6]);
  if (FUNC_1(VAR_9)) {
   FUNC_2(VAR_8);
   return (VAR_9);
  }

  VAR_6++;
  VAR_5 += 2;
  while (VAR_3[VAR_5] && ((VAR_3[VAR_5] == ',') || (VAR_3[VAR_5] == ' '))) {
   VAR_5++;
  }
 }

 VAR_4->type = VAR_0;
 VAR_4->buffer.pointer = VAR_8;
 VAR_4->buffer.length = VAR_7;
 return (VAR_2);
}
