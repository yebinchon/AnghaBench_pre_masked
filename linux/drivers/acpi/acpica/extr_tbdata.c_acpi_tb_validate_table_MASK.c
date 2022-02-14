
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_desc {int pointer; int flags; int length; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_table_desc*,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

acpi_status FUNC_3(struct acpi_table_desc *VAR_3)
{
 acpi_status VAR_4 = VAR_1;

 FUNC_0(VAR_2);



 if (!VAR_3->pointer) {
  VAR_4 = FUNC_1(VAR_3, &VAR_3->pointer,
            &VAR_3->length,
            &VAR_3->flags);
  if (!VAR_3->pointer) {
   VAR_4 = VAR_0;
  }
 }

 FUNC_2(VAR_4);
}
