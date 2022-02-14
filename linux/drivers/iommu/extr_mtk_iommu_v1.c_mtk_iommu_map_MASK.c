
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_iommu_domain {int* pgt_va; int data; int pgtlock; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned long,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mtk_iommu_domain* FUNC_4 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_5(struct iommu_domain *VAR_5, unsigned long VAR_6,
    phys_addr_t VAR_7, size_t VAR_8, int VAR_9)
{
 struct mtk_iommu_domain *VAR_10 = FUNC_4(VAR_5);
 unsigned int VAR_11 = VAR_8 >> VAR_3;
 unsigned long VAR_12;
 unsigned int VAR_13;
 u32 *VAR_14 = VAR_10->pgt_va + (VAR_6 >> VAR_3);
 u32 VAR_15 = (u32)VAR_7;
 int VAR_16 = 0;

 FUNC_2(&VAR_10->pgtlock, VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  if (VAR_14[VAR_13]) {
   FUNC_0(VAR_14, 0, VAR_13 * sizeof(u32));
   break;
  }
  VAR_14[VAR_13] = VAR_15 | VAR_2 | VAR_1;
  VAR_15 += VAR_4;
  VAR_16 += VAR_4;
 }

 FUNC_3(&VAR_10->pgtlock, VAR_12);

 FUNC_1(VAR_10->data, VAR_6, VAR_8);

 return VAR_16 == VAR_8 ? 0 : -VAR_0;
}
