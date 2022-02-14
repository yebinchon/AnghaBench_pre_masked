
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_ring {int use_doorbell; int doorbell_index; int name; } ;
struct TYPE_12__ {int num_rings; int irq; struct amdgpu_ring* ring; TYPE_2__* fw; int saved_bo; int vcpu_bo; } ;
struct TYPE_10__ {int vce_ring0_1; int vce_ring2_3; } ;
struct TYPE_11__ {TYPE_4__ uvd_vce; } ;
struct TYPE_9__ {scalar_t__ load_type; int fw_size; TYPE_1__* ucode; } ;
struct amdgpu_device {TYPE_6__ vce; TYPE_5__ doorbell_index; TYPE_3__ firmware; } ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {size_t ucode_id; TYPE_2__* fw; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,unsigned int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (unsigned int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int FUNC_13(void *VAR_9)
{
 struct amdgpu_device *VAR_10 = (struct amdgpu_device *)VAR_9;
 struct amdgpu_ring *VAR_11;

 unsigned VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = FUNC_3(VAR_10, VAR_5, 167, &VAR_10->vce.irq);
 if (VAR_13)
  return VAR_13;

 VAR_12 = VAR_8 + VAR_6;
 if (VAR_10->firmware.load_type != VAR_0)
  VAR_12 += VAR_7;

 VAR_13 = FUNC_8(VAR_10, VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_10->firmware.load_type == VAR_0) {
  const struct common_firmware_header *VAR_15;
  unsigned VAR_16 = FUNC_2(VAR_10->vce.vcpu_bo);

  VAR_10->vce.saved_bo = FUNC_10(VAR_16, VAR_3);
  if (!VAR_10->vce.saved_bo)
   return -VAR_2;

  VAR_15 = (const struct common_firmware_header *)VAR_10->vce.fw->data;
  VAR_10->firmware.ucode[VAR_1].ucode_id = VAR_1;
  VAR_10->firmware.ucode[VAR_1].fw = VAR_10->vce.fw;
  VAR_10->firmware.fw_size +=
   FUNC_0(FUNC_11(VAR_15->ucode_size_bytes), VAR_4);
  FUNC_1("PSP loading VCE firmware\n");
 } else {
  VAR_13 = FUNC_7(VAR_10);
  if (VAR_13)
   return VAR_13;
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->vce.num_rings; VAR_14++) {
  VAR_11 = &VAR_10->vce.ring[VAR_14];
  FUNC_12(VAR_11->name, "vce%d", VAR_14);
  if (FUNC_5(VAR_10)) {

   VAR_11->use_doorbell = 1;




   if (VAR_14 == 0)
    VAR_11->doorbell_index = VAR_10->doorbell_index.uvd_vce.vce_ring0_1 * 2;
   else
    VAR_11->doorbell_index = VAR_10->doorbell_index.uvd_vce.vce_ring2_3 * 2 + 1;
  }
  VAR_13 = FUNC_4(VAR_10, VAR_11, 512, &VAR_10->vce.irq, 0);
  if (VAR_13)
   return VAR_13;
 }


 VAR_13 = FUNC_6(VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(VAR_10);
 if (VAR_13)
  return VAR_13;

 return VAR_13;
}
