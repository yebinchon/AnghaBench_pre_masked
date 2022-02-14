
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int wptr; TYPE_1__* funcs; } ;
struct TYPE_2__ {int align_mask; int (* end_use ) (struct amdgpu_ring*) ;int (* insert_nop ) (struct amdgpu_ring*,int) ;} ;


 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (struct amdgpu_ring*) ;

void FUNC_4(struct amdgpu_ring *VAR_0)
{
 uint32_t VAR_1;


 VAR_1 = VAR_0->funcs->align_mask + 1 -
  (VAR_0->wptr & VAR_0->funcs->align_mask);
 VAR_1 %= VAR_0->funcs->align_mask + 1;
 VAR_0->funcs->insert_nop(VAR_0, VAR_1);

 FUNC_1();
 FUNC_0(VAR_0);

 if (VAR_0->funcs->end_use)
  VAR_0->funcs->end_use(VAR_0);
}
