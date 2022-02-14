
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union acpi_operand_object*,int ) ;
 int VAR_2 ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_3 ;

void *FUNC_6(const char *VAR_4,
           u32 VAR_5, u32 VAR_6)
{
 union acpi_operand_object *VAR_7;

 FUNC_2(VAR_3);

 VAR_7 = FUNC_4(VAR_2);
 if (!VAR_7) {
  FUNC_1((VAR_4, VAR_5,
       "Could not allocate an object descriptor"));

  FUNC_5(((void*)0));
 }



 FUNC_3(VAR_7, VAR_1);

 FUNC_0((VAR_0, "%p Size %X\n",
     VAR_7, (u32) sizeof(union acpi_operand_object)));

 FUNC_5(VAR_7);
}
