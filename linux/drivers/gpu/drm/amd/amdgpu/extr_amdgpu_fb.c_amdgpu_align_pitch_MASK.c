
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;



int FUNC_0(struct amdgpu_device *VAR_0, int VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_1;
 int VAR_5 = 0;

 switch (VAR_2) {
 case 1:
  VAR_5 = 255;
  break;
 case 2:
  VAR_5 = 127;
  break;
 case 3:
 case 4:
  VAR_5 = 63;
  break;
 }

 VAR_4 += VAR_5;
 VAR_4 &= ~VAR_5;
 return VAR_4 * VAR_2;
}
