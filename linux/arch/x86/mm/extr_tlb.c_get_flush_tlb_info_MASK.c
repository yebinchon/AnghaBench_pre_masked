
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mm_struct {int dummy; } ;
struct flush_tlb_info {unsigned long start; unsigned long end; unsigned int stride_shift; int freed_tables; int new_tlb_gen; struct mm_struct* mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct flush_tlb_info* FUNC_2 (int *) ;

__attribute__((used)) static inline struct flush_tlb_info *FUNC_3(struct mm_struct *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4,
   unsigned int VAR_5, bool VAR_6,
   u64 VAR_7)
{
 struct flush_tlb_info *VAR_8 = FUNC_2(&VAR_0);
 VAR_8->start = VAR_3;
 VAR_8->end = VAR_4;
 VAR_8->mm = VAR_2;
 VAR_8->stride_shift = VAR_5;
 VAR_8->freed_tables = VAR_6;
 VAR_8->new_tlb_gen = VAR_7;

 return VAR_8;
}
