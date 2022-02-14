
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct iommu_domain {TYPE_1__* ops; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* domain_window_enable ) (struct iommu_domain*,int ,int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_domain*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct iommu_domain *VAR_1, u32 VAR_2,
          phys_addr_t VAR_3, u64 VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_1->ops->domain_window_enable == ((void*)0)))
  return -VAR_0;

 return VAR_1->ops->domain_window_enable(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5);
}
