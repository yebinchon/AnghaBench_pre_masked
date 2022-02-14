
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
struct TYPE_3__ {int (* get_mclk ) (int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *,int ,int*,int*) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct amdgpu_device *VAR_1, bool VAR_2)
{
 uint32_t VAR_3;
 int VAR_4 = 0;
 if (FUNC_0(VAR_1)) {
  VAR_4 = FUNC_1(&VAR_1->smu, VAR_0,
          VAR_2 ? &VAR_3 : ((void*)0),
          !VAR_2 ? &VAR_3 : ((void*)0));
  if (VAR_4)
   return 0;
  return VAR_3 * 100;

 } else {
  return (VAR_1)->powerplay.pp_funcs->get_mclk((VAR_1)->powerplay.pp_handle, (VAR_2));
 }
}
