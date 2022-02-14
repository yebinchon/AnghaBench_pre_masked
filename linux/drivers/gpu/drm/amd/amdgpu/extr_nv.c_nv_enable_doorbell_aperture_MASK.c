
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* enable_doorbell_selfring_aperture ) (struct amdgpu_device*,int) ;int (* enable_doorbell_aperture ) (struct amdgpu_device*,int) ;} ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
     bool VAR_1)
{
 VAR_0->nbio_funcs->enable_doorbell_aperture(VAR_0, VAR_1);
 VAR_0->nbio_funcs->enable_doorbell_selfring_aperture(VAR_0, VAR_1);
}
