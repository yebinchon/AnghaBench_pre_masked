
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int wptr; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int gpu_addr; int length_dw; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_2,
    struct amdgpu_job *VAR_3,
    struct amdgpu_ib *VAR_4,
    uint32_t VAR_5)
{
 unsigned VAR_6 = FUNC_0(VAR_3);



 while ((FUNC_4(VAR_2->wptr) & 7) != 5)
  FUNC_3(VAR_2, FUNC_2(VAR_1, 0, 0, 0, 0));
 FUNC_3(VAR_2, FUNC_1(VAR_0, VAR_6, 0));
 FUNC_3(VAR_2, (VAR_4->gpu_addr & 0xFFFFFFE0));
 FUNC_3(VAR_2, (VAR_4->length_dw << 12) | (FUNC_5(VAR_4->gpu_addr) & 0xFF));

}
