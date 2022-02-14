
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_enc_rings; TYPE_2__* inst; } ;
struct amdgpu_device {TYPE_3__ vcn; } ;
struct TYPE_5__ {TYPE_1__* ring_enc; } ;
struct TYPE_4__ {int * funcs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->vcn.num_enc_rings; ++VAR_2)
  VAR_1->vcn.inst->ring_enc[VAR_2].funcs = &VAR_0;

 FUNC_0("VCN encode is enabled in VM mode\n");
}
