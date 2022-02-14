
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; union acpi_object* elements; } ;
union acpi_object {TYPE_1__ package; int type; } ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 union acpi_object* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,union acpi_object*) ;
 int FUNC_4 (int,union acpi_object*) ;
 char* FUNC_5 (char*,char**,int *) ;

acpi_status FUNC_6(char *VAR_3, union acpi_object *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 u32 VAR_7;
 acpi_object_type VAR_8;
 union acpi_object *VAR_9;
 acpi_status VAR_10;

 VAR_9 =
     FUNC_0(VAR_2 *
     sizeof(union acpi_object));

 VAR_5 = VAR_3;
 for (VAR_7 = 0; VAR_7 < (VAR_2 - 1); VAR_7++) {
  VAR_5 = FUNC_5(VAR_5, &VAR_6, &VAR_8);
  if (!VAR_5) {
   break;
  }



  VAR_10 = FUNC_3(VAR_8, VAR_5, &VAR_9[VAR_7]);
  if (FUNC_1(VAR_10)) {
   FUNC_4(VAR_7 + 1, VAR_9);
   FUNC_2(VAR_9);
   return (VAR_10);
  }

  VAR_5 = VAR_6;
 }

 VAR_4->type = VAR_0;
 VAR_4->package.count = VAR_7;
 VAR_4->package.elements = VAR_9;
 return (VAR_1);
}
