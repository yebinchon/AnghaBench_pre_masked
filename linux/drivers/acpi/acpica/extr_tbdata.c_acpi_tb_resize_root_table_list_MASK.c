
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_desc {scalar_t__ address; } ;
typedef int acpi_status ;
typedef int acpi_size ;
struct TYPE_2__ {int flags; size_t max_table_count; size_t current_table_count; struct acpi_table_desc* tables; } ;


 struct acpi_table_desc* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_table_desc*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (struct acpi_table_desc*,struct acpi_table_desc*,int) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;

acpi_status FUNC_6(void)
{
 struct acpi_table_desc *VAR_9;
 u32 VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13;

 FUNC_3(VAR_8);



 if (!(VAR_7.flags & VAR_0)) {
  FUNC_1((VAR_3,
       "Resize of Root Table Array is not allowed"));
  FUNC_5(VAR_6);
 }



 if (VAR_7.flags & VAR_1) {
  VAR_10 = VAR_7.max_table_count;
 } else {
  VAR_10 = VAR_7.current_table_count;
 }

 VAR_12 = VAR_10 + VAR_2;
 VAR_9 = FUNC_0(((acpi_size)VAR_12) *
          sizeof(struct acpi_table_desc));
 if (!VAR_9) {
  FUNC_1((VAR_3,
       "Could not allocate new root table array"));
  FUNC_5(VAR_4);
 }



 VAR_11 = 0;
 if (VAR_7.tables) {
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   if (VAR_7.tables[VAR_13].address) {
    FUNC_4(VAR_9 + VAR_11,
           VAR_7.tables + VAR_13,
           sizeof(struct acpi_table_desc));
    VAR_11++;
   }
  }

  if (VAR_7.flags & VAR_1) {
   FUNC_2(VAR_7.tables);
  }
 }

 VAR_7.tables = VAR_9;
 VAR_7.max_table_count = VAR_12;
 VAR_7.current_table_count = VAR_11;
 VAR_7.flags |= VAR_1;

 FUNC_5(VAR_5);
}
