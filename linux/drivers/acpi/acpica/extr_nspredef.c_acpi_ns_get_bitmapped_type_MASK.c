
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






__attribute__((used)) static u32 FUNC_0(union acpi_operand_object *VAR_7)
{
 u32 VAR_8;

 if (!VAR_7) {
  return (VAR_3);
 }



 switch (VAR_7->common.type) {
 case 131:

  VAR_8 = VAR_2;
  break;

 case 132:

  VAR_8 = VAR_1;
  break;

 case 128:

  VAR_8 = VAR_6;
  break;

 case 129:

  VAR_8 = VAR_4;
  break;

 case 130:

  VAR_8 = VAR_5;
  break;

 default:



  VAR_8 = VAR_0;
  break;
 }

 return (VAR_8);
}
