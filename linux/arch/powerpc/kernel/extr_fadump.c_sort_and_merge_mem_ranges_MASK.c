
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct fadump_mrange_info {int mem_range_cnt; struct fadump_memory_range* mem_ranges; } ;
struct fadump_memory_range {scalar_t__ base; scalar_t__ size; } ;
struct TYPE_2__ {int mem_range_cnt; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fadump_mrange_info *VAR_1)
{
 struct fadump_memory_range *VAR_2;
 struct fadump_memory_range VAR_3;
 u64 VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 if (!VAR_0.mem_range_cnt)
  return;


 VAR_2 = VAR_1->mem_ranges;
 for (VAR_6 = 0; VAR_6 < VAR_1->mem_range_cnt; VAR_6++) {
  VAR_8 = VAR_6;
  for (VAR_7 = (VAR_6 + 1); VAR_7 < VAR_1->mem_range_cnt; VAR_7++) {
   if (VAR_2[VAR_8].base > VAR_2[VAR_7].base)
    VAR_8 = VAR_7;
  }
  if (VAR_8 != VAR_6) {
   VAR_3 = VAR_2[VAR_8];
   VAR_2[VAR_8] = VAR_2[VAR_6];
   VAR_2[VAR_6] = VAR_3;
  }
 }


 VAR_8 = 0;
 for (VAR_6 = 1; VAR_6 < VAR_1->mem_range_cnt; VAR_6++) {
  VAR_4 = VAR_2[VAR_6-1].base;
  VAR_5 = VAR_2[VAR_6-1].size;
  if (VAR_2[VAR_6].base == (VAR_4 + VAR_5))
   VAR_2[VAR_8].size += VAR_2[VAR_6].size;
  else {
   VAR_8++;
   if (VAR_6 == VAR_8)
    continue;

   VAR_2[VAR_8] = VAR_2[VAR_6];
  }
 }
 VAR_1->mem_range_cnt = VAR_8 + 1;
}
