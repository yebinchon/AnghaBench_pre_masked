
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
 int FUNC_0 (struct amdgpu_device*,int ,int ,struct amdgpu_irq_src*) ;
 struct amdgpu_irq_src* FUNC_1 (int,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_7)
{
 struct amdgpu_irq_src *VAR_8 =
  FUNC_1(sizeof(struct amdgpu_irq_src), VAR_2);

 if (!VAR_8)
  return -VAR_1;

 VAR_8->funcs = &VAR_6;

 FUNC_0((struct amdgpu_device *)(VAR_7->adev),
   VAR_0,
   VAR_4,
   VAR_8);
 FUNC_0((struct amdgpu_device *)(VAR_7->adev),
   VAR_0,
   VAR_3,
   VAR_8);


 FUNC_0((struct amdgpu_device *)(VAR_7->adev),
   VAR_0,
   VAR_5,
   VAR_8);

 return 0;
}
