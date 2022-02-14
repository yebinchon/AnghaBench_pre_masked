
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vmhub {void* vm_l2_pro_fault_cntl; void* vm_l2_pro_fault_status; void* vm_context0_cntl; void* vm_inv_eng0_ack; void* vm_inv_eng0_req; void* ctx0_ptb_addr_hi32; void* ctx0_ptb_addr_lo32; } ;
struct amdgpu_device {struct amdgpu_vmhub* vmhub; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(struct amdgpu_device *VAR_9)
{
 struct amdgpu_vmhub *VAR_10 = &VAR_9->vmhub[VAR_0];

 VAR_10->ctx0_ptb_addr_lo32 =
  FUNC_0(VAR_1, 0,
     VAR_4);
 VAR_10->ctx0_ptb_addr_hi32 =
  FUNC_0(VAR_1, 0,
     VAR_3);
 VAR_10->vm_inv_eng0_req =
  FUNC_0(VAR_1, 0, VAR_6);
 VAR_10->vm_inv_eng0_ack =
  FUNC_0(VAR_1, 0, VAR_5);
 VAR_10->vm_context0_cntl =
  FUNC_0(VAR_1, 0, VAR_2);
 VAR_10->vm_l2_pro_fault_status =
  FUNC_0(VAR_1, 0, VAR_8);
 VAR_10->vm_l2_pro_fault_cntl =
  FUNC_0(VAR_1, 0, VAR_7);

}
