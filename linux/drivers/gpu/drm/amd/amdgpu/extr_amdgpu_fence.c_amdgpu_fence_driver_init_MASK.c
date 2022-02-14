
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dev; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct amdgpu_device *VAR_0)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0->dev, "fence debugfs file creation failed\n");

 return 0;
}
