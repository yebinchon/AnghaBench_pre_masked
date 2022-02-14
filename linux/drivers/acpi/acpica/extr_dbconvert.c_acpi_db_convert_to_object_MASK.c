
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
struct TYPE_4__ {char* pointer; int length; } ;
union acpi_object {int type; TYPE_1__ integer; TYPE_2__ string; } ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_object_type ;



 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,union acpi_object*) ;
 int FUNC_1 (char*,union acpi_object*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;

acpi_status
FUNC_4(acpi_object_type VAR_2,
     char *VAR_3, union acpi_object *VAR_4)
{
 acpi_status VAR_5 = VAR_1;

 switch (VAR_2) {
 case 128:

  VAR_4->type = 128;
  VAR_4->string.pointer = VAR_3;
  VAR_4->string.length = (u32)FUNC_3(VAR_3);
  break;

 case 130:

  VAR_5 = FUNC_0(VAR_3, VAR_4);
  break;

 case 129:

  VAR_5 = FUNC_1(VAR_3, VAR_4);
  break;

 default:

  VAR_4->type = VAR_0;
  VAR_5 = FUNC_2(VAR_3, &VAR_4->integer.value);
  break;
 }

 return (VAR_5);
}
