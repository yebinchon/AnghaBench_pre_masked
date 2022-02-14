
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int pcie_idx_lock; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct amdgpu_device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_2->pcie_idx_lock, VAR_5);
 FUNC_0(VAR_1, ((VAR_3) & 0xffff));
 FUNC_0(VAR_0, (VAR_4));
 FUNC_2(&VAR_2->pcie_idx_lock, VAR_5);
}
