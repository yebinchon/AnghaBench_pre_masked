
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* get_memsize ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_1(struct amdgpu_device *VAR_0)
{
 return VAR_0->nbio_funcs->get_memsize(VAR_0);
}
