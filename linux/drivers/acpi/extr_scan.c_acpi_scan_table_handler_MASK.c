
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_table_events_work {int work; scalar_t__ event; void* table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_table_events_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(u32 VAR_4, void *VAR_5, void *VAR_6)
{
 struct acpi_table_events_work *VAR_7;

 if (!VAR_2)
  return;

 if (VAR_4 != VAR_0)
  return;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return;

 FUNC_0(&VAR_7->work, VAR_3);
 VAR_7->table = VAR_5;
 VAR_7->event = VAR_4;

 FUNC_2(&VAR_7->work);
}
