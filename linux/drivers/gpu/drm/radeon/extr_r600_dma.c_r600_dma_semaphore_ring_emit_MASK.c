
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

bool FUNC_3(struct radeon_device *VAR_1,
      struct radeon_ring *VAR_2,
      struct radeon_semaphore *VAR_3,
      bool VAR_4)
{
 u64 VAR_5 = VAR_3->gpu_addr;
 u32 VAR_6 = VAR_4 ? 0 : 1;

 FUNC_1(VAR_2, FUNC_0(VAR_0, 0, VAR_6, 0));
 FUNC_1(VAR_2, VAR_5 & 0xfffffffc);
 FUNC_1(VAR_2, FUNC_2(VAR_5) & 0xff);

 return 1;
}
