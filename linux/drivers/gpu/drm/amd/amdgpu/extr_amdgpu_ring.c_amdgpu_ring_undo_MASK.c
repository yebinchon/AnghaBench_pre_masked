
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {TYPE_1__* funcs; int wptr_old; int wptr; } ;
struct TYPE_2__ {int (* end_use ) (struct amdgpu_ring*) ;} ;


 int FUNC_0 (struct amdgpu_ring*) ;

void FUNC_1(struct amdgpu_ring *VAR_0)
{
 VAR_0->wptr = VAR_0->wptr_old;

 if (VAR_0->funcs->end_use)
  VAR_0->funcs->end_use(VAR_0);
}
