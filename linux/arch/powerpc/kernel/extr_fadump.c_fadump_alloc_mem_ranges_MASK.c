
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fadump_mrange_info {int mem_ranges_sz; int max_mem_ranges; struct fadump_memory_range* mem_ranges; int name; } ;
struct fadump_memory_range {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fadump_mrange_info*) ;
 struct fadump_memory_range* FUNC_1 (struct fadump_memory_range*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct fadump_mrange_info *VAR_3)
{
 struct fadump_memory_range *VAR_4;
 u64 VAR_5;

 VAR_5 = VAR_3->mem_ranges_sz + VAR_2;
 FUNC_2("Allocating %llu bytes of memory for %s memory ranges\n",
   VAR_5, VAR_3->name);

 VAR_4 = FUNC_1(VAR_3->mem_ranges, VAR_5, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_3("Insufficient memory for setting up %s memory ranges\n",
         VAR_3->name);
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 VAR_3->mem_ranges = VAR_4;
 VAR_3->mem_ranges_sz = VAR_5;
 VAR_3->max_mem_ranges = (VAR_5 /
           sizeof(struct fadump_memory_range));
 return 0;
}
