
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {scalar_t__ owner_id; struct acpi_namespace_node* parent; scalar_t__ child; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_owner_id ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 struct acpi_namespace_node* VAR_1 ;
 int FUNC_2 (struct acpi_namespace_node*) ;
 int FUNC_3 (struct acpi_namespace_node*) ;
 struct acpi_namespace_node* FUNC_4 (struct acpi_namespace_node*,struct acpi_namespace_node*) ;
 int FUNC_5 (struct acpi_namespace_node*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_8(acpi_owner_id VAR_4)
{
 struct acpi_namespace_node *VAR_5;
 struct acpi_namespace_node *VAR_6;
 struct acpi_namespace_node *VAR_7;
 u32 VAR_8;
 acpi_status VAR_9;

 FUNC_1(VAR_2, VAR_4);

 if (VAR_4 == 0) {
  VAR_3;
 }



 VAR_9 = FUNC_6(VAR_0);
 if (FUNC_0(VAR_9)) {
  VAR_3;
 }

 VAR_6 = ((void*)0);
 VAR_7 = VAR_1;
 VAR_5 = ((void*)0);
 VAR_8 = 1;





 while (VAR_8 > 0) {




  VAR_5 = FUNC_4(VAR_7, VAR_5);

  if (VAR_6) {
   FUNC_2(VAR_6);
   FUNC_5(VAR_6);
   VAR_6 = ((void*)0);
  }

  if (VAR_5) {
   if (VAR_5->owner_id == VAR_4) {



    FUNC_3(VAR_5);
   }



   if (VAR_5->child) {




    VAR_8++;
    VAR_7 = VAR_5;
    VAR_5 = ((void*)0);
   } else if (VAR_5->owner_id == VAR_4) {
    VAR_6 = VAR_5;
   }
  } else {




   VAR_8--;
   if (VAR_8 != 0) {
    if (VAR_7->owner_id == VAR_4) {
     VAR_6 = VAR_7;
    }
   }



   VAR_5 = VAR_7;



   VAR_7 = VAR_7->parent;
  }
 }

 (void)FUNC_7(VAR_0);
 VAR_3;
}
