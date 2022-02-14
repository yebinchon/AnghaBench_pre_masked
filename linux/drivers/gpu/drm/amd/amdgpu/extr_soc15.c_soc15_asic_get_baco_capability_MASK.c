
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;
struct amd_pm_funcs {int (* get_asic_baco_capability ) (void*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (void*,int*) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_1, bool *VAR_2)
{
 void *VAR_3 = VAR_1->powerplay.pp_handle;
 const struct amd_pm_funcs *VAR_4 = VAR_1->powerplay.pp_funcs;

 if (!VAR_4 || !VAR_4->get_asic_baco_capability) {
  *VAR_2 = 0;
  return -VAR_0;
 }

 return VAR_4->get_asic_baco_capability(VAR_3, VAR_2);
}
