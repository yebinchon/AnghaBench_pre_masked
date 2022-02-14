
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int force_aperture; int aperture_end; scalar_t__ aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct rk_iommu_domain {struct iommu_domain domain; int * dt; int iommus; int dt_lock; int iommus_lock; int dt_dma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 struct rk_iommu_domain* FUNC_3 (int ,int,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct iommu_domain*) ;
 int FUNC_9 (struct iommu_domain*) ;
 int FUNC_10 (struct rk_iommu_domain*,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_12(unsigned VAR_8)
{
 struct rk_iommu_domain *VAR_9;

 if (VAR_8 != VAR_4 && VAR_8 != VAR_3)
  return ((void*)0);

 if (!VAR_7)
  return ((void*)0);

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_8 == VAR_3 &&
     FUNC_8(&VAR_9->domain))
  return ((void*)0);






 VAR_9->dt = (u32 *)FUNC_7(VAR_2 | VAR_1);
 if (!VAR_9->dt)
  goto err_put_cookie;

 VAR_9->dt_dma = FUNC_4(VAR_7, VAR_9->dt,
        VAR_6, VAR_0);
 if (FUNC_5(VAR_7, VAR_9->dt_dma)) {
  FUNC_2(VAR_7, "DMA map error for DT\n");
  goto err_free_dt;
 }

 FUNC_10(VAR_9, VAR_9->dt_dma, VAR_5);

 FUNC_11(&VAR_9->iommus_lock);
 FUNC_11(&VAR_9->dt_lock);
 FUNC_1(&VAR_9->iommus);

 VAR_9->domain.geometry.aperture_start = 0;
 VAR_9->domain.geometry.aperture_end = FUNC_0(32);
 VAR_9->domain.geometry.force_aperture = 1;

 return &VAR_9->domain;

err_free_dt:
 FUNC_6((unsigned long)VAR_9->dt);
err_put_cookie:
 if (VAR_8 == VAR_3)
  FUNC_9(&VAR_9->domain);

 return ((void*)0);
}
