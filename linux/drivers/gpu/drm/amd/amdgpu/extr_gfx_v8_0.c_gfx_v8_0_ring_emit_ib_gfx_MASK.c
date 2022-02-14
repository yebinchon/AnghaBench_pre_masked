
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned int u32 ;
struct amdgpu_ring {int adev; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int flags; unsigned int length_dw; int gpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct amdgpu_ring*,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_ring *VAR_4,
     struct amdgpu_job *VAR_5,
     struct amdgpu_ib *VAR_6,
     uint32_t VAR_7)
{
 unsigned VAR_8 = FUNC_0(VAR_5);
 u32 VAR_9, VAR_10 = 0;

 if (VAR_6->flags & VAR_0)
  VAR_9 = FUNC_2(VAR_3, 2);
 else
  VAR_9 = FUNC_2(VAR_2, 2);

 VAR_10 |= VAR_6->length_dw | (VAR_8 << 24);

 if (FUNC_4(VAR_4->adev) && (VAR_6->flags & VAR_1)) {
  VAR_10 |= FUNC_1(1);

  if (!(VAR_6->flags & VAR_0))
   FUNC_5(VAR_4);
 }

 FUNC_3(VAR_4, VAR_9);
 FUNC_3(VAR_4,



     (VAR_6->gpu_addr & 0xFFFFFFFC));
 FUNC_3(VAR_4, FUNC_6(VAR_6->gpu_addr) & 0xFFFF);
 FUNC_3(VAR_4, VAR_10);
}
