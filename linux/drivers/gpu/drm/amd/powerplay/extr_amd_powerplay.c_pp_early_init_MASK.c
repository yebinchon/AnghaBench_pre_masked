
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pp_handle; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = VAR_1;

 VAR_2 = FUNC_0(VAR_3);

 if (VAR_2 != 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_3->powerplay.pp_handle);
 if (VAR_2)
  return -VAR_0;

 return 0;
}
