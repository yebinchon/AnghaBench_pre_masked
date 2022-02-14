
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {size_t seq_id; int domain_ids; int lock; } ;
struct dmar_domain {scalar_t__* iommu_refcnt; int iommu_count; int* iommu_did; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dmar_domain*) ;
 int FUNC_3 (struct intel_iommu*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct dmar_domain *VAR_1,
          struct intel_iommu *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(&VAR_0);
 FUNC_0(&VAR_2->lock);

 VAR_1->iommu_refcnt[VAR_2->seq_id] -= 1;
 VAR_4 = --VAR_1->iommu_count;
 if (VAR_1->iommu_refcnt[VAR_2->seq_id] == 0) {
  VAR_3 = VAR_1->iommu_did[VAR_2->seq_id];
  FUNC_1(VAR_3, VAR_2->domain_ids);
  FUNC_3(VAR_2, VAR_3, ((void*)0));

  FUNC_2(VAR_1);
  VAR_1->iommu_did[VAR_2->seq_id] = 0;
 }

 return VAR_4;
}
