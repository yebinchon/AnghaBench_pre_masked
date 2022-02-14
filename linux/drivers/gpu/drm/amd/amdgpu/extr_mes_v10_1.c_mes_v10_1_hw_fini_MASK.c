
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;

 FUNC_0(VAR_2, 0);

 if (VAR_2->firmware.load_type == VAR_0)
  FUNC_1(VAR_2);

 return 0;
}
