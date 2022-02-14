
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu_domain {int dt_lock; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rk_iommu_domain*,int ,unsigned int) ;

__attribute__((used)) static size_t FUNC_4(struct rk_iommu_domain *VAR_1,
      u32 *VAR_2, dma_addr_t VAR_3,
      size_t VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = VAR_4 / VAR_0;

 FUNC_0(&VAR_1->dt_lock);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  u32 VAR_7 = VAR_2[VAR_5];
  if (!FUNC_2(VAR_7))
   break;

  VAR_2[VAR_5] = FUNC_1(VAR_7);
 }

 FUNC_3(VAR_1, VAR_3, VAR_5);

 return VAR_5 * VAR_0;
}
