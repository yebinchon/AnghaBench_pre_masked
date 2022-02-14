
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
struct TYPE_10__ {int jpeg_pitch; int nop; int cmd; int data1; int data0; int scratch9; int gp_scratch8; int ib_size; int ib_bar_high; int ib_bar_low; int ib_vmid; int context_id; } ;
struct TYPE_18__ {int num_vcn_inst; int harvest_config; int num_enc_rings; TYPE_5__* inst; TYPE_1__ internal; TYPE_7__* fw; } ;
struct TYPE_12__ {int vcn_ring0_1; } ;
struct TYPE_13__ {TYPE_3__ vcn; } ;
struct TYPE_17__ {scalar_t__ load_type; int fw_size; TYPE_6__* ucode; } ;
struct amdgpu_device {TYPE_9__ vcn; TYPE_4__ doorbell_index; TYPE_8__ firmware; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {size_t ucode_id; TYPE_7__* fw; } ;
struct TYPE_11__ {void* jpeg_pitch; void* nop; void* cmd; void* data1; void* data0; void* scratch9; } ;
struct TYPE_14__ {int irq; struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; TYPE_2__ external; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 void* FUNC_2 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (struct amdgpu_device*,int ,scalar_t__,int *) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int ) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_9(void *VAR_28)
{
 struct amdgpu_ring *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 struct amdgpu_device *VAR_33 = (struct amdgpu_device *)VAR_28;

 for (VAR_31 = 0; VAR_31 < VAR_33->vcn.num_vcn_inst; VAR_31++) {
  if (VAR_33->vcn.harvest_config & (1 << VAR_31))
   continue;

  VAR_32 = FUNC_3(VAR_33, VAR_9[VAR_31],
    VAR_8, &VAR_33->vcn.inst[VAR_31].irq);
  if (VAR_32)
   return VAR_32;


  for (VAR_30 = 0; VAR_30 < VAR_33->vcn.num_enc_rings; ++VAR_30) {
   VAR_32 = FUNC_3(VAR_33, VAR_9[VAR_31],
    VAR_30 + VAR_7, &VAR_33->vcn.inst[VAR_31].irq);
   if (VAR_32)
    return VAR_32;
  }


  VAR_32 = FUNC_3(VAR_33, VAR_9[VAR_31],
    VAR_6, &VAR_33->vcn.inst[VAR_31].irq);
  if (VAR_32)
   return VAR_32;
 }

 VAR_32 = FUNC_6(VAR_33);
 if (VAR_32)
  return VAR_32;

 if (VAR_33->firmware.load_type == VAR_0) {
  const struct common_firmware_header *VAR_34;
  VAR_34 = (const struct common_firmware_header *)VAR_33->vcn.fw->data;
  VAR_33->firmware.ucode[VAR_1].ucode_id = VAR_1;
  VAR_33->firmware.ucode[VAR_1].fw = VAR_33->vcn.fw;
  VAR_33->firmware.fw_size +=
   FUNC_0(FUNC_7(VAR_34->ucode_size_bytes), VAR_3);

  if (VAR_33->vcn.num_vcn_inst == VAR_5) {
   VAR_33->firmware.ucode[VAR_2].ucode_id = VAR_2;
   VAR_33->firmware.ucode[VAR_2].fw = VAR_33->vcn.fw;
   VAR_33->firmware.fw_size +=
    FUNC_0(FUNC_7(VAR_34->ucode_size_bytes), VAR_3);
  }
  FUNC_1("PSP loading VCN firmware\n");
 }

 VAR_32 = FUNC_5(VAR_33);
 if (VAR_32)
  return VAR_32;

 for (VAR_31 = 0; VAR_31 < VAR_33->vcn.num_vcn_inst; VAR_31++) {
  if (VAR_33->vcn.harvest_config & (1 << VAR_31))
   continue;
  VAR_33->vcn.internal.context_id = VAR_10;
  VAR_33->vcn.internal.ib_vmid = VAR_22;
  VAR_33->vcn.internal.ib_bar_low = VAR_21;
  VAR_33->vcn.internal.ib_bar_high = VAR_20;
  VAR_33->vcn.internal.ib_size = VAR_25;
  VAR_33->vcn.internal.gp_scratch8 = VAR_17;

  VAR_33->vcn.internal.scratch9 = VAR_27;
  VAR_33->vcn.inst[VAR_31].external.scratch9 = FUNC_2(VAR_4, VAR_31, VAR_26);
  VAR_33->vcn.internal.data0 = VAR_14;
  VAR_33->vcn.inst[VAR_31].external.data0 = FUNC_2(VAR_4, VAR_31, VAR_13);
  VAR_33->vcn.internal.data1 = VAR_16;
  VAR_33->vcn.inst[VAR_31].external.data1 = FUNC_2(VAR_4, VAR_31, VAR_15);
  VAR_33->vcn.internal.cmd = VAR_12;
  VAR_33->vcn.inst[VAR_31].external.cmd = FUNC_2(VAR_4, VAR_31, VAR_11);
  VAR_33->vcn.internal.nop = VAR_24;
  VAR_33->vcn.inst[VAR_31].external.nop = FUNC_2(VAR_4, VAR_31, VAR_23);

  VAR_33->vcn.internal.jpeg_pitch = VAR_19;
  VAR_33->vcn.inst[VAR_31].external.jpeg_pitch = FUNC_2(VAR_4, VAR_31, VAR_18);

  VAR_29 = &VAR_33->vcn.inst[VAR_31].ring_dec;
  VAR_29->use_doorbell = 1;
  VAR_29->doorbell_index = (VAR_33->doorbell_index.vcn.vcn_ring0_1 << 1) + 8*VAR_31;
  FUNC_8(VAR_29->name, "vcn_dec_%d", VAR_31);
  VAR_32 = FUNC_4(VAR_33, VAR_29, 512, &VAR_33->vcn.inst[VAR_31].irq, 0);
  if (VAR_32)
   return VAR_32;

  for (VAR_30 = 0; VAR_30 < VAR_33->vcn.num_enc_rings; ++VAR_30) {
   VAR_29 = &VAR_33->vcn.inst[VAR_31].ring_enc[VAR_30];
   VAR_29->use_doorbell = 1;
   VAR_29->doorbell_index = (VAR_33->doorbell_index.vcn.vcn_ring0_1 << 1) + 2 + VAR_30 + 8*VAR_31;
   FUNC_8(VAR_29->name, "vcn_enc_%d.%d", VAR_31, VAR_30);
   VAR_32 = FUNC_4(VAR_33, VAR_29, 512, &VAR_33->vcn.inst[VAR_31].irq, 0);
   if (VAR_32)
    return VAR_32;
  }

  VAR_29 = &VAR_33->vcn.inst[VAR_31].ring_jpeg;
  VAR_29->use_doorbell = 1;
  VAR_29->doorbell_index = (VAR_33->doorbell_index.vcn.vcn_ring0_1 << 1) + 1 + 8*VAR_31;
  FUNC_8(VAR_29->name, "vcn_jpeg_%d", VAR_31);
  VAR_32 = FUNC_4(VAR_33, VAR_29, 512, &VAR_33->vcn.inst[VAR_31].irq, 0);
  if (VAR_32)
   return VAR_32;
 }

 return 0;
}
