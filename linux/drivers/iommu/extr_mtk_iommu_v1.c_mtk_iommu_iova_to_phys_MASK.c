
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_domain {int* pgt_va; int pgtlock; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct mtk_iommu_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_3(struct iommu_domain *VAR_2,
       dma_addr_t VAR_3)
{
 struct mtk_iommu_domain *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 phys_addr_t VAR_6;

 FUNC_0(&VAR_4->pgtlock, VAR_5);
 VAR_6 = *(VAR_4->pgt_va + (VAR_3 >> VAR_0));
 VAR_6 = VAR_6 & (~(VAR_1 - 1));
 FUNC_1(&VAR_4->pgtlock, VAR_5);

 return VAR_6;
}
