
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int rlc_autoload_ptr; int rlc_autoload_gpu_addr; int rlc_autoload_bo; } ;
struct TYPE_3__ {TYPE_2__ rlc; } ;
struct amdgpu_device {int dev; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_0(VAR_2, VAR_4, VAR_1,
          VAR_0,
          &VAR_2->gfx.rlc.rlc_autoload_bo,
          &VAR_2->gfx.rlc.rlc_autoload_gpu_addr,
          (void **)&VAR_2->gfx.rlc.rlc_autoload_ptr);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "(%d) failed to create fw autoload bo\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
