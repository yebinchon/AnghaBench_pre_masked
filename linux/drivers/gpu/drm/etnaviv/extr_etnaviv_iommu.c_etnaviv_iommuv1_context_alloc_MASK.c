
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_iommu_context {struct etnaviv_iommu_global* global; int mm; int mappings; int lock; int refcount; } ;
struct etnaviv_iommuv1_context {struct etnaviv_iommu_context base; int pgtable_cpu; int pgtable_dma; } ;
struct TYPE_2__ {struct etnaviv_iommu_context* shared_context; } ;
struct etnaviv_iommu_global {int lock; TYPE_1__ v1; int bad_page_dma; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct etnaviv_iommu_context*) ;
 int FUNC_4 (struct etnaviv_iommuv1_context*) ;
 int FUNC_5 (int *) ;
 struct etnaviv_iommuv1_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct etnaviv_iommu_context *
FUNC_11(struct etnaviv_iommu_global *VAR_5)
{
 struct etnaviv_iommuv1_context *VAR_6;
 struct etnaviv_iommu_context *VAR_7;

 FUNC_9(&VAR_5->lock);






 if (VAR_5->v1.shared_context) {
  VAR_7 = VAR_5->v1.shared_context;
  FUNC_3(VAR_7);
  FUNC_10(&VAR_5->lock);
  return VAR_7;
 }

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  FUNC_10(&VAR_5->lock);
  return ((void*)0);
 }

 VAR_6->pgtable_cpu = FUNC_1(VAR_5->dev, VAR_3,
            &VAR_6->pgtable_dma,
            VAR_0);
 if (!VAR_6->pgtable_cpu)
  goto out_free;

 FUNC_7(VAR_6->pgtable_cpu, VAR_5->bad_page_dma, VAR_2);

 VAR_7 = &VAR_6->base;
 VAR_7->global = VAR_5;
 FUNC_5(&VAR_7->refcount);
 FUNC_8(&VAR_7->lock);
 FUNC_0(&VAR_7->mappings);
 FUNC_2(&VAR_7->mm, VAR_1, VAR_2 * VAR_4);
 VAR_7->global->v1.shared_context = VAR_7;

 FUNC_10(&VAR_5->lock);

 return VAR_7;

out_free:
 FUNC_10(&VAR_5->lock);
 FUNC_4(VAR_6);
 return ((void*)0);
}
