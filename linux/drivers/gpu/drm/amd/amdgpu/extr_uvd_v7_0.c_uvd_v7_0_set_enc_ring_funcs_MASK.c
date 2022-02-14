
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_uvd_inst; int harvest_config; int num_enc_rings; TYPE_2__* inst; } ;
struct amdgpu_device {TYPE_3__ uvd; } ;
struct TYPE_5__ {TYPE_1__* ring_enc; } ;
struct TYPE_4__ {int me; int * funcs; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->uvd.num_uvd_inst; VAR_3++) {
  if (VAR_1->uvd.harvest_config & (1 << VAR_3))
   continue;
  for (VAR_2 = 0; VAR_2 < VAR_1->uvd.num_enc_rings; ++VAR_2) {
   VAR_1->uvd.inst[VAR_3].ring_enc[VAR_2].funcs = &VAR_0;
   VAR_1->uvd.inst[VAR_3].ring_enc[VAR_2].me = VAR_3;
  }

  FUNC_0("UVD(%d) ENC is enabled in VM mode\n", VAR_3);
 }
}
