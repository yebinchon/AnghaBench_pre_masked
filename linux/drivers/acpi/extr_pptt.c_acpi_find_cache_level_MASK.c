
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_subtable_header {int dummy; } ;
struct acpi_pptt_processor {int dummy; } ;
struct acpi_pptt_cache {int dummy; } ;


 struct acpi_subtable_header* FUNC_0 (struct acpi_table_header*,struct acpi_pptt_processor*,int) ;
 int FUNC_1 (struct acpi_table_header*,int,struct acpi_subtable_header*,struct acpi_pptt_cache**,int,int) ;

__attribute__((used)) static struct acpi_pptt_cache *FUNC_2(struct acpi_table_header *VAR_0,
           struct acpi_pptt_processor *VAR_1,
           int *VAR_2, int VAR_3,
           int VAR_4)
{
 struct acpi_subtable_header *VAR_5;
 int VAR_6 = *VAR_2;
 int VAR_7 = 0;
 struct acpi_pptt_cache *VAR_8 = ((void*)0);
 int VAR_9;


 while ((VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_7))) {
  VAR_7++;

  VAR_9 = FUNC_1(VAR_0, *VAR_2,
         VAR_5, &VAR_8, VAR_3, VAR_4);





  if (VAR_6 < VAR_9)
   VAR_6 = VAR_9;
 }
 if (VAR_6 > *VAR_2)
  *VAR_2 = VAR_6;

 return VAR_8;
}
