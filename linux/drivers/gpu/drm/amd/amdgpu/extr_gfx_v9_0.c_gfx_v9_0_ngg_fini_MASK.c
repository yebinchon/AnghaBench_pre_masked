
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ngg_buf {int dummy; } ;
struct TYPE_5__ {int init; TYPE_3__* buf; } ;
struct TYPE_4__ {TYPE_2__ ngg; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;
struct TYPE_6__ {int gpu_addr; int bo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->gfx.ngg.buf[VAR_2].bo,
          &VAR_1->gfx.ngg.buf[VAR_2].gpu_addr,
          ((void*)0));

 FUNC_1(&VAR_1->gfx.ngg.buf[0], 0,
   sizeof(struct amdgpu_ngg_buf) * VAR_0);

 VAR_1->gfx.ngg.init = 0;

 return 0;
}
