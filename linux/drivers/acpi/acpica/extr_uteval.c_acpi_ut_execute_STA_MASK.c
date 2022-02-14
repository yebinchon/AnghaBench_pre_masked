
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef scalar_t__ u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct acpi_namespace_node*,int ,int ,union acpi_operand_object**) ;
 int FUNC_4 (struct acpi_namespace_node*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_6 ;

acpi_status
FUNC_7(struct acpi_namespace_node *VAR_7, u32 * VAR_8)
{
 union acpi_operand_object *VAR_9;
 acpi_status VAR_10;

 FUNC_2(VAR_6);

 VAR_10 = FUNC_3(VAR_7, VAR_5,
      VAR_0, &VAR_9);
 if (FUNC_1(VAR_10)) {
  if (VAR_3 == VAR_10) {





   FUNC_0((VAR_1,
       "_STA on %4.4s was not found, assuming device is present\n",
       FUNC_4(VAR_7)));

   *VAR_8 = VAR_2;
   VAR_10 = VAR_4;
  }

  FUNC_6(VAR_10);
 }



 *VAR_8 = (u32) VAR_9->integer.value;



 FUNC_5(VAR_9);
 FUNC_6(VAR_10);
}
