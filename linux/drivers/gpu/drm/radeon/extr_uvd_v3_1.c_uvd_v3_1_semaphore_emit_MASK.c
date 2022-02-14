
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_ring*,int) ;

bool FUNC_2(struct radeon_device *VAR_3,
        struct radeon_ring *VAR_4,
        struct radeon_semaphore *VAR_5,
        bool VAR_6)
{
 uint64_t VAR_7 = VAR_5->gpu_addr;

 FUNC_1(VAR_4, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_4, (VAR_7 >> 3) & 0x000FFFFF);

 FUNC_1(VAR_4, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_4, (VAR_7 >> 23) & 0x000FFFFF);

 FUNC_1(VAR_4, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_4, 0x80 | (VAR_6 ? 1 : 0));

 return 1;
}
