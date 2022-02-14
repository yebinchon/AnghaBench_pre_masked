
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* inst; scalar_t__ num_enc_rings; } ;
struct amdgpu_device {TYPE_3__ vcn; } ;
struct TYPE_4__ {int * funcs; scalar_t__ num_types; } ;
struct TYPE_5__ {TYPE_1__ irq; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 VAR_1->vcn.inst->irq.num_types = VAR_1->vcn.num_enc_rings + 2;
 VAR_1->vcn.inst->irq.funcs = &VAR_0;
}
