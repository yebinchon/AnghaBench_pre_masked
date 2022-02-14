
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;
struct TYPE_3__ {int (* read_sensor ) (int ,int,void*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *,int,void*,int *) ;
 int FUNC_2 (int ,int,void*,int *) ;

int FUNC_3(struct amdgpu_device *VAR_1, enum amd_pp_sensors VAR_2,
      void *VAR_3, uint32_t *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_1))
  VAR_5 = FUNC_1(&VAR_1->smu, VAR_2, VAR_3, VAR_4);
 else {
  if (VAR_1->powerplay.pp_funcs && VAR_1->powerplay.pp_funcs->read_sensor)
   VAR_5 = VAR_1->powerplay.pp_funcs->read_sensor((VAR_1)->powerplay.pp_handle,
            VAR_2, VAR_3, VAR_4);
  else
   VAR_5 = -VAR_0;
 }

 return VAR_5;
}
