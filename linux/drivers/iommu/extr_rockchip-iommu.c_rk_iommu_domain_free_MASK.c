
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu_domain {int domain; int * dt; int dt_dma; int iommus; } ;
struct iommu_domain {scalar_t__ type; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct rk_iommu_domain* FUNC_8 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_9(struct iommu_domain *VAR_5)
{
 struct rk_iommu_domain *VAR_6 = FUNC_8(VAR_5);
 int VAR_7;

 FUNC_0(!FUNC_4(&VAR_6->iommus));

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  u32 VAR_8 = VAR_6->dt[VAR_7];
  if (FUNC_6(VAR_8)) {
   phys_addr_t VAR_9 = FUNC_7(VAR_8);
   u32 *VAR_10 = FUNC_5(VAR_9);
   FUNC_1(VAR_4, VAR_9,
      VAR_3, VAR_0);
   FUNC_2((unsigned long)VAR_10);
  }
 }

 FUNC_1(VAR_4, VAR_6->dt_dma,
    VAR_3, VAR_0);
 FUNC_2((unsigned long)VAR_6->dt);

 if (VAR_5->type == VAR_1)
  FUNC_3(&VAR_6->domain);
}
