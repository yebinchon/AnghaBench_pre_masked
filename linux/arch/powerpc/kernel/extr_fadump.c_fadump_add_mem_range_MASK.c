
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fadump_mrange_info {int mem_range_cnt; int max_mem_ranges; int name; struct fadump_memory_range* mem_ranges; } ;
struct fadump_memory_range {scalar_t__ base; scalar_t__ size; } ;


 int FUNC_0 (struct fadump_mrange_info*) ;
 int FUNC_1 (char*,int ,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct fadump_mrange_info *VAR_0,
           u64 VAR_1, u64 VAR_2)
{
 struct fadump_memory_range *VAR_3 = VAR_0->mem_ranges;
 bool VAR_4 = 0;
 u64 VAR_5, VAR_6;

 if (VAR_1 == VAR_2)
  return 0;





 if (VAR_0->mem_range_cnt) {
  VAR_5 = VAR_3[VAR_0->mem_range_cnt - 1].base;
  VAR_6 = VAR_3[VAR_0->mem_range_cnt - 1].size;

  if ((VAR_5 + VAR_6) == VAR_1)
   VAR_4 = 1;
 }
 if (!VAR_4) {

  if (VAR_0->mem_range_cnt == VAR_0->max_mem_ranges) {
   int VAR_7;

   VAR_7 = FUNC_0(VAR_0);
   if (VAR_7)
    return VAR_7;


   VAR_3 = VAR_0->mem_ranges;
  }

  VAR_5 = VAR_1;
  VAR_3[VAR_0->mem_range_cnt].base = VAR_5;
  VAR_0->mem_range_cnt++;
 }

 VAR_3[VAR_0->mem_range_cnt - 1].size = (VAR_2 - VAR_5);
 FUNC_1("%s_memory_range[%d] [%#016llx-%#016llx], %#llx bytes\n",
   VAR_0->name, (VAR_0->mem_range_cnt - 1),
   VAR_5, VAR_2 - 1, (VAR_2 - VAR_5));
 return 0;
}
