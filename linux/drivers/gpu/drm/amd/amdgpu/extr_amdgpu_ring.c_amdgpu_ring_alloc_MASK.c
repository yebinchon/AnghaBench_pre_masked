
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {unsigned int max_dw; unsigned int count_dw; TYPE_1__* funcs; int wptr; int wptr_old; } ;
struct TYPE_2__ {unsigned int align_mask; int (* begin_use ) (struct amdgpu_ring*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_ring*) ;

int FUNC_2(struct amdgpu_ring *VAR_1, unsigned VAR_2)
{


 VAR_2 = (VAR_2 + VAR_1->funcs->align_mask) & ~VAR_1->funcs->align_mask;




 if (FUNC_0(VAR_2 > VAR_1->max_dw))
  return -VAR_0;

 VAR_1->count_dw = VAR_2;
 VAR_1->wptr_old = VAR_1->wptr;

 if (VAR_1->funcs->begin_use)
  VAR_1->funcs->begin_use(VAR_1);

 return 0;
}
