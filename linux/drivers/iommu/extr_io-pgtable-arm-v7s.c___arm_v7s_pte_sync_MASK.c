
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int iommu_dev; scalar_t__ coherent_walk; } ;
typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(arm_v7s_iopte *VAR_1, int VAR_2,
          struct io_pgtable_cfg *VAR_3)
{
 if (VAR_3->coherent_walk)
  return;

 FUNC_1(VAR_3->iommu_dev, FUNC_0(VAR_1),
       VAR_2 * sizeof(*VAR_1), VAR_0);
}
