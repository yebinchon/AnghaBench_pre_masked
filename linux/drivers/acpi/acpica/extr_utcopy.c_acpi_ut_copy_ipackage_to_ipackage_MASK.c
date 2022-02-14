
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int elements; scalar_t__ count; } ;
struct TYPE_3__ {int flags; int type; } ;
union acpi_operand_object {TYPE_2__ package; TYPE_1__ common; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*,union acpi_operand_object*,int ,struct acpi_walk_state*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static acpi_status
FUNC_7(union acpi_operand_object *VAR_5,
      union acpi_operand_object *VAR_6,
      struct acpi_walk_state *VAR_7)
{
 acpi_status VAR_8 = VAR_2;

 FUNC_3(VAR_4);

 VAR_6->common.type = VAR_5->common.type;
 VAR_6->common.flags = VAR_5->common.flags;
 VAR_6->package.count = VAR_5->package.count;




 VAR_6->package.elements = FUNC_0(((acpi_size)
          VAR_5->package.
          count +
          1) * sizeof(void *));
 if (!VAR_6->package.elements) {
  FUNC_1((VAR_0, "Package allocation failure"));
  FUNC_6(VAR_1);
 }





 VAR_8 = FUNC_5(VAR_5, VAR_6,
        VAR_3,
        VAR_7);
 if (FUNC_2(VAR_8)) {



  FUNC_4(VAR_6);
 }

 FUNC_6(VAR_8);
}
