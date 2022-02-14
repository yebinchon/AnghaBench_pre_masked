
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {int it_blocksize; unsigned long it_base; unsigned int it_page_shift; int it_offset; int it_size; int it_type; scalar_t__ it_busno; scalar_t__ it_index; } ;


 int VAR_0 ;

void FUNC_0(struct iommu_table *VAR_1,
  void *VAR_2, u64 VAR_3,
  u64 VAR_4, unsigned int VAR_5)
{
 VAR_1->it_blocksize = 16;
 VAR_1->it_base = (unsigned long)VAR_2;
 VAR_1->it_page_shift = VAR_5;
 VAR_1->it_offset = VAR_4 >> VAR_1->it_page_shift;
 VAR_1->it_index = 0;
 VAR_1->it_size = VAR_3 >> 3;
 VAR_1->it_busno = 0;
 VAR_1->it_type = VAR_0;
}
