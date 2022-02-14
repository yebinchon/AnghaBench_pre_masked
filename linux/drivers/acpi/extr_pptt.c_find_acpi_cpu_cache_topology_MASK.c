
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int dummy; } ;
struct acpi_pptt_cache {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_pptt_processor*,struct acpi_table_header*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_pptt_cache* FUNC_2 (struct acpi_table_header*,int ,int ,int,struct acpi_pptt_processor**) ;
 int FUNC_3 (int ,int ,struct acpi_table_header**) ;
 int FUNC_4 () ;
 int FUNC_5 (struct acpi_table_header*) ;
 int FUNC_6 (unsigned int) ;

int FUNC_7(unsigned int VAR_3, int VAR_4)
{
 struct acpi_table_header *VAR_5;
 struct acpi_pptt_cache *VAR_6;
 acpi_status VAR_7;
 u32 VAR_8 = FUNC_6(VAR_3);
 struct acpi_pptt_processor *VAR_9 = ((void*)0);
 int VAR_10 = -1;

 VAR_7 = FUNC_3(VAR_0, 0, &VAR_5);
 if (FUNC_0(VAR_7)) {
  FUNC_4();
  return -VAR_2;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_8,
        VAR_1,
        VAR_4,
        &VAR_9);
 if (VAR_6)
  VAR_10 = FUNC_1(VAR_9, VAR_5);

 FUNC_5(VAR_5);

 return VAR_10;
}
