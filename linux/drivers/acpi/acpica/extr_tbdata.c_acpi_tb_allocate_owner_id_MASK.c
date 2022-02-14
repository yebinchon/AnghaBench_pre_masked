
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
struct TYPE_4__ {size_t current_table_count; TYPE_1__* tables; } ;
struct TYPE_3__ {int owner_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

acpi_status FUNC_5(u32 VAR_4)
{
 acpi_status VAR_5 = VAR_1;

 FUNC_0(VAR_3);

 (void)FUNC_1(VAR_0);
 if (VAR_4 < VAR_2.current_table_count) {
  VAR_5 =
      FUNC_2(&
           (VAR_2.
            tables[VAR_4].owner_id));
 }

 (void)FUNC_3(VAR_0);
 FUNC_4(VAR_5);
}
