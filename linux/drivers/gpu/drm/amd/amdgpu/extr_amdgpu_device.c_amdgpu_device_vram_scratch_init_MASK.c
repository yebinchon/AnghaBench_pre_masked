
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; int gpu_addr; int robj; } ;
struct amdgpu_device {TYPE_1__ vram_scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,int *,int *,void**) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_3)
{
 return FUNC_0(VAR_3, VAR_1,
           VAR_2, VAR_0,
           &VAR_3->vram_scratch.robj,
           &VAR_3->vram_scratch.gpu_addr,
           (void **)&VAR_3->vram_scratch.ptr);
}
