
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iommu_table {size_t it_page_shift; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 struct page* FUNC_1 (int,int ,unsigned int) ;
 int FUNC_2 (struct device*,char*,size_t) ;
 int FUNC_3 (unsigned long,unsigned int) ;
 unsigned int FUNC_4 (size_t,struct iommu_table*) ;
 unsigned int FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (struct device*,struct iommu_table*,void*,unsigned int,int ,unsigned long,unsigned int,int ) ;
 int FUNC_7 (void*,int ,size_t) ;
 void* FUNC_8 (struct page*) ;

void *FUNC_9(struct device *VAR_3, struct iommu_table *VAR_4,
      size_t VAR_5, dma_addr_t *VAR_6,
      unsigned long VAR_7, gfp_t VAR_8, int VAR_9)
{
 void *VAR_10 = ((void*)0);
 dma_addr_t VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13, VAR_14;
 struct page *VAR_15;

 VAR_5 = FUNC_0(VAR_5);
 VAR_12 = FUNC_5(VAR_5);






 if (VAR_12 >= VAR_2) {
  FUNC_2(VAR_3, "iommu_alloc_consistent size too large: 0x%lx\n",
    VAR_5);
  return ((void*)0);
 }

 if (!VAR_4)
  return ((void*)0);


 VAR_15 = FUNC_1(VAR_9, VAR_8, VAR_12);
 if (!VAR_15)
  return ((void*)0);
 VAR_10 = FUNC_8(VAR_15);
 FUNC_7(VAR_10, 0, VAR_5);


 VAR_13 = VAR_5 >> VAR_4->it_page_shift;
 VAR_14 = FUNC_4(VAR_5, VAR_4);
 VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_10, VAR_13, VAR_0,
         VAR_7 >> VAR_4->it_page_shift, VAR_14, 0);
 if (VAR_11 == VAR_1) {
  FUNC_3((unsigned long)VAR_10, VAR_12);
  return ((void*)0);
 }
 *VAR_6 = VAR_11;
 return VAR_10;
}
