
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_vmhub {scalar_t__ vm_inv_eng0_ack; scalar_t__ vm_inv_eng0_req; } ;
struct amdgpu_device {unsigned int usec_timeout; struct amdgpu_vmhub* vmhub; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_1, uint32_t VAR_2,
       unsigned int VAR_3, uint32_t VAR_4)
{
 struct amdgpu_vmhub *VAR_5 = &VAR_1->vmhub[VAR_3];
 u32 VAR_6 = FUNC_3(VAR_2, VAR_4);

 const unsigned VAR_7 = 17;
 unsigned int VAR_8;

 FUNC_2(VAR_5->vm_inv_eng0_req + VAR_7, VAR_6);





 if (VAR_3 == VAR_0)
  FUNC_1(VAR_5->vm_inv_eng0_req + VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_1->usec_timeout; VAR_8++) {
  VAR_6 = FUNC_1(VAR_5->vm_inv_eng0_ack + VAR_7);
  VAR_6 &= 1 << VAR_2;
  if (VAR_6)
   break;

  FUNC_4(1);
 }

 if (VAR_8 < VAR_1->usec_timeout)
  return;

 FUNC_0("Timeout waiting for VM flush ACK!\n");
}
