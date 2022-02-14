
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {scalar_t__ adev; } ;
struct amdgpu_irq_src {int * funcs; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,struct amdgpu_irq_src*) ;
 struct amdgpu_irq_src* FUNC_1 (int,int ) ;
 int VAR_7 ;

int FUNC_2(struct pp_hwmgr *VAR_8)
{
 struct amdgpu_irq_src *VAR_9 =
  FUNC_1(sizeof(struct amdgpu_irq_src), VAR_1);

 if (!VAR_9)
  return -VAR_0;

 VAR_9->funcs = &VAR_7;

 FUNC_0((struct amdgpu_device *)(VAR_8->adev),
   VAR_4,
   VAR_6,
   VAR_9);
 FUNC_0((struct amdgpu_device *)(VAR_8->adev),
   VAR_4,
   VAR_5,
   VAR_9);


 FUNC_0((struct amdgpu_device *)(VAR_8->adev),
   VAR_3,
   VAR_2,
   VAR_9);

 return 0;
}
