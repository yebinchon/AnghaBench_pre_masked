
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_iommu_domain {int pgtlock; TYPE_1__* iop; } ;
struct mtk_iommu_data {scalar_t__ enable_4GB; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* map ) (TYPE_1__*,unsigned long,int ,size_t,int) ;} ;


 int FUNC_0 (int) ;
 struct mtk_iommu_data* FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,unsigned long,int ,size_t,int) ;
 struct mtk_iommu_domain* FUNC_5 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_6(struct iommu_domain *VAR_0, unsigned long VAR_1,
    phys_addr_t VAR_2, size_t VAR_3, int VAR_4)
{
 struct mtk_iommu_domain *VAR_5 = FUNC_5(VAR_0);
 struct mtk_iommu_data *VAR_6 = FUNC_1();
 unsigned long VAR_7;
 int VAR_8;


 if (VAR_6->enable_4GB)
  VAR_2 |= FUNC_0(32);

 FUNC_2(&VAR_5->pgtlock, VAR_7);
 VAR_8 = VAR_5->iop->map(VAR_5->iop, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_5->pgtlock, VAR_7);

 return VAR_8;
}
