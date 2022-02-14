
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {size_t it_page_shift; } ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct iommu_table*,int ,unsigned int) ;

void FUNC_4(struct iommu_table *VAR_0, size_t VAR_1,
    void *VAR_2, dma_addr_t VAR_3)
{
 if (VAR_0) {
  unsigned int VAR_4;

  VAR_1 = FUNC_0(VAR_1);
  VAR_4 = VAR_1 >> VAR_0->it_page_shift;
  FUNC_3(VAR_0, VAR_3, VAR_4);
  VAR_1 = FUNC_0(VAR_1);
  FUNC_1((unsigned long)VAR_2, FUNC_2(VAR_1));
 }
}
