
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ucode_fw_ptr; int ucode_fw_gpu_addr; int ucode_fw_obj; int data_fw_ptr; int data_fw_gpu_addr; int data_fw_obj; } ;
struct amdgpu_device {TYPE_1__ mes; } ;


 int FUNC_0 (int *,int *,void**) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 FUNC_0(&VAR_0->mes.data_fw_obj,
         &VAR_0->mes.data_fw_gpu_addr,
         (void **)&VAR_0->mes.data_fw_ptr);

 FUNC_0(&VAR_0->mes.ucode_fw_obj,
         &VAR_0->mes.ucode_fw_gpu_addr,
         (void **)&VAR_0->mes.ucode_fw_ptr);
}
