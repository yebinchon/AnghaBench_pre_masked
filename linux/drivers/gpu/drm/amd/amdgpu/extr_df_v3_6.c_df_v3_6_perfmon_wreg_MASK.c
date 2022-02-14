
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_device {int pcie_idx_lock; TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {unsigned long (* get_pcie_index_offset ) (struct amdgpu_device*) ;unsigned long (* get_pcie_data_offset ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (struct amdgpu_device*) ;
 unsigned long FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_0, uint32_t VAR_1,
       uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_0->nbio_funcs->get_pcie_index_offset(VAR_0);
 VAR_7 = VAR_0->nbio_funcs->get_pcie_data_offset(VAR_0);

 FUNC_1(&VAR_0->pcie_idx_lock, VAR_5);
 FUNC_0(VAR_6, VAR_1);
 FUNC_0(VAR_7, VAR_2);
 FUNC_0(VAR_6, VAR_3);
 FUNC_0(VAR_7, VAR_4);
 FUNC_2(&VAR_0->pcie_idx_lock, VAR_5);
}
