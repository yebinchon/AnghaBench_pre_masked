
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int parent; } ;
struct acpi_pptt_cache {int dummy; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 int FUNC_0 (int) ;
 struct acpi_pptt_cache* FUNC_1 (struct acpi_table_header*,struct acpi_pptt_processor*,int*,unsigned int,int ) ;
 struct acpi_pptt_processor* FUNC_2 (struct acpi_table_header*,int ) ;
 struct acpi_pptt_processor* FUNC_3 (struct acpi_table_header*,int ) ;
 int FUNC_4 (char*,int ,unsigned int,int ) ;

__attribute__((used)) static struct acpi_pptt_cache *FUNC_5(struct acpi_table_header *VAR_0,
          u32 VAR_1,
          enum cache_type VAR_2,
          unsigned int VAR_3,
          struct acpi_pptt_processor **VAR_4)
{
 int VAR_5 = 0;
 struct acpi_pptt_cache *VAR_6 = ((void*)0);
 struct acpi_pptt_processor *VAR_7;
 u8 VAR_8 = FUNC_0(VAR_2);

 FUNC_4("Looking for CPU %d's level %d cache type %d\n",
   VAR_1, VAR_3, VAR_8);

 VAR_7 = FUNC_2(VAR_0, VAR_1);

 while (VAR_7 && !VAR_6) {
  VAR_6 = FUNC_1(VAR_0, VAR_7,
           &VAR_5, VAR_3, VAR_8);
  *VAR_4 = VAR_7;
  VAR_7 = FUNC_3(VAR_0, VAR_7->parent);
 }

 return VAR_6;
}
