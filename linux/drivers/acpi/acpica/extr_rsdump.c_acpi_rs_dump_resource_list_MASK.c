
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t type; } ;
struct TYPE_4__ {TYPE_1__ common_serial_bus; } ;
struct acpi_resource {size_t type; TYPE_2__ data; int length; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 struct acpi_resource* FUNC_2 (struct acpi_resource*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(struct acpi_resource *VAR_7)
{
 u32 VAR_8 = 0;
 u32 VAR_9;

 FUNC_0();



 if (!FUNC_1(VAR_0, VAR_4)) {
  return;
 }



 do {
  FUNC_3("\n[%02X] ", VAR_8);
  VAR_8++;



  VAR_9 = VAR_7->type;
  if (VAR_9 > VAR_2) {
   FUNC_3
       ("Invalid descriptor type (%X) in resource list\n",
        VAR_7->type);
   return;
  }



  if (!VAR_7->length) {
   FUNC_3
       ("Invalid zero length descriptor in resource list\n");
   return;
  }



  if (VAR_9 == VAR_3) {
   FUNC_4(&VAR_7->data,
      VAR_6
      [VAR_7->data.
       common_serial_bus.type]);
  } else {
   FUNC_4(&VAR_7->data,
      VAR_5
      [VAR_9]);
  }



  VAR_7 = FUNC_2(VAR_7);



 } while (VAR_9 != VAR_1);
}
