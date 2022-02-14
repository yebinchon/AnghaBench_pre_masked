
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ VAR_0 ;

void FUNC_2(struct amdgpu_device *VAR_1)
{
 if (VAR_0)
  FUNC_0("hw_i2c forced on, you may experience display detection problems!\n");

 FUNC_1(VAR_1);
}
