
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int parent; } ;


 int FUNC_0 (struct acpi_table_header*,struct acpi_pptt_processor*,int*,int ,int ) ;
 struct acpi_pptt_processor* FUNC_1 (struct acpi_table_header*,int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_table_header *VAR_0,
        struct acpi_pptt_processor *VAR_1)
{
 int VAR_2 = 0;

 do {
  FUNC_0(VAR_0, VAR_1, &VAR_2, 0, 0);
  VAR_1 = FUNC_1(VAR_0, VAR_1->parent);
 } while (VAR_1);

 return VAR_2;
}
