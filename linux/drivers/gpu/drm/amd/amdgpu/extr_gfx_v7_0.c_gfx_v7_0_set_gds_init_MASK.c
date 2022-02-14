
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gws_size; int oa_size; void* gds_compute_max_wave_id; void* gds_size; } ;
struct amdgpu_device {TYPE_1__ gds; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_2)
{

 VAR_2->gds.gds_size = FUNC_0(VAR_1);
 VAR_2->gds.gws_size = 64;
 VAR_2->gds.oa_size = 16;
 VAR_2->gds.gds_compute_max_wave_id = FUNC_0(VAR_0);
}
