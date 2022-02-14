
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_crtc; int num_hpd; int num_dig; int * funcs; } ;
struct amdgpu_device {int asic_type; TYPE_2__* ddev; TYPE_1__ mode_info; } ;
struct TYPE_4__ {int dev; } ;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;

 switch (VAR_4->asic_type) {
 case 148:
 case 145:
  VAR_4->mode_info.num_crtc = 6;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 6;
  break;
 case 143:
  VAR_4->mode_info.num_crtc = 4;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 7;
  break;
 case 144:
 case 142:
  VAR_4->mode_info.num_crtc = 2;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 6;
  break;
 case 146:
 case 132:
  VAR_4->mode_info.num_crtc = 6;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 7;
  break;
 case 147:
  VAR_4->mode_info.num_crtc = 3;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 9;
  break;
 case 133:
  VAR_4->mode_info.num_crtc = 2;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 9;
  break;
 case 137:
 case 136:
  VAR_4->mode_info.num_crtc = 5;
  VAR_4->mode_info.num_hpd = 5;
  VAR_4->mode_info.num_dig = 5;
  break;
 case 138:
 case 128:
  VAR_4->mode_info.num_crtc = 6;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 6;
  break;
 case 131:
 case 130:
 case 129:
  VAR_4->mode_info.num_crtc = 6;
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 6;
  break;
 default:
  FUNC_0("Unsupported ASIC type: 0x%X\n", VAR_4->asic_type);
  return -VAR_0;
 }

 FUNC_1(VAR_4);

 if (VAR_4->mode_info.funcs == ((void*)0))
  VAR_4->mode_info.funcs = &VAR_2;
 return 0;
}
