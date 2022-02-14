
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dev; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct amdgpu_device *VAR_3)
{
 if (!(FUNC_1(VAR_3) && FUNC_0(VAR_3)))
  return;

 FUNC_2(VAR_3->dev, &VAR_0);
 FUNC_2(VAR_3->dev, &VAR_2);
 FUNC_2(VAR_3->dev, &VAR_1);
}
