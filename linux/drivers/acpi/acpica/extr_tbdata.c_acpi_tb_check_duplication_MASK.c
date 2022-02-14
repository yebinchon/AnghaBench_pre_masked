
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_desc {int dummy; } ;
typedef int acpi_status ;
struct TYPE_4__ {size_t current_table_count; TYPE_1__* tables; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (struct acpi_table_desc*,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;

__attribute__((used)) static acpi_status
FUNC_3(struct acpi_table_desc *VAR_7, u32 *VAR_8)
{
 u32 VAR_9;

 FUNC_0(VAR_6);



 for (VAR_9 = 0; VAR_9 < VAR_5.current_table_count; ++VAR_9) {



  if (!
      (VAR_5.tables[VAR_9].
       flags & VAR_1)) {
   continue;
  }





  if (!FUNC_1(VAR_7, VAR_9)) {
   continue;
  }
  if (VAR_5.tables[VAR_9].flags &
      VAR_0) {



   FUNC_2(VAR_2);
  } else {
   *VAR_8 = VAR_9;
   FUNC_2(VAR_3);
  }
 }



 FUNC_2(VAR_4);
}
