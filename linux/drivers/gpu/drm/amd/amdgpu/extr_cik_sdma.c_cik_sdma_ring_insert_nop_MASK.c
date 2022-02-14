
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_sdma_instance {scalar_t__ burst_nop; } ;
struct amdgpu_ring {TYPE_1__* funcs; } ;
struct TYPE_2__ {int nop; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 struct amdgpu_sdma_instance* FUNC_2 (struct amdgpu_ring*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_0, uint32_t VAR_1)
{
 struct amdgpu_sdma_instance *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2 && VAR_2->burst_nop && (VAR_3 == 0))
   FUNC_1(VAR_0, VAR_0->funcs->nop |
       FUNC_0(VAR_1 - 1));
  else
   FUNC_1(VAR_0, VAR_0->funcs->nop);
}
