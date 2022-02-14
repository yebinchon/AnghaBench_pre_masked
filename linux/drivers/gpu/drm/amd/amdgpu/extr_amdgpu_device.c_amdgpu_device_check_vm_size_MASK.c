
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1)
{

 if (VAR_0 == -1)
  return;

 if (VAR_0 < 1) {
  FUNC_0(VAR_1->dev, "VM size (%d) too small, min is 1GB\n",
    VAR_0);
  VAR_0 = -1;
 }
}
