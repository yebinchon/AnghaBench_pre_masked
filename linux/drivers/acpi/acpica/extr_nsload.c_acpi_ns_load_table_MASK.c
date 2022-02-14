
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_4__ {TYPE_1__* tables; } ;
struct TYPE_3__ {int owner_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (size_t,struct acpi_namespace_node*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (size_t,struct acpi_namespace_node*) ;
 int FUNC_9 (size_t) ;
 scalar_t__ FUNC_10 (size_t) ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (size_t,int ) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;

acpi_status
FUNC_14(u32 VAR_5, struct acpi_namespace_node *VAR_6)
{
 acpi_status VAR_7;

 FUNC_2(VAR_4);



 if (FUNC_10(VAR_5)) {
  VAR_7 = VAR_1;
  goto unlock;
 }

 FUNC_0((VAR_0,
     "**** Loading table into namespace ****\n"));

 VAR_7 = FUNC_9(VAR_5);
 if (FUNC_1(VAR_7)) {
  goto unlock;
 }
 VAR_7 = FUNC_8(VAR_5, VAR_6);
 if (FUNC_3(VAR_7)) {
  FUNC_12(VAR_5, VAR_2);
 } else {
  FUNC_7(VAR_3.
        tables[VAR_5].owner_id);

  FUNC_11(VAR_5);
  FUNC_13(VAR_7);
 }

unlock:
 if (FUNC_1(VAR_7)) {
  FUNC_13(VAR_7);
 }







 FUNC_0((VAR_0,
     "**** Begin Table Object Initialization\n"));

 FUNC_5();
 VAR_7 = FUNC_4(VAR_5, VAR_6);
 FUNC_6();

 FUNC_0((VAR_0,
     "**** Completed Table Object Initialization\n"));

 FUNC_13(VAR_7);
}
