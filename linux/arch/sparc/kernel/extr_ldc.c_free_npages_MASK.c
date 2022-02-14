
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ldc_iommu {int iommu_map_table; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int *,int,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int,struct ldc_iommu*) ;
 int FUNC_3 (struct ldc_iommu*,unsigned long,int,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2, struct ldc_iommu *VAR_3,
   u64 VAR_4, u64 VAR_5)
{
 unsigned long VAR_6, VAR_7;

 VAR_6 = FUNC_0(((VAR_4 & ~VAR_0) + VAR_5)) >> VAR_1;

 VAR_7 = FUNC_2(VAR_4, VAR_3);
 FUNC_3(VAR_3, VAR_2, VAR_4, VAR_7, VAR_6);
 FUNC_1(&VAR_3->iommu_map_table, VAR_4, VAR_6, VAR_7);
}
