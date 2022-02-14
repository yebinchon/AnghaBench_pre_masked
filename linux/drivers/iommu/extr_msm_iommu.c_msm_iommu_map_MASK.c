
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_priv {int pgtlock; TYPE_1__* iop; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* map ) (TYPE_1__*,unsigned long,int ,size_t,int) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*,unsigned long,int ,size_t,int) ;
 struct msm_priv* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_4(struct iommu_domain *VAR_0, unsigned long VAR_1,
    phys_addr_t VAR_2, size_t VAR_3, int VAR_4)
{
 struct msm_priv *VAR_5 = FUNC_3(VAR_0);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5->pgtlock, VAR_6);
 VAR_7 = VAR_5->iop->map(VAR_5->iop, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_5->pgtlock, VAR_6);

 return VAR_7;
}
