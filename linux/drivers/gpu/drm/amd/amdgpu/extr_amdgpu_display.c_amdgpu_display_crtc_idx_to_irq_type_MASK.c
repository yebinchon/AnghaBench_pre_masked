
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_0(struct amdgpu_device *VAR_7, int VAR_8)
{
 if (VAR_8 < 0 || VAR_8 >= VAR_7->mode_info.num_crtc)
  return VAR_0;

 switch (VAR_8) {
 case 0:
  return VAR_1;
 case 1:
  return VAR_2;
 case 2:
  return VAR_3;
 case 3:
  return VAR_4;
 case 4:
  return VAR_5;
 case 5:
  return VAR_6;
 default:
  return VAR_0;
 }
}
