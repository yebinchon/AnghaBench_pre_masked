
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_hpd; int num_dig; int num_crtc; } ;
struct amdgpu_device {int asic_type; TYPE_1__ mode_info; int * audio_endpt_wreg; int * audio_endpt_rreg; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;

 VAR_4->audio_endpt_rreg = &VAR_1;
 VAR_4->audio_endpt_wreg = &VAR_2;

 FUNC_1(VAR_4);

 VAR_4->mode_info.num_crtc = FUNC_0(VAR_4);

 switch (VAR_4->asic_type) {
 case 129:
 case 130:
 case 128:
  VAR_4->mode_info.num_hpd = 6;
  VAR_4->mode_info.num_dig = 6;
  break;
 case 131:
  VAR_4->mode_info.num_hpd = 2;
  VAR_4->mode_info.num_dig = 2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_4);

 return 0;
}
