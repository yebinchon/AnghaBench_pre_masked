
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {int active; TYPE_1__* gvt; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct intel_vgpu *VAR_0)
{
 FUNC_0(&VAR_0->gvt->lock);
 VAR_0->active = 1;
 FUNC_1(&VAR_0->gvt->lock);
}
