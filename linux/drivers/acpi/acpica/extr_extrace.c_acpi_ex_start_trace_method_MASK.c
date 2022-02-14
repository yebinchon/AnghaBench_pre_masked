
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int *,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 union acpi_operand_object* VAR_11 ;
 char* FUNC_4 (struct acpi_namespace_node*,int ) ;
 int VAR_12 ;

void
FUNC_5(struct acpi_namespace_node *VAR_13,
      union acpi_operand_object *VAR_14,
      struct acpi_walk_state *VAR_15)
{
 char *VAR_16 = ((void*)0);
 u8 VAR_17 = VAR_3;

 FUNC_1(VAR_12);

 if (VAR_13) {
  VAR_16 = FUNC_4(VAR_13, VAR_4);
 }

 VAR_17 = FUNC_3(VAR_16);
 if (VAR_17 && !VAR_11) {
  VAR_11 = VAR_14;
  VAR_8 = VAR_6;
  VAR_7 = VAR_5;
  VAR_6 = VAR_2;
  VAR_5 = VAR_1;

  if (VAR_10) {
   VAR_6 = VAR_10;
  }

  if (VAR_9) {
   VAR_5 = VAR_9;
  }
 }

 if (VAR_17) {
  FUNC_2(VAR_0, VAR_4,
     VAR_14 ? VAR_14->method.aml_start : ((void*)0),
     VAR_16);
 }

 if (VAR_16) {
  FUNC_0(VAR_16);
 }
}
