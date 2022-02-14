
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
struct amdgpu_ring {int me; int use_doorbell; int doorbell_index; int name; } ;
struct TYPE_14__ {int num_uvd_inst; int harvest_config; int num_enc_rings; TYPE_6__* inst; TYPE_2__* fw; } ;
struct TYPE_11__ {int uvd_ring0_1; int uvd_ring2_3; } ;
struct TYPE_12__ {TYPE_4__ uvd_vce; } ;
struct TYPE_10__ {scalar_t__ load_type; int fw_size; TYPE_1__* ucode; } ;
struct amdgpu_device {TYPE_7__ uvd; TYPE_5__ doorbell_index; TYPE_3__ firmware; } ;
struct TYPE_13__ {int irq; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {size_t ucode_id; TYPE_2__* fw; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (struct amdgpu_device*,int ,scalar_t__,int *) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_11(void *VAR_8)
{
 struct amdgpu_ring *VAR_9;

 int VAR_10, VAR_11, VAR_12;
 struct amdgpu_device *VAR_13 = (struct amdgpu_device *)VAR_8;

 for (VAR_11 = 0; VAR_11 < VAR_13->uvd.num_uvd_inst; VAR_11++) {
  if (VAR_13->uvd.harvest_config & (1 << VAR_11))
   continue;

  VAR_12 = FUNC_2(VAR_13, VAR_7[VAR_11], VAR_6, &VAR_13->uvd.inst[VAR_11].irq);
  if (VAR_12)
   return VAR_12;


  for (VAR_10 = 0; VAR_10 < VAR_13->uvd.num_enc_rings; ++VAR_10) {
   VAR_12 = FUNC_2(VAR_13, VAR_7[VAR_11], VAR_10 + VAR_5, &VAR_13->uvd.inst[VAR_11].irq);
   if (VAR_12)
    return VAR_12;
  }
 }

 VAR_12 = FUNC_7(VAR_13);
 if (VAR_12)
  return VAR_12;

 if (VAR_13->firmware.load_type == VAR_0) {
  const struct common_firmware_header *VAR_14;
  VAR_14 = (const struct common_firmware_header *)VAR_13->uvd.fw->data;
  VAR_13->firmware.ucode[VAR_1].ucode_id = VAR_1;
  VAR_13->firmware.ucode[VAR_1].fw = VAR_13->uvd.fw;
  VAR_13->firmware.fw_size +=
   FUNC_0(FUNC_9(VAR_14->ucode_size_bytes), VAR_3);

  if (VAR_13->uvd.num_uvd_inst == VAR_4) {
   VAR_13->firmware.ucode[VAR_2].ucode_id = VAR_2;
   VAR_13->firmware.ucode[VAR_2].fw = VAR_13->uvd.fw;
   VAR_13->firmware.fw_size +=
    FUNC_0(FUNC_9(VAR_14->ucode_size_bytes), VAR_3);
  }
  FUNC_1("PSP loading UVD firmware\n");
 }

 for (VAR_11 = 0; VAR_11 < VAR_13->uvd.num_uvd_inst; VAR_11++) {
  if (VAR_13->uvd.harvest_config & (1 << VAR_11))
   continue;
  if (!FUNC_4(VAR_13)) {
   VAR_9 = &VAR_13->uvd.inst[VAR_11].ring;
   FUNC_10(VAR_9->name, "uvd_%d", VAR_9->me);
   VAR_12 = FUNC_3(VAR_13, VAR_9, 512, &VAR_13->uvd.inst[VAR_11].irq, 0);
   if (VAR_12)
    return VAR_12;
  }

  for (VAR_10 = 0; VAR_10 < VAR_13->uvd.num_enc_rings; ++VAR_10) {
   VAR_9 = &VAR_13->uvd.inst[VAR_11].ring_enc[VAR_10];
   FUNC_10(VAR_9->name, "uvd_enc_%d.%d", VAR_9->me, VAR_10);
   if (FUNC_4(VAR_13)) {
    VAR_9->use_doorbell = 1;




    if (VAR_10 == 0)
     VAR_9->doorbell_index = VAR_13->doorbell_index.uvd_vce.uvd_ring0_1 * 2;
    else
     VAR_9->doorbell_index = VAR_13->doorbell_index.uvd_vce.uvd_ring2_3 * 2 + 1;
   }
   VAR_12 = FUNC_3(VAR_13, VAR_9, 512, &VAR_13->uvd.inst[VAR_11].irq, 0);
   if (VAR_12)
    return VAR_12;
  }
 }

 VAR_12 = FUNC_6(VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_13);
 if (VAR_12)
  return VAR_12;

 return VAR_12;
}
