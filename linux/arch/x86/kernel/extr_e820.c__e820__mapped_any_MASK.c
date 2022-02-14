
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct e820_table {int nr_entries; struct e820_entry* entries; } ;
struct e820_entry {int type; scalar_t__ addr; scalar_t__ size; } ;
typedef enum e820_type { ____Placeholder_e820_type } e820_type ;



__attribute__((used)) static bool FUNC_0(struct e820_table *VAR_0,
         u64 VAR_1, u64 VAR_2, enum e820_type VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->nr_entries; VAR_4++) {
  struct e820_entry *VAR_5 = &VAR_0->entries[VAR_4];

  if (VAR_3 && VAR_5->type != VAR_3)
   continue;
  if (VAR_5->addr >= VAR_2 || VAR_5->addr + VAR_5->size <= VAR_1)
   continue;
  return 1;
 }
 return 0;
}
