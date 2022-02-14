
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gds_size; int gds_compute_max_wave_id; int gws_size; int oa_size; } ;
struct amdgpu_device {int asic_type; int rev_id; TYPE_1__ gds; } ;
__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_0)
{

 switch (VAR_0->asic_type) {
 case 130:
 case 129:
 case 128:
  VAR_0->gds.gds_size = 0x10000;
  break;
 case 131:
 case 132:
  VAR_0->gds.gds_size = 0x1000;
  break;
 default:
  VAR_0->gds.gds_size = 0x10000;
  break;
 }

 switch (VAR_0->asic_type) {
 case 130:
 case 128:
  VAR_0->gds.gds_compute_max_wave_id = 0x7ff;
  break;
 case 129:
  VAR_0->gds.gds_compute_max_wave_id = 0x27f;
  break;
 case 131:
  if (VAR_0->rev_id >= 0x8)
   VAR_0->gds.gds_compute_max_wave_id = 0x77;
  else
   VAR_0->gds.gds_compute_max_wave_id = 0x15f;
  break;
 case 132:
  VAR_0->gds.gds_compute_max_wave_id = 0xfff;
  break;
 default:

  VAR_0->gds.gds_compute_max_wave_id = 0x7ff;
  break;
 }

 VAR_0->gds.gws_size = 64;
 VAR_0->gds.oa_size = 16;
}
