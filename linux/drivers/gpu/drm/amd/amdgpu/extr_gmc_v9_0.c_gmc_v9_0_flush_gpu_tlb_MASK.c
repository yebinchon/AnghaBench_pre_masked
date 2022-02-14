
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ u32 ;
struct amdgpu_vmhub {size_t vm_inv_eng0_req; size_t vm_inv_eng0_ack; } ;
struct TYPE_10__ {int invalidate_lock; } ;
struct TYPE_6__ {scalar_t__ ready; } ;
struct TYPE_7__ {TYPE_1__ sched; } ;
struct TYPE_8__ {TYPE_2__ ring; } ;
struct TYPE_9__ {TYPE_3__ kiq; } ;
struct amdgpu_device {size_t num_vmhubs; scalar_t__ usec_timeout; TYPE_5__ gmc; int in_gpu_reset; TYPE_4__ gfx; struct amdgpu_vmhub* vmhub; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (size_t,scalar_t__) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,size_t,size_t,scalar_t__,int) ;
 scalar_t__ FUNC_7 (size_t,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct amdgpu_device *VAR_1, uint32_t VAR_2,
     uint32_t VAR_3, uint32_t VAR_4)
{
 const unsigned VAR_5 = 17;
 u32 VAR_6, VAR_7;
 struct amdgpu_vmhub *VAR_8;

 FUNC_0(VAR_3 >= VAR_1->num_vmhubs);

 VAR_8 = &VAR_1->vmhub[VAR_3];
 VAR_7 = FUNC_7(VAR_2, VAR_4);




 if (VAR_1->gfx.kiq.ring.sched.ready &&
   (FUNC_4(VAR_1) || !FUNC_5(VAR_1)) &&
   !VAR_1->in_gpu_reset) {
  uint32_t VAR_9 = VAR_8->vm_inv_eng0_req + VAR_5;
  uint32_t VAR_10 = VAR_8->vm_inv_eng0_ack + VAR_5;

  FUNC_6(VAR_1, VAR_9, VAR_10, VAR_7,
    1 << VAR_2);
  return;
 }

 FUNC_8(&VAR_1->gmc.invalidate_lock);
 FUNC_3(VAR_8->vm_inv_eng0_req + VAR_5, VAR_7);





 if (VAR_3 == VAR_0)
  FUNC_2(VAR_8->vm_inv_eng0_req + VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1->usec_timeout; VAR_6++) {
  VAR_7 = FUNC_2(VAR_8->vm_inv_eng0_ack + VAR_5);
  if (VAR_7 & (1 << VAR_2))
   break;
  FUNC_10(1);
 }
 FUNC_9(&VAR_1->gmc.invalidate_lock);
 if (VAR_6 < VAR_1->usec_timeout)
  return;

 FUNC_1("Timeout waiting for VM flush ACK!\n");
}
