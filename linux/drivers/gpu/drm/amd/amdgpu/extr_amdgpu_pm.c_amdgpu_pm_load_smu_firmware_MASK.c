
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int fw_version; } ;
struct TYPE_5__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_3__ pm; TYPE_2__ powerplay; } ;
struct TYPE_4__ {int (* load_firmware ) (int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct amdgpu_device *VAR_0, uint32_t *VAR_1)
{
 int VAR_2;

 if (VAR_0->powerplay.pp_funcs && VAR_0->powerplay.pp_funcs->load_firmware) {
  VAR_2 = VAR_0->powerplay.pp_funcs->load_firmware(VAR_0->powerplay.pp_handle);
  if (VAR_2) {
   FUNC_0("smu firmware loading failed\n");
   return VAR_2;
  }
  *VAR_1 = VAR_0->pm.fw_version;
 }
 return 0;
}
