
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {int full_pathname; int node_flags; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct acpi_evaluate_info*,union acpi_operand_object**,int ,int,int ,int,int) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static acpi_status
FUNC_6(struct acpi_evaluate_info *VAR_9,
         union acpi_operand_object **VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 acpi_status VAR_14 = VAR_7;

 FUNC_2(VAR_8);



 if ((*VAR_10)->common.type != VAR_3) {
  FUNC_3((VAR_6, VAR_9->full_pathname,
          VAR_9->node_flags,
          "Return Package has invalid object type for version number"));
  FUNC_5(VAR_4);
 }

 VAR_13 = (u32)(*VAR_10)->integer.value;
 VAR_12 = 21;

 if (VAR_13 == 0) {
  VAR_12 = 20;
 }

 if (VAR_11 < VAR_12) {
  FUNC_3((VAR_6, VAR_9->full_pathname,
          VAR_9->node_flags,
          "Return Package is too small - found %u elements, expected %u",
          VAR_11, VAR_12));
  FUNC_5(VAR_5);
 } else if (VAR_11 > VAR_12) {
  FUNC_0((VAR_0,
      "%s: Return Package is larger than needed - "
      "found %u, expected %u\n",
      VAR_9->full_pathname, VAR_11, VAR_12));
 }



 VAR_14 = FUNC_4(VAR_9, VAR_10,
      VAR_1, 16,
      VAR_2, 4, 0);
 if (FUNC_1(VAR_14)) {
  FUNC_5(VAR_14);
 }



 if (VAR_13 > 0) {
  VAR_14 = FUNC_4(VAR_9, VAR_10 + 20,
       VAR_1, 1,
       0, 0, 20);
 }

 FUNC_5(VAR_14);
}
