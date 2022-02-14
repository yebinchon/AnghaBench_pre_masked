
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int revision; } ;
struct acpi_pptt_processor {int flags; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct acpi_pptt_processor* FUNC_1 (struct acpi_table_header*,int) ;
 int FUNC_2 (int ,int ,struct acpi_table_header**) ;
 int FUNC_3 () ;
 int FUNC_4 (struct acpi_table_header*) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2, int VAR_3, u32 VAR_4)
{
 struct acpi_table_header *VAR_5;
 acpi_status VAR_6;
 u32 VAR_7 = FUNC_5(VAR_2);
 struct acpi_pptt_processor *VAR_8 = ((void*)0);
 int VAR_9 = -VAR_1;

 VAR_6 = FUNC_2(VAR_0, 0, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_3();
  return VAR_9;
 }

 if (VAR_5->revision >= VAR_3)
  VAR_8 = FUNC_1(VAR_5, VAR_7);

 if (VAR_8)
  VAR_9 = (VAR_8->flags & VAR_4) != 0;

 FUNC_4(VAR_5);

 return VAR_9;
}
