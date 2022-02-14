
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct TYPE_4__ {int arg_end; int pkg_end; scalar_t__ arg_count; scalar_t__ arg_list; union acpi_parse_object* op; } ;
struct TYPE_3__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_2__ parse_scope; TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_parse_state {int pkg_end; int scope; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ,union acpi_parse_object*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_generic_state* FUNC_2 () ;
 int FUNC_3 (int *,union acpi_generic_state*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(struct acpi_parse_state *VAR_6,
     union acpi_parse_object *VAR_7,
     u32 VAR_8, u32 VAR_9)
{
 union acpi_generic_state *VAR_10;

 FUNC_0(VAR_5, VAR_7);

 VAR_10 = FUNC_2();
 if (!VAR_10) {
  FUNC_4(VAR_3);
 }

 VAR_10->common.descriptor_type = VAR_0;
 VAR_10->parse_scope.op = VAR_7;
 VAR_10->parse_scope.arg_list = VAR_8;
 VAR_10->parse_scope.arg_count = VAR_9;
 VAR_10->parse_scope.pkg_end = VAR_6->pkg_end;



 FUNC_3(&VAR_6->scope, VAR_10);

 if (VAR_9 == VAR_2) {



  VAR_10->parse_scope.arg_end = VAR_6->pkg_end;
 } else {


  VAR_10->parse_scope.arg_end = FUNC_1(VAR_1);
 }

 FUNC_4(VAR_4);
}
