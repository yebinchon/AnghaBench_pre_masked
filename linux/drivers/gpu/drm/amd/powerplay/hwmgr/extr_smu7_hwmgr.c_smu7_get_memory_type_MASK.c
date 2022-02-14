
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu7_hwmgr {int is_memory_gddr5; } ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ backend; } ;
struct TYPE_2__ {scalar_t__ vram_type; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct amdgpu_device *VAR_3 = VAR_1->adev;

 VAR_2->is_memory_gddr5 = (VAR_3->gmc.vram_type == VAR_0);

 return 0;
}
