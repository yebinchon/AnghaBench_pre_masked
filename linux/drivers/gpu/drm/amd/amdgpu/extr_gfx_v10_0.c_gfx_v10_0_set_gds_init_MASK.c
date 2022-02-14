
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gds_size; int gds_compute_max_wave_id; int gws_size; int oa_size; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gds; } ;




__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_0)
{

 switch (VAR_0->asic_type) {
 case 128:
 default:
  VAR_0->gds.gds_size = 0x10000;
  VAR_0->gds.gds_compute_max_wave_id = 0x4ff;
  break;
 }

 VAR_0->gds.gws_size = 64;
 VAR_0->gds.oa_size = 16;
}
