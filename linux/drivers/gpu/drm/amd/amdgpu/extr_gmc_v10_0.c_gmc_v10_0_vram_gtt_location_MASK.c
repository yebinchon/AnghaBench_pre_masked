
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_gmc {int dummy; } ;
struct TYPE_2__ {int vram_base_offset; } ;
struct amdgpu_device {TYPE_1__ vm_manager; int gmc; } ;


 int FUNC_0 (struct amdgpu_device*,struct amdgpu_gmc*) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_0,
     struct amdgpu_gmc *VAR_1)
{
 u64 VAR_2 = 0;

 if (!FUNC_2(VAR_0))
  VAR_2 = FUNC_3(VAR_0);

 FUNC_1(VAR_0, &VAR_0->gmc, VAR_2);
 FUNC_0(VAR_0, VAR_1);


 VAR_0->vm_manager.vram_base_offset = FUNC_4(VAR_0);
}
