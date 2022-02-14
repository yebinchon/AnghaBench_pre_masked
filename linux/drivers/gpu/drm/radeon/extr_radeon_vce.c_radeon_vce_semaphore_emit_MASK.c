
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radeon_ring*,int ) ;

bool FUNC_2(struct radeon_device *VAR_2,
          struct radeon_ring *VAR_3,
          struct radeon_semaphore *VAR_4,
          bool VAR_5)
{
 uint64_t VAR_6 = VAR_4->gpu_addr;

 FUNC_1(VAR_3, FUNC_0(VAR_1));
 FUNC_1(VAR_3, FUNC_0((VAR_6 >> 3) & 0x000FFFFF));
 FUNC_1(VAR_3, FUNC_0((VAR_6 >> 23) & 0x000FFFFF));
 FUNC_1(VAR_3, FUNC_0(0x01003000 | (VAR_5 ? 1 : 0)));
 if (!VAR_5)
  FUNC_1(VAR_3, FUNC_0(VAR_0));

 return 1;
}
