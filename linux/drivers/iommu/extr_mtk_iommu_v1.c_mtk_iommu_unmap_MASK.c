
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_iommu_domain {int data; int pgtlock; int * pgt_va; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned long,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mtk_iommu_domain* FUNC_4 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_5(struct iommu_domain *VAR_1,
         unsigned long VAR_2, size_t VAR_3,
         struct iommu_iotlb_gather *VAR_4)
{
 struct mtk_iommu_domain *VAR_5 = FUNC_4(VAR_1);
 unsigned long VAR_6;
 u32 *VAR_7 = VAR_5->pgt_va + (VAR_2 >> VAR_0);
 unsigned int VAR_8 = VAR_3 >> VAR_0;

 FUNC_2(&VAR_5->pgtlock, VAR_6);
 FUNC_0(VAR_7, 0, VAR_8 * sizeof(u32));
 FUNC_3(&VAR_5->pgtlock, VAR_6);

 FUNC_1(VAR_5->data, VAR_2, VAR_3);

 return VAR_3;
}
