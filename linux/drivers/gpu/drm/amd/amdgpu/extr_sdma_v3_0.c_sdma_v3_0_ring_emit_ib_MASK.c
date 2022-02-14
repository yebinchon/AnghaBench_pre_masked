
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int wptr; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int length_dw; int gpu_addr; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_ring *VAR_1,
       struct amdgpu_job *VAR_2,
       struct amdgpu_ib *VAR_3,
       uint32_t VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_2);


 FUNC_5(VAR_1, (10 - (FUNC_4(VAR_1->wptr) & 7)) % 8);

 FUNC_3(VAR_1, FUNC_1(VAR_0) |
     FUNC_2(VAR_5 & 0xf));

 FUNC_3(VAR_1, FUNC_4(VAR_3->gpu_addr) & 0xffffffe0);
 FUNC_3(VAR_1, FUNC_6(VAR_3->gpu_addr));
 FUNC_3(VAR_1, VAR_3->length_dw);
 FUNC_3(VAR_1, 0);
 FUNC_3(VAR_1, 0);

}
