
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {TYPE_1__* funcs; } ;
struct amdgpu_ib {int length_dw; int * ptr; } ;
struct TYPE_2__ {int align_mask; int nop; } ;



void FUNC_0(struct amdgpu_ring *VAR_0, struct amdgpu_ib *VAR_1)
{
 while (VAR_1->length_dw & VAR_0->funcs->align_mask)
  VAR_1->ptr[VAR_1->length_dw++] = VAR_0->funcs->nop;
}
