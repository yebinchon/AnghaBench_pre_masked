
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpu_cacheinfo {unsigned int num_leaves; struct cacheinfo* info_list; } ;
struct cacheinfo {int level; int type; } ;
struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int dummy; } ;
struct acpi_pptt_cache {int dummy; } ;


 struct acpi_pptt_cache* FUNC_0 (struct acpi_table_header*,int ,int ,int ,struct acpi_pptt_processor**) ;
 int FUNC_1 (unsigned int) ;
 struct cpu_cacheinfo* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,struct acpi_pptt_cache*,struct acpi_pptt_processor*) ;
 int FUNC_4 (struct cacheinfo*,struct acpi_pptt_cache*,struct acpi_pptt_processor*) ;

__attribute__((used)) static void FUNC_5(struct acpi_table_header *VAR_0,
     unsigned int VAR_1)
{
 struct acpi_pptt_cache *VAR_2;
 struct cpu_cacheinfo *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = FUNC_1(VAR_1);
 struct cacheinfo *VAR_5;
 unsigned int VAR_6 = 0;
 struct acpi_pptt_processor *VAR_7 = ((void*)0);

 while (VAR_6 < FUNC_2(VAR_1)->num_leaves) {
  VAR_5 = VAR_3->info_list + VAR_6;
  VAR_2 = FUNC_0(VAR_0, VAR_4,
         VAR_5->type,
         VAR_5->level,
         &VAR_7);
  FUNC_3("found = %p %p\n", VAR_2, VAR_7);
  if (VAR_2)
   FUNC_4(VAR_5,
      VAR_2,
      VAR_7);

  VAR_6++;
 }
}
