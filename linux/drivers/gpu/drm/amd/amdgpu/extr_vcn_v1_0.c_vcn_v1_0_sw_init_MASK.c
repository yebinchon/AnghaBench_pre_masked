
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_ring {int name; } ;
struct TYPE_11__ {void* jpeg_pitch; void* nop; void* cmd; void* data1; void* data0; void* scratch9; } ;
struct TYPE_14__ {int num_enc_rings; TYPE_6__* inst; TYPE_4__ internal; int pause_dpg_mode; TYPE_2__* fw; } ;
struct TYPE_10__ {scalar_t__ load_type; int fw_size; TYPE_1__* ucode; } ;
struct amdgpu_device {TYPE_7__ vcn; TYPE_3__ firmware; } ;
struct TYPE_12__ {void* jpeg_pitch; void* nop; void* cmd; void* data1; void* data0; void* scratch9; } ;
struct TYPE_13__ {TYPE_5__ external; int irq; struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {size_t ucode_id; TYPE_2__* fw; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_9(void *VAR_14)
{
 struct amdgpu_ring *VAR_15;
 int VAR_16, VAR_17;
 struct amdgpu_device *VAR_18 = (struct amdgpu_device *)VAR_14;


 VAR_17 = FUNC_3(VAR_18, VAR_3,
   VAR_6, &VAR_18->vcn.inst->irq);
 if (VAR_17)
  return VAR_17;


 for (VAR_16 = 0; VAR_16 < VAR_18->vcn.num_enc_rings; ++VAR_16) {
  VAR_17 = FUNC_3(VAR_18, VAR_3, VAR_16 + VAR_5,
     &VAR_18->vcn.inst->irq);
  if (VAR_17)
   return VAR_17;
 }


 VAR_17 = FUNC_3(VAR_18, VAR_3, 126, &VAR_18->vcn.inst->irq);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_6(VAR_18);
 if (VAR_17)
  return VAR_17;

 if (VAR_18->firmware.load_type == VAR_0) {
  const struct common_firmware_header *VAR_19;
  VAR_19 = (const struct common_firmware_header *)VAR_18->vcn.fw->data;
  VAR_18->firmware.ucode[VAR_1].ucode_id = VAR_1;
  VAR_18->firmware.ucode[VAR_1].fw = VAR_18->vcn.fw;
  VAR_18->firmware.fw_size +=
   FUNC_0(FUNC_7(VAR_19->ucode_size_bytes), VAR_2);
  FUNC_1("PSP loading VCN firmware\n");
 }

 VAR_17 = FUNC_5(VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_15 = &VAR_18->vcn.inst->ring_dec;
 FUNC_8(VAR_15->name, "vcn_dec");
 VAR_17 = FUNC_4(VAR_18, VAR_15, 512, &VAR_18->vcn.inst->irq, 0);
 if (VAR_17)
  return VAR_17;

 VAR_18->vcn.internal.scratch9 = VAR_18->vcn.inst->external.scratch9 =
  FUNC_2(VAR_4, 0, VAR_12);
 VAR_18->vcn.internal.data0 = VAR_18->vcn.inst->external.data0 =
  FUNC_2(VAR_4, 0, VAR_8);
 VAR_18->vcn.internal.data1 = VAR_18->vcn.inst->external.data1 =
  FUNC_2(VAR_4, 0, VAR_9);
 VAR_18->vcn.internal.cmd = VAR_18->vcn.inst->external.cmd =
  FUNC_2(VAR_4, 0, VAR_7);
 VAR_18->vcn.internal.nop = VAR_18->vcn.inst->external.nop =
  FUNC_2(VAR_4, 0, VAR_11);

 for (VAR_16 = 0; VAR_16 < VAR_18->vcn.num_enc_rings; ++VAR_16) {
  VAR_15 = &VAR_18->vcn.inst->ring_enc[VAR_16];
  FUNC_8(VAR_15->name, "vcn_enc%d", VAR_16);
  VAR_17 = FUNC_4(VAR_18, VAR_15, 512, &VAR_18->vcn.inst->irq, 0);
  if (VAR_17)
   return VAR_17;
 }

 VAR_15 = &VAR_18->vcn.inst->ring_jpeg;
 FUNC_8(VAR_15->name, "vcn_jpeg");
 VAR_17 = FUNC_4(VAR_18, VAR_15, 512, &VAR_18->vcn.inst->irq, 0);
 if (VAR_17)
  return VAR_17;

 VAR_18->vcn.pause_dpg_mode = VAR_13;
 VAR_18->vcn.internal.jpeg_pitch = VAR_18->vcn.inst->external.jpeg_pitch =
  FUNC_2(VAR_4, 0, VAR_10);

 return 0;
}
