
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu_domain {int dt_lock; } ;
typedef size_t phys_addr_t ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,unsigned int*,size_t*,size_t*,int) ;
 int FUNC_2 (struct rk_iommu_domain*,int *,unsigned int,unsigned int) ;
 int FUNC_3 (struct rk_iommu_domain*,unsigned int,size_t) ;
 int FUNC_4 (size_t,int) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (struct rk_iommu_domain*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct rk_iommu_domain *VAR_2, u32 *VAR_3,
        dma_addr_t VAR_4, dma_addr_t VAR_5,
        phys_addr_t VAR_6, size_t VAR_7, int VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_7 / VAR_1;
 phys_addr_t VAR_11;

 FUNC_0(&VAR_2->dt_lock);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  u32 VAR_12 = VAR_3[VAR_9];

  if (FUNC_5(VAR_12))
   goto unwind;

  VAR_3[VAR_9] = FUNC_4(VAR_6, VAR_8);

  VAR_6 += VAR_1;
 }

 FUNC_7(VAR_2, VAR_4, VAR_10);







 FUNC_3(VAR_2, VAR_5, VAR_7);

 return 0;
unwind:

 FUNC_2(VAR_2, VAR_3, VAR_4,
       VAR_9 * VAR_1);

 VAR_5 += VAR_9 * VAR_1;
 VAR_11 = FUNC_6(VAR_3[VAR_9]);
 FUNC_1("iova: %pad already mapped to %pa cannot remap to phys: %pa prot: %#x\n",
        &VAR_5, &VAR_11, &VAR_6, VAR_8);

 return -VAR_0;
}
