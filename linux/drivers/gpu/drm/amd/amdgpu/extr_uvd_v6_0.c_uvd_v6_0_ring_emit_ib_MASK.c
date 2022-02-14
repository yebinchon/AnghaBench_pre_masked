
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {unsigned int length_dw; int gpu_addr; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct amdgpu_ring*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_4,
      struct amdgpu_job *VAR_5,
      struct amdgpu_ib *VAR_6,
      uint32_t VAR_7)
{
 unsigned VAR_8 = FUNC_0(VAR_5);

 FUNC_2(VAR_4, FUNC_1(VAR_2, 0));
 FUNC_2(VAR_4, VAR_8);

 FUNC_2(VAR_4, FUNC_1(VAR_1, 0));
 FUNC_2(VAR_4, FUNC_3(VAR_6->gpu_addr));
 FUNC_2(VAR_4, FUNC_1(VAR_0, 0));
 FUNC_2(VAR_4, FUNC_4(VAR_6->gpu_addr));
 FUNC_2(VAR_4, FUNC_1(VAR_3, 0));
 FUNC_2(VAR_4, VAR_6->length_dw);
}
