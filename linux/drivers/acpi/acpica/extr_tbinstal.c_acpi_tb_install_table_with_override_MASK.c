
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct acpi_table_desc {TYPE_1__* pointer; int address; int flags; } ;
typedef int acpi_status ;
struct TYPE_5__ {int * tables; } ;
struct TYPE_4__ {int revision; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (size_t*,int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (struct acpi_table_desc*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct acpi_table_desc *VAR_2,
        u8 VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 acpi_status VAR_6;

 VAR_6 = FUNC_1(&VAR_5, ((void*)0));
 if (FUNC_0(VAR_6)) {
  return;
 }
 if (VAR_3) {
  FUNC_3(VAR_2);
 }

 FUNC_2(&VAR_1.tables[VAR_5],
          VAR_2->address,
          VAR_2->flags,
          VAR_2->pointer);

 FUNC_4(VAR_2->address,
       VAR_2->pointer);



 *VAR_4 = VAR_5;



 if (VAR_5 == VAR_0) {
  FUNC_5(VAR_2->pointer->revision);
 }
}
