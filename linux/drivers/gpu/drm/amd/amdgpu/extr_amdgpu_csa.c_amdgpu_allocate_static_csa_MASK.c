
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {void* csa_cpu_addr; } ;
struct amdgpu_device {TYPE_1__ virt; } ;
struct amdgpu_bo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,struct amdgpu_bo**,int *,void**) ;
 int FUNC_1 (void*,int ,int ) ;

int FUNC_2(struct amdgpu_device *VAR_2, struct amdgpu_bo **VAR_3,
    u32 VAR_4, uint32_t VAR_5)
{
 int VAR_6;
 void *VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_1,
    VAR_4, VAR_3,
    ((void*)0), &VAR_7);
 if (!*VAR_3)
  return -VAR_0;

 FUNC_1(VAR_7, 0, VAR_5);
 VAR_2->virt.csa_cpu_addr = VAR_7;
 return 0;
}
