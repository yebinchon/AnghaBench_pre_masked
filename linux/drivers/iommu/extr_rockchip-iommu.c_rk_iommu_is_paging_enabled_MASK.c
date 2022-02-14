
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int num_mmu; int * bases; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct rk_iommu *VAR_2)
{
 bool VAR_3 = 1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_mmu; VAR_4++)
  VAR_3 &= !!(FUNC_0(VAR_2->bases[VAR_4], VAR_0) &
        VAR_1);

 return VAR_3;
}
