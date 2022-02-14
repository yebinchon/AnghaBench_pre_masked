
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode_config_initialized; int bios_hardcoded_edid; } ;
struct amdgpu_device {TYPE_1__ mode_info; int ddev; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 FUNC_4(VAR_1->mode_info.bios_hardcoded_edid);

 FUNC_2(VAR_1->ddev);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 FUNC_3(VAR_1->ddev);
 VAR_1->mode_info.mode_config_initialized = 0;

 return 0;
}
