
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_domain {struct mtk_iommu_data* data; int pgt_pa; int pgt_va; int pgtlock; } ;
struct mtk_iommu_data {scalar_t__ base; int dev; struct mtk_iommu_domain* m4u_dom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtk_iommu_data *VAR_4)
{
 struct mtk_iommu_domain *VAR_5 = VAR_4->m4u_dom;

 FUNC_1(&VAR_5->pgtlock);

 VAR_5->pgt_va = FUNC_0(VAR_4->dev, VAR_2,
      &VAR_5->pgt_pa, VAR_1);
 if (!VAR_5->pgt_va)
  return -VAR_0;

 FUNC_2(VAR_5->pgt_pa, VAR_4->base + VAR_3);

 VAR_5->data = VAR_4;

 return 0;
}
