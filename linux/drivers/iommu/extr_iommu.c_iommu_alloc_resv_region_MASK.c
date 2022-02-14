
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_resv_region {size_t length; int prot; int type; int start; int list; } ;
typedef int phys_addr_t ;
typedef enum iommu_resv_type { ____Placeholder_iommu_resv_type } iommu_resv_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct iommu_resv_region* FUNC_1 (int,int ) ;

struct iommu_resv_region *FUNC_2(phys_addr_t VAR_1,
        size_t VAR_2, int VAR_3,
        enum iommu_resv_type VAR_4)
{
 struct iommu_resv_region *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->list);
 VAR_5->start = VAR_1;
 VAR_5->length = VAR_2;
 VAR_5->prot = VAR_3;
 VAR_5->type = VAR_4;
 return VAR_5;
}
