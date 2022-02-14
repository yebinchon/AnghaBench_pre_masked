
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int dummy; } ;
struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* hdp_flush ) (struct amdgpu_device*,struct amdgpu_ring*) ;} ;


 int FUNC_0 (struct amdgpu_device*,struct amdgpu_ring*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0, struct amdgpu_ring *VAR_1)
{
 VAR_0->nbio_funcs->hdp_flush(VAR_0, VAR_1);
}
