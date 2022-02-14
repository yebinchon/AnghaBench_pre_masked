
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int num_mmu; int * bases; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct rk_iommu *VAR_1)
{
 bool VAR_2 = 1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_mmu; VAR_3++)
  VAR_2 &= FUNC_0(VAR_1->bases[VAR_3], VAR_0) == 0;

 return VAR_2;
}
