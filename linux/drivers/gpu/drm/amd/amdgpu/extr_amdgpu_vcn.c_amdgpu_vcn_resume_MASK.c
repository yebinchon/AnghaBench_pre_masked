
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct TYPE_8__ {int num_vcn_inst; int harvest_config; TYPE_3__* fw; TYPE_2__* inst; } ;
struct TYPE_5__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_4__ vcn; TYPE_1__ firmware; } ;
struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {void* cpu_addr; int * saved_bo; int * vcpu_bo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (void*,int *,unsigned int) ;
 int FUNC_4 (void*,int ,unsigned int) ;

int FUNC_5(struct amdgpu_device *VAR_2)
{
 unsigned VAR_3;
 void *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->vcn.num_vcn_inst; ++VAR_5) {
  if (VAR_2->vcn.harvest_config & (1 << VAR_5))
   continue;
  if (VAR_2->vcn.inst[VAR_5].vcpu_bo == ((void*)0))
   return -VAR_1;

  VAR_3 = FUNC_0(VAR_2->vcn.inst[VAR_5].vcpu_bo);
  VAR_4 = VAR_2->vcn.inst[VAR_5].cpu_addr;

  if (VAR_2->vcn.inst[VAR_5].saved_bo != ((void*)0)) {
   FUNC_3(VAR_4, VAR_2->vcn.inst[VAR_5].saved_bo, VAR_3);
   FUNC_1(VAR_2->vcn.inst[VAR_5].saved_bo);
   VAR_2->vcn.inst[VAR_5].saved_bo = ((void*)0);
  } else {
   const struct common_firmware_header *VAR_6;
   unsigned VAR_7;

   VAR_6 = (const struct common_firmware_header *)VAR_2->vcn.fw->data;
   if (VAR_2->firmware.load_type != VAR_0) {
    VAR_7 = FUNC_2(VAR_6->ucode_array_offset_bytes);
    FUNC_3(VAR_2->vcn.inst[VAR_5].cpu_addr, VAR_2->vcn.fw->data + VAR_7,
         FUNC_2(VAR_6->ucode_size_bytes));
    VAR_3 -= FUNC_2(VAR_6->ucode_size_bytes);
    VAR_4 += FUNC_2(VAR_6->ucode_size_bytes);
   }
   FUNC_4(VAR_4, 0, VAR_3);
  }
 }
 return 0;
}
