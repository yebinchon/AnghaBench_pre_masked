
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int pcie_idx_lock; TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {unsigned long (* get_pcie_index_offset ) (struct amdgpu_device*) ;unsigned long (* get_pcie_data_offset ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (struct amdgpu_device*) ;
 unsigned long FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static uint64_t FUNC_6(struct amdgpu_device *VAR_3,
     uint32_t VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_6 = VAR_3->nbio_funcs->get_pcie_index_offset(VAR_3);
 VAR_7 = VAR_3->nbio_funcs->get_pcie_data_offset(VAR_3);

 FUNC_2(&VAR_3->pcie_idx_lock, VAR_5);
 FUNC_1(VAR_6, VAR_0);
 FUNC_1(VAR_7, VAR_4);

 FUNC_1(VAR_6, VAR_2);
 VAR_8 = FUNC_0(VAR_7);

 FUNC_1(VAR_6, VAR_1);
 VAR_9 = FUNC_0(VAR_7);

 FUNC_3(&VAR_3->pcie_idx_lock, VAR_5);

 return (((VAR_9 & 0xFFFFFFFFFFFFFFFF) << 32) | VAR_8);
}
