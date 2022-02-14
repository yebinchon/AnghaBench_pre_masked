
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned int u32 ;
struct amdgpu_ring {int wptr; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int gpu_addr; int length_dw; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_1,
      struct amdgpu_job *VAR_2,
      struct amdgpu_ib *VAR_3,
      uint32_t VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = VAR_5 & 0xf;


 FUNC_3(VAR_1, (12 - (FUNC_4(VAR_1->wptr) & 7)) % 8);

 FUNC_2(VAR_1, FUNC_1(VAR_0, 0, VAR_6));
 FUNC_2(VAR_1, VAR_3->gpu_addr & 0xffffffe0);
 FUNC_2(VAR_1, FUNC_5(VAR_3->gpu_addr) & 0xffffffff);
 FUNC_2(VAR_1, VAR_3->length_dw);

}
