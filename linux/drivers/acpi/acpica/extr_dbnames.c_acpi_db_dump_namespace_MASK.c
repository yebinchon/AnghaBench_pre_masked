
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; scalar_t__ parent; } ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*,int *,int ) ;

void FUNC_5(char *VAR_9, char *VAR_10)
{
 acpi_handle VAR_11 = VAR_8;
 u32 VAR_12 = VAR_7;



 if (VAR_9) {
  VAR_11 = FUNC_0(VAR_9);
  if (!VAR_11) {
   return;
  }



  if (VAR_10) {
   VAR_12 = FUNC_4(VAR_10, ((void*)0), 0);
  }
 }

 FUNC_1(VAR_1);

 if (((struct acpi_namespace_node *)VAR_11)->parent) {
  FUNC_3("ACPI Namespace (from %4.4s (%p) subtree):\n",
          ((struct acpi_namespace_node *)VAR_11)->
          name.ascii, VAR_11);
 } else {
  FUNC_3("ACPI Namespace (from %s):\n",
          VAR_4);
 }



 FUNC_1(VAR_2);
 FUNC_2(VAR_6, VAR_3, VAR_12,
        VAR_5, VAR_11);
 FUNC_1(VAR_0);
}
