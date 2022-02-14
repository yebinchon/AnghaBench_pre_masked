
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_uvd_inst; int harvest_config; TYPE_3__* inst; scalar_t__ num_enc_rings; } ;
struct amdgpu_device {TYPE_1__ uvd; } ;
struct TYPE_5__ {int * funcs; scalar_t__ num_types; } ;
struct TYPE_6__ {TYPE_2__ irq; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->uvd.num_uvd_inst; VAR_2++) {
  if (VAR_1->uvd.harvest_config & (1 << VAR_2))
   continue;
  VAR_1->uvd.inst[VAR_2].irq.num_types = VAR_1->uvd.num_enc_rings + 1;
  VAR_1->uvd.inst[VAR_2].irq.funcs = &VAR_0;
 }
}
