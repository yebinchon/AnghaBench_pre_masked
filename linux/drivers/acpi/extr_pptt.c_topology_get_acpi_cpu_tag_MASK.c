
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int flags; int acpi_processor_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_pptt_processor*,struct acpi_table_header*) ;
 int VAR_1 ;
 struct acpi_pptt_processor* FUNC_1 (struct acpi_table_header*,int ) ;
 struct acpi_pptt_processor* FUNC_2 (struct acpi_table_header*,struct acpi_pptt_processor*,int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_table_header *VAR_2,
         unsigned int VAR_3, int VAR_4, int VAR_5)
{
 struct acpi_pptt_processor *VAR_6;
 u32 VAR_7 = FUNC_3(VAR_3);

 VAR_6 = FUNC_1(VAR_2, VAR_7);
 if (VAR_6) {
  VAR_6 = FUNC_2(VAR_2, VAR_6,
         VAR_4, VAR_5);






  if (VAR_4 == 0 ||
      VAR_6->flags & VAR_0)
   return VAR_6->acpi_processor_id;
  return FUNC_0(VAR_6, VAR_2);
 }
 FUNC_4("PPTT table found, but unable to locate core %d (%d)\n",
      VAR_3, VAR_7);
 return -VAR_1;
}
