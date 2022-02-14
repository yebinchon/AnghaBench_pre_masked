
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_desc {int * pointer; int flags; int length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct acpi_table_desc *VAR_2)
{

 FUNC_0(VAR_1);



 if (!VAR_2->pointer) {
  VAR_0;
 }

 FUNC_1(VAR_2->pointer, VAR_2->length,
         VAR_2->flags);
 VAR_2->pointer = ((void*)0);

 VAR_0;
}
