
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct equiv_cpu_table {unsigned int num_entries; struct equiv_cpu_entry* entry; } ;
struct equiv_cpu_entry {scalar_t__ installed_cpu; int equiv_cpu; } ;



__attribute__((used)) static u16 FUNC_0(struct equiv_cpu_table *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0 || !VAR_0->num_entries)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_entries; VAR_2++) {
  struct equiv_cpu_entry *VAR_3 = &VAR_0->entry[VAR_2];

  if (VAR_1 == VAR_3->installed_cpu)
   return VAR_3->equiv_cpu;

  VAR_3++;
 }
 return 0;
}
