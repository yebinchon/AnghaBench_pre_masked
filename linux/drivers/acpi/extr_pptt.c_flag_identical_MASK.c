
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int revision; } ;
struct acpi_pptt_processor {int flags; int parent; } ;


 int VAR_0 ;
 struct acpi_pptt_processor* FUNC_0 (struct acpi_table_header*,int ) ;

__attribute__((used)) static bool FUNC_1(struct acpi_table_header *VAR_1,
      struct acpi_pptt_processor *VAR_2)
{
 struct acpi_pptt_processor *VAR_3;


 if (VAR_1->revision < 2)
  return 0;


 if (VAR_2->flags & VAR_0) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->parent);
  if (!(VAR_3 && VAR_3->flags & VAR_0))
   return 1;
 }

 return 0;
}
