
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int buf_mask; TYPE_1__* funcs; int * ring; } ;
struct TYPE_2__ {int nop; } ;



__attribute__((used)) static inline void FUNC_0(struct amdgpu_ring *VAR_0)
{
 int VAR_1 = 0;
 while (VAR_1 <= VAR_0->buf_mask)
  VAR_0->ring[VAR_1++] = VAR_0->funcs->nop;

}
