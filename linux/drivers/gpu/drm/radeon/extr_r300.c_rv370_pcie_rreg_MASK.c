
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int pcie_idx_lock; int pcie_reg_mask; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

uint32_t FUNC_4(struct radeon_device *VAR_2, uint32_t VAR_3)
{
 unsigned long VAR_4;
 uint32_t VAR_5;

 FUNC_2(&VAR_2->pcie_idx_lock, VAR_4);
 FUNC_1(VAR_1, ((VAR_3) & VAR_2->pcie_reg_mask));
 VAR_5 = FUNC_0(VAR_0);
 FUNC_3(&VAR_2->pcie_idx_lock, VAR_4);
 return VAR_5;
}
