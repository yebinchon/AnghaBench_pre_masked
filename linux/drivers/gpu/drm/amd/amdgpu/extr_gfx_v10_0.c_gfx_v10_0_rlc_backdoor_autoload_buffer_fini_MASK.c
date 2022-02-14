
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rlc_autoload_ptr; int rlc_autoload_gpu_addr; int rlc_autoload_bo; int rlc_toc_buf; int rlc_toc_gpu_addr; int rlc_toc_bo; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int *,int *,void**) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 FUNC_0(&VAR_0->gfx.rlc.rlc_toc_bo,
         &VAR_0->gfx.rlc.rlc_toc_gpu_addr,
         (void **)&VAR_0->gfx.rlc.rlc_toc_buf);
 FUNC_0(&VAR_0->gfx.rlc.rlc_autoload_bo,
         &VAR_0->gfx.rlc.rlc_autoload_gpu_addr,
         (void **)&VAR_0->gfx.rlc.rlc_autoload_ptr);
}
