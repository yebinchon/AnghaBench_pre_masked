
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aml_op_name; int aml; } ;
union acpi_parse_object {TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(union acpi_parse_object *VAR_5,
     struct acpi_walk_state *VAR_6)
{

 FUNC_0(VAR_4);

 if (FUNC_2(((void*)0)) &&
     (VAR_3 & VAR_1)) {
  FUNC_1(VAR_0, VAR_2,
     VAR_5->common.aml, VAR_5->common.aml_op_name);
 }
}
