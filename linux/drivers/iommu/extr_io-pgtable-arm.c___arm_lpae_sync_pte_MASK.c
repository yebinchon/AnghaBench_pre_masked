
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int iommu_dev; } ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(arm_lpae_iopte *VAR_1,
    struct io_pgtable_cfg *VAR_2)
{
 FUNC_1(VAR_2->iommu_dev, FUNC_0(VAR_1),
       sizeof(*VAR_1), VAR_0);
}
