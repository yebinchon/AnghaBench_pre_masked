
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sysmmu_pte_t ;
struct TYPE_2__ {unsigned long aperture_end; int force_aperture; scalar_t__ aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct exynos_iommu_domain {short* lv2entcnt; struct iommu_domain domain; int * pgtable; int clients; int pgtablelock; int lock; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (unsigned long,int) ;
 scalar_t__ FUNC_6 (struct iommu_domain*) ;
 int FUNC_7 (struct iommu_domain*) ;
 int FUNC_8 (struct exynos_iommu_domain*) ;
 struct exynos_iommu_domain* FUNC_9 (int,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_12(unsigned VAR_10)
{
 struct exynos_iommu_domain *VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;


 FUNC_0(VAR_6 < 0 || !VAR_9);

 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return ((void*)0);

 if (VAR_10 == VAR_2) {
  if (FUNC_6(&VAR_11->domain) != 0)
   goto err_pgtable;
 } else if (VAR_10 != VAR_3) {
  goto err_pgtable;
 }

 VAR_11->pgtable = (sysmmu_pte_t *)FUNC_2(VAR_1, 2);
 if (!VAR_11->pgtable)
  goto err_dma_cookie;

 VAR_11->lv2entcnt = (short *)FUNC_2(VAR_1 | VAR_8, 1);
 if (!VAR_11->lv2entcnt)
  goto err_counter;


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
  VAR_11->pgtable[VAR_13] = VAR_7;

 VAR_12 = FUNC_3(VAR_9, VAR_11->pgtable, VAR_4,
    VAR_0);

 FUNC_0(VAR_12 != FUNC_11(VAR_11->pgtable));
 if (FUNC_4(VAR_9, VAR_12))
  goto err_lv2ent;

 FUNC_10(&VAR_11->lock);
 FUNC_10(&VAR_11->pgtablelock);
 FUNC_1(&VAR_11->clients);

 VAR_11->domain.geometry.aperture_start = 0;
 VAR_11->domain.geometry.aperture_end = ~0UL;
 VAR_11->domain.geometry.force_aperture = 1;

 return &VAR_11->domain;

err_lv2ent:
 FUNC_5((unsigned long)VAR_11->lv2entcnt, 1);
err_counter:
 FUNC_5((unsigned long)VAR_11->pgtable, 2);
err_dma_cookie:
 if (VAR_10 == VAR_2)
  FUNC_7(&VAR_11->domain);
err_pgtable:
 FUNC_8(VAR_11);
 return ((void*)0);
}
