
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
typedef int acpi_owner_id ;
struct TYPE_4__ {size_t current_table_count; TYPE_1__* tables; } ;
struct TYPE_3__ {int owner_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

acpi_status FUNC_4(u32 VAR_5, acpi_owner_id *VAR_6)
{
 acpi_status VAR_7 = VAR_1;

 FUNC_0(VAR_4);

 (void)FUNC_1(VAR_0);
 if (VAR_5 < VAR_3.current_table_count) {
  *VAR_6 =
      VAR_3.tables[VAR_5].owner_id;
  VAR_7 = VAR_2;
 }

 (void)FUNC_2(VAR_0);
 FUNC_3(VAR_7);
}
