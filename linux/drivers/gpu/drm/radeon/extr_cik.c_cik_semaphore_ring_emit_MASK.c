
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {scalar_t__ idx; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_ring*,int) ;
 int FUNC_3 (int ) ;

bool FUNC_4(struct radeon_device *VAR_5,
        struct radeon_ring *VAR_6,
        struct radeon_semaphore *VAR_7,
        bool VAR_8)
{
 uint64_t VAR_9 = VAR_7->gpu_addr;
 unsigned VAR_10 = VAR_8 ? VAR_3 : VAR_2;

 FUNC_2(VAR_6, FUNC_0(VAR_0, 1));
 FUNC_2(VAR_6, FUNC_1(VAR_9));
 FUNC_2(VAR_6, (FUNC_3(VAR_9) & 0xffff) | VAR_10);

 if (VAR_8 && VAR_6->idx == VAR_4) {

  FUNC_2(VAR_6, FUNC_0(VAR_1, 0));
  FUNC_2(VAR_6, 0x0);
 }

 return 1;
}
