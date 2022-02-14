
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int length_dw; int gpu_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct amdgpu_ring*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_2,
      struct amdgpu_job *VAR_3,
      struct amdgpu_ib *VAR_4,
      uint32_t VAR_5)
{
 FUNC_1(VAR_2, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_2, VAR_4->gpu_addr);
 FUNC_1(VAR_2, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_2, VAR_4->length_dw);
}
