
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_ring {int use_doorbell; int doorbell_index; int name; } ;
struct TYPE_15__ {int jpeg_pitch; int nop; int cmd; int data1; int data0; int scratch9; int gp_scratch8; int ib_size; int ib_bar_high; int ib_bar_low; int ib_vmid; int context_id; } ;
struct TYPE_16__ {int num_enc_rings; TYPE_9__* inst; TYPE_6__ internal; int pause_dpg_mode; TYPE_2__* fw; } ;
struct TYPE_13__ {int vcn_ring0_1; } ;
struct TYPE_14__ {TYPE_4__ vcn; } ;
struct TYPE_12__ {scalar_t__ load_type; int fw_size; TYPE_1__* ucode; } ;
struct amdgpu_device {TYPE_7__ vcn; TYPE_5__ doorbell_index; TYPE_3__ firmware; } ;
struct TYPE_17__ {void* jpeg_pitch; void* nop; void* cmd; void* data1; void* data0; void* scratch9; } ;
struct TYPE_18__ {TYPE_8__ external; int irq; struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {size_t ucode_id; TYPE_2__* fw; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct amdgpu_device*,int ,scalar_t__,int *) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_9(void *VAR_27)
{
 struct amdgpu_ring *VAR_28;
 int VAR_29, VAR_30;
 struct amdgpu_device *VAR_31 = (struct amdgpu_device *)VAR_27;


 VAR_30 = FUNC_3(VAR_31, VAR_3,
         VAR_7,
         &VAR_31->vcn.inst->irq);
 if (VAR_30)
  return VAR_30;


 for (VAR_29 = 0; VAR_29 < VAR_31->vcn.num_enc_rings; ++VAR_29) {
  VAR_30 = FUNC_3(VAR_31, VAR_3,
          VAR_29 + VAR_6,
          &VAR_31->vcn.inst->irq);
  if (VAR_30)
   return VAR_30;
 }


 VAR_30 = FUNC_3(VAR_31, VAR_3,
         VAR_5, &VAR_31->vcn.inst->irq);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_6(VAR_31);
 if (VAR_30)
  return VAR_30;

 if (VAR_31->firmware.load_type == VAR_0) {
  const struct common_firmware_header *VAR_32;
  VAR_32 = (const struct common_firmware_header *)VAR_31->vcn.fw->data;
  VAR_31->firmware.ucode[VAR_1].ucode_id = VAR_1;
  VAR_31->firmware.ucode[VAR_1].fw = VAR_31->vcn.fw;
  VAR_31->firmware.fw_size +=
   FUNC_0(FUNC_7(VAR_32->ucode_size_bytes), VAR_2);
  FUNC_1("PSP loading VCN firmware\n");
 }

 VAR_30 = FUNC_5(VAR_31);
 if (VAR_30)
  return VAR_30;

 VAR_28 = &VAR_31->vcn.inst->ring_dec;

 VAR_28->use_doorbell = 1;
 VAR_28->doorbell_index = VAR_31->doorbell_index.vcn.vcn_ring0_1 << 1;

 FUNC_8(VAR_28->name, "vcn_dec");
 VAR_30 = FUNC_4(VAR_31, VAR_28, 512, &VAR_31->vcn.inst->irq, 0);
 if (VAR_30)
  return VAR_30;

 VAR_31->vcn.internal.context_id = VAR_8;
 VAR_31->vcn.internal.ib_vmid = VAR_20;
 VAR_31->vcn.internal.ib_bar_low = VAR_19;
 VAR_31->vcn.internal.ib_bar_high = VAR_18;
 VAR_31->vcn.internal.ib_size = VAR_23;
 VAR_31->vcn.internal.gp_scratch8 = VAR_15;

 VAR_31->vcn.internal.scratch9 = VAR_25;
 VAR_31->vcn.inst->external.scratch9 = FUNC_2(VAR_4, 0, VAR_24);
 VAR_31->vcn.internal.data0 = VAR_12;
 VAR_31->vcn.inst->external.data0 = FUNC_2(VAR_4, 0, VAR_11);
 VAR_31->vcn.internal.data1 = VAR_14;
 VAR_31->vcn.inst->external.data1 = FUNC_2(VAR_4, 0, VAR_13);
 VAR_31->vcn.internal.cmd = VAR_10;
 VAR_31->vcn.inst->external.cmd = FUNC_2(VAR_4, 0, VAR_9);
 VAR_31->vcn.internal.nop = VAR_22;
 VAR_31->vcn.inst->external.nop = FUNC_2(VAR_4, 0, VAR_21);

 for (VAR_29 = 0; VAR_29 < VAR_31->vcn.num_enc_rings; ++VAR_29) {
  VAR_28 = &VAR_31->vcn.inst->ring_enc[VAR_29];
  VAR_28->use_doorbell = 1;
  VAR_28->doorbell_index = (VAR_31->doorbell_index.vcn.vcn_ring0_1 << 1) + 2 + VAR_29;
  FUNC_8(VAR_28->name, "vcn_enc%d", VAR_29);
  VAR_30 = FUNC_4(VAR_31, VAR_28, 512, &VAR_31->vcn.inst->irq, 0);
  if (VAR_30)
   return VAR_30;
 }

 VAR_28 = &VAR_31->vcn.inst->ring_jpeg;
 VAR_28->use_doorbell = 1;
 VAR_28->doorbell_index = (VAR_31->doorbell_index.vcn.vcn_ring0_1 << 1) + 1;
 FUNC_8(VAR_28->name, "vcn_jpeg");
 VAR_30 = FUNC_4(VAR_31, VAR_28, 512, &VAR_31->vcn.inst->irq, 0);
 if (VAR_30)
  return VAR_30;

 VAR_31->vcn.pause_dpg_mode = VAR_26;

 VAR_31->vcn.internal.jpeg_pitch = VAR_17;
 VAR_31->vcn.inst->external.jpeg_pitch = FUNC_2(VAR_4, 0, VAR_16);

 return 0;
}
