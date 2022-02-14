
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int acpi_size ;


 int VAR_0 ;
 union acpi_operand_object* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int *,void*,int *) ;
 int FUNC_2 (char*,int *,int) ;

void FUNC_3(char *VAR_4)
{
 union acpi_operand_object *VAR_5;
 acpi_size VAR_6;



 VAR_6 = FUNC_2(VAR_4, ((void*)0), 16);
 VAR_5 = FUNC_0(VAR_6);



 (void)FUNC_1(VAR_1, VAR_0,
      VAR_2, VAR_3,
      ((void*)0), (void *)VAR_5, ((void*)0));
}
