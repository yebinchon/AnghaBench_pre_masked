
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct io_pgtable_ops {int (* map ) (struct io_pgtable_ops*,unsigned long,int ,size_t,int) ;} ;
typedef int phys_addr_t ;
struct TYPE_2__ {struct io_pgtable_ops* pgtbl_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_pgtable_ops*,unsigned long,int ,size_t,int) ;
 TYPE_1__* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_1, unsigned long VAR_2,
   phys_addr_t VAR_3, size_t VAR_4, int VAR_5)
{
 struct io_pgtable_ops *VAR_6 = FUNC_1(VAR_1)->pgtbl_ops;

 if (!VAR_6)
  return -VAR_0;

 return VAR_6->map(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}
