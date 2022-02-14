
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * aml_start; } ;
union acpi_operand_object {TYPE_1__ method; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 union acpi_operand_object* VAR_10 ;
 char* FUNC_4 (struct acpi_namespace_node*,int ) ;
 int VAR_11 ;

void
FUNC_5(struct acpi_namespace_node *VAR_12,
     union acpi_operand_object *VAR_13,
     struct acpi_walk_state *VAR_14)
{
 char *VAR_15 = ((void*)0);
 u8 VAR_16;

 FUNC_1(VAR_11);

 if (VAR_12) {
  VAR_15 = FUNC_4(VAR_12, VAR_3);
 }

 VAR_16 = FUNC_3(((void*)0));

 if (VAR_16) {
  FUNC_2(VAR_0, VAR_2,
     VAR_13 ? VAR_13->method.aml_start : ((void*)0),
     VAR_15);
 }



 if (VAR_10 == VAR_13) {



  if (VAR_8 & VAR_1) {
   VAR_9 = ((void*)0);
  }

  VAR_5 = VAR_7;
  VAR_4 = VAR_6;
  VAR_10 = ((void*)0);
 }

 if (VAR_15) {
  FUNC_0(VAR_15);
 }
}
