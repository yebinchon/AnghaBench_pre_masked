
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int flags; int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_namespace_node*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct acpi_namespace_node*) ;

__attribute__((used)) static void FUNC_4(struct acpi_namespace_node *VAR_2)
{

 FUNC_2("<Node>          Name %4.4s",
         FUNC_3(VAR_2));

 if (VAR_2->flags & VAR_0) {
  FUNC_2(" [Method Arg]");
 }
 if (VAR_2->flags & VAR_1) {
  FUNC_2(" [Method Local]");
 }

 switch (VAR_2->type) {



 case 129:

  FUNC_2(" Device");
  break;

 case 128:

  FUNC_2(" Thermal Zone");
  break;

 default:

  FUNC_0(FUNC_1
            (VAR_2));
  break;
 }
}
