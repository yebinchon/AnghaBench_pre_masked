
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_desc {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {scalar_t__ current_table_count; scalar_t__ max_table_count; struct acpi_table_desc* tables; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;

acpi_status
FUNC_2(u32 *VAR_2,
      struct acpi_table_desc **VAR_3)
{
 acpi_status VAR_4;
 u32 VAR_5;



 if (VAR_1.current_table_count >=
     VAR_1.max_table_count) {
  VAR_4 = FUNC_1();
  if (FUNC_0(VAR_4)) {
   return (VAR_4);
  }
 }

 VAR_5 = VAR_1.current_table_count;
 VAR_1.current_table_count++;

 if (VAR_2) {
  *VAR_2 = VAR_5;
 }
 if (VAR_3) {
  *VAR_3 = &VAR_1.tables[VAR_5];
 }

 return (VAR_0);
}
