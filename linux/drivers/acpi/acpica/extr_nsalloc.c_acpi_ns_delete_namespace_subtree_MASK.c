
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_namespace_node {struct acpi_namespace_node* parent; scalar_t__ child; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct acpi_namespace_node*) ;
 int FUNC_3 (struct acpi_namespace_node*) ;
 struct acpi_namespace_node* FUNC_4 (struct acpi_namespace_node*,struct acpi_namespace_node*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_7(struct acpi_namespace_node *VAR_3)
{
 struct acpi_namespace_node *VAR_4 = ((void*)0);
 u32 VAR_5 = 1;
 acpi_status VAR_6;

 FUNC_1(VAR_1);

 if (!VAR_3) {
  VAR_2;
 }



 VAR_6 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_2;
 }





 while (VAR_5 > 0) {



  VAR_4 = FUNC_4(VAR_3, VAR_4);
  if (VAR_4) {



   FUNC_3(VAR_4);



   if (VAR_4->child) {




    VAR_5++;
    VAR_3 = VAR_4;
    VAR_4 = ((void*)0);
   }
  } else {




   VAR_5--;





   FUNC_2(VAR_3);



   VAR_4 = VAR_3;



   VAR_3 = VAR_3->parent;
  }
 }

 (void)FUNC_6(VAR_0);
 VAR_2;
}
