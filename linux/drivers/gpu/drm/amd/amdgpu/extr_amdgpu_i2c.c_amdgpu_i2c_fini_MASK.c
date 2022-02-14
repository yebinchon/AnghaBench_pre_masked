
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int ** i2c_bus; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->i2c_bus[VAR_2]) {
   FUNC_0(VAR_1->i2c_bus[VAR_2]);
   VAR_1->i2c_bus[VAR_2] = ((void*)0);
  }
 }
}
