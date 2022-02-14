
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ascii; } ;
struct acpi_namespace_node {scalar_t__ type; TYPE_1__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct acpi_namespace_node* FUNC_0 (char*) ;
 int FUNC_1 (struct acpi_namespace_node*,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,int (*) (struct acpi_namespace_node*,int ,int *,int *),int *,int *,int *) ;
 int FUNC_6 (char*,char*) ;

void FUNC_7(char *VAR_7)
{
 struct acpi_namespace_node *VAR_8;

 FUNC_2(VAR_1);
 VAR_6 |= VAR_2;



 if (!VAR_7 || (!FUNC_6(VAR_7, "*"))) {
  (void)FUNC_5(VAR_4, VAR_3,
       VAR_5,
       FUNC_1, ((void*)0), ((void*)0),
       ((void*)0));
 } else {


  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8) {
   if (VAR_8->type != VAR_4) {
    FUNC_3
        ("%4.4s: Name is not a device object (%s)\n",
         VAR_8->name.ascii,
         FUNC_4(VAR_8->type));
   } else {
    (void)FUNC_1(VAR_8, 0, ((void*)0),
              ((void*)0));
   }
  }
 }

 FUNC_2(VAR_0);
}
