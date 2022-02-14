
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned int u32 ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int flags; unsigned int length_dw; int gpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_ring*,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_5,
      struct amdgpu_job *VAR_6,
      struct amdgpu_ib *VAR_7,
      uint32_t VAR_8)
{
 unsigned VAR_9 = FUNC_0(VAR_6);
 u32 VAR_10, VAR_11 = 0;


 if (VAR_8 & VAR_0) {
  FUNC_2(VAR_5, FUNC_1(VAR_4, 0));
  FUNC_2(VAR_5, 0);
 }

 if (VAR_7->flags & VAR_1)
  VAR_10 = FUNC_1(VAR_3, 2);
 else
  VAR_10 = FUNC_1(VAR_2, 2);

 VAR_11 |= VAR_7->length_dw | (VAR_9 << 24);

 FUNC_2(VAR_5, VAR_10);
 FUNC_2(VAR_5,



     (VAR_7->gpu_addr & 0xFFFFFFFC));
 FUNC_2(VAR_5, FUNC_3(VAR_7->gpu_addr) & 0xFFFF);
 FUNC_2(VAR_5, VAR_11);
}
