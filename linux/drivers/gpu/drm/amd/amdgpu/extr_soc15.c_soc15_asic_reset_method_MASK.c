
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ras {int supported; } ;
struct amdgpu_hive_info {int dummy; } ;
struct TYPE_2__ {int sos_fw_version; } ;
struct amdgpu_device {int asic_type; TYPE_1__ psp; } ;
typedef enum amd_reset_method { ____Placeholder_amd_reset_method } amd_reset_method ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 struct amdgpu_hive_info* FUNC_0 (struct amdgpu_device*,int ) ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int*) ;

__attribute__((used)) static enum amd_reset_method
FUNC_3(struct amdgpu_device *VAR_3)
{
 bool VAR_4;

 switch (VAR_3->asic_type) {
 case 131:
  return VAR_2;
 case 130:
 case 129:
  FUNC_2(VAR_3, &VAR_4);
  break;
 case 128:
  if (VAR_3->psp.sos_fw_version >= 0x80067)
   FUNC_2(VAR_3, &VAR_4);
  else
   VAR_4 = 0;
  if (VAR_4) {
   struct amdgpu_hive_info *VAR_5 = FUNC_0(VAR_3, 0);
   struct amdgpu_ras *VAR_6 = FUNC_1(VAR_3);

   if (VAR_5 || (VAR_6 && VAR_6->supported))
    VAR_4 = 0;
  }
  break;
 default:
  VAR_4 = 0;
  break;
 }

 if (VAR_4)
  return VAR_0;
 else
  return VAR_1;
}
