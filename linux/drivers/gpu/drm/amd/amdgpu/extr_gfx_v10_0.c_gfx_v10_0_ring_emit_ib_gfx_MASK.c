
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
 int VAR_2 ;
 unsigned int FUNC_0 (struct amdgpu_job*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct amdgpu_ring*,unsigned int) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_ring *VAR_6,
           struct amdgpu_job *VAR_7,
           struct amdgpu_ib *VAR_8,
           uint32_t VAR_9)
{
 unsigned VAR_10 = FUNC_0(VAR_7);
 u32 VAR_11, VAR_12 = 0;

 if (VAR_8->flags & VAR_0)
  VAR_11 = FUNC_4(VAR_4, 2);
 else
  VAR_11 = FUNC_4(VAR_3, 2);

 VAR_12 |= VAR_8->length_dw | (VAR_10 << 24);

 if (VAR_5 && (VAR_8->flags & VAR_1)) {
  VAR_12 |= FUNC_2(1);

  if (VAR_9 & VAR_2)
   VAR_12 |= FUNC_3(1);

  if (!(VAR_8->flags & VAR_0))
   FUNC_6(VAR_6,
        VAR_9 & VAR_2 ? 1 : 0);
 }

 FUNC_5(VAR_6, VAR_11);
 FUNC_1(VAR_8->gpu_addr & 0x3);
 FUNC_5(VAR_6,



  FUNC_7(VAR_8->gpu_addr));
 FUNC_5(VAR_6, FUNC_8(VAR_8->gpu_addr));
 FUNC_5(VAR_6, VAR_12);
}
