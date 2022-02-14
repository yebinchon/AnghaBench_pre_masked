
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_context {scalar_t__ autoload_supported; struct amdgpu_device* adev; } ;
struct amdgpu_firmware_info {size_t ucode_id; int fw; } ;
struct TYPE_2__ {int max_ucodes; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ firmware; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (char*) ;
 int VAR_14 ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct psp_context*,struct amdgpu_firmware_info*) ;
 int FUNC_4 (struct psp_context*,struct amdgpu_firmware_info*) ;
 int FUNC_5 (struct psp_context*) ;
 scalar_t__ FUNC_6 (struct psp_context*) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_15)
{
 int VAR_16, VAR_17;
 struct amdgpu_firmware_info *VAR_18;
 struct amdgpu_device* VAR_19 = VAR_15->adev;

 if (VAR_15->autoload_supported) {
  VAR_18 = &VAR_19->firmware.ucode[VAR_12];
  if (!VAR_18->fw)
   goto out;

  VAR_17 = FUNC_3(VAR_15, VAR_18);
  if (VAR_17)
   return VAR_17;
 }

out:
 for (VAR_16 = 0; VAR_16 < VAR_19->firmware.max_ucodes; VAR_16++) {
  VAR_18 = &VAR_19->firmware.ucode[VAR_16];
  if (!VAR_18->fw)
   continue;

  if (VAR_18->ucode_id == VAR_12 &&
      (FUNC_6(VAR_15) || VAR_15->autoload_supported))
   continue;

  if (FUNC_2(VAR_19) &&
     (VAR_18->ucode_id == VAR_4
      || VAR_18->ucode_id == VAR_5
      || VAR_18->ucode_id == VAR_6
      || VAR_18->ucode_id == VAR_7
      || VAR_18->ucode_id == VAR_8
      || VAR_18->ucode_id == VAR_9
      || VAR_18->ucode_id == VAR_10
      || VAR_18->ucode_id == VAR_11
      || VAR_18->ucode_id == VAR_2))

   continue;

  if (VAR_15->autoload_supported &&
      (VAR_18->ucode_id == VAR_0 ||
       VAR_18->ucode_id == VAR_1))

   continue;

  if (VAR_19->asic_type == VAR_13 &&
      VAR_18->ucode_id == VAR_1)
   continue;

  FUNC_4(VAR_15, VAR_18);

  VAR_17 = FUNC_3(VAR_15, VAR_18);
  if (VAR_17)
   return VAR_17;


  if (VAR_18->ucode_id == VAR_3) {
   VAR_17 = FUNC_5(VAR_15);
   if (VAR_17) {
    FUNC_0("Failed to start rlc autoload\n");
    return VAR_17;
   }
  }





 }

 return 0;
}
