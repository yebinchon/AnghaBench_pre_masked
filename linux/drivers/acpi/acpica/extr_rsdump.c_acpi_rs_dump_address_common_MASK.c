
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resource_type; } ;
union acpi_resource_data {TYPE_1__ address; } ;
typedef int u8 ;



 int FUNC_0 () ;


 int FUNC_1 (union acpi_resource_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(union acpi_resource_data *VAR_3)
{
 FUNC_0();



 switch (VAR_3->address.resource_type) {
 case 128:

  FUNC_1(VAR_3, VAR_2);
  break;

 case 129:

  FUNC_1(VAR_3, VAR_1);
  break;

 case 130:

  FUNC_3("Resource Type", "Bus Number Range");
  break;

 default:

  FUNC_2("Resource Type",
         (u8) VAR_3->address.resource_type);
  break;
 }



 FUNC_1(VAR_3, VAR_0);
}
