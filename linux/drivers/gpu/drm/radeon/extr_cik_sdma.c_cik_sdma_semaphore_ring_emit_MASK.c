
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

bool FUNC_3(struct radeon_device *VAR_2,
      struct radeon_ring *VAR_3,
      struct radeon_semaphore *VAR_4,
      bool VAR_5)
{
 u64 VAR_6 = VAR_4->gpu_addr;
 u32 VAR_7 = VAR_5 ? 0 : VAR_1;

 FUNC_1(VAR_3, FUNC_0(VAR_0, 0, VAR_7));
 FUNC_1(VAR_3, VAR_6 & 0xfffffff8);
 FUNC_1(VAR_3, FUNC_2(VAR_6));

 return 1;
}
