
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {unsigned int length_dw; int gpu_addr; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct amdgpu_ring*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_1,
      struct amdgpu_job *VAR_2,
      struct amdgpu_ib *VAR_3,
      uint32_t VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_2);

 FUNC_1(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_5);
 FUNC_1(VAR_1, FUNC_2(VAR_3->gpu_addr));
 FUNC_1(VAR_1, FUNC_3(VAR_3->gpu_addr));
 FUNC_1(VAR_1, VAR_3->length_dw);
}
