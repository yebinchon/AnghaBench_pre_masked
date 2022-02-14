
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int dummy; } ;


 int FUNC_0 (struct acpi_table_header*,struct acpi_pptt_processor*) ;
 struct acpi_pptt_processor* FUNC_1 (struct acpi_table_header*,int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_table_header *VAR_0,
      u32 VAR_1)
{
 int VAR_2 = 0;
 struct acpi_pptt_processor *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  VAR_2 = FUNC_0(VAR_0, VAR_3);

 return VAR_2;
}
