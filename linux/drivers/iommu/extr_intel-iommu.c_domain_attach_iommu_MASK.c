
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {size_t seq_id; int node; int domain_ids; int name; int cap; int lock; } ;
struct dmar_domain {int* iommu_refcnt; int iommu_count; int* iommu_did; int nid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct dmar_domain*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct intel_iommu*,int,struct dmar_domain*) ;

__attribute__((used)) static int FUNC_7(struct dmar_domain *VAR_2,
          struct intel_iommu *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(&VAR_1);
 FUNC_0(&VAR_3->lock);

 VAR_2->iommu_refcnt[VAR_3->seq_id] += 1;
 VAR_2->iommu_count += 1;
 if (VAR_2->iommu_refcnt[VAR_3->seq_id] == 1) {
  VAR_4 = FUNC_1(VAR_3->cap);
  VAR_5 = FUNC_3(VAR_3->domain_ids, VAR_4);

  if (VAR_5 >= VAR_4) {
   FUNC_4("%s: No free domain ids\n", VAR_3->name);
   VAR_2->iommu_refcnt[VAR_3->seq_id] -= 1;
   VAR_2->iommu_count -= 1;
   return -VAR_0;
  }

  FUNC_5(VAR_5, VAR_3->domain_ids);
  FUNC_6(VAR_3, VAR_5, VAR_2);

  VAR_2->iommu_did[VAR_3->seq_id] = VAR_5;
  VAR_2->nid = VAR_3->node;

  FUNC_2(VAR_2);
 }

 return 0;
}
