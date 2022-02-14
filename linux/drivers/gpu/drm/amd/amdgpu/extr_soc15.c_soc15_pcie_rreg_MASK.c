
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_device {int pcie_idx_lock; TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {unsigned long (* get_pcie_index_offset ) (struct amdgpu_device*) ;unsigned long (* get_pcie_data_offset ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (struct amdgpu_device*) ;
 unsigned long FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_6(struct amdgpu_device *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;
 u32 VAR_5;
 VAR_3 = VAR_0->nbio_funcs->get_pcie_index_offset(VAR_0);
 VAR_4 = VAR_0->nbio_funcs->get_pcie_data_offset(VAR_0);

 FUNC_2(&VAR_0->pcie_idx_lock, VAR_2);
 FUNC_1(VAR_3, VAR_1);
 (void)FUNC_0(VAR_3);
 VAR_5 = FUNC_0(VAR_4);
 FUNC_3(&VAR_0->pcie_idx_lock, VAR_2);
 return VAR_5;
}
