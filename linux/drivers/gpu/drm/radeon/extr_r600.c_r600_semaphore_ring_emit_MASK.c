
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_ring*,int) ;
 int FUNC_3 (int ) ;

bool FUNC_4(struct radeon_device *VAR_7,
         struct radeon_ring *VAR_8,
         struct radeon_semaphore *VAR_9,
         bool VAR_10)
{
 uint64_t VAR_11 = VAR_9->gpu_addr;
 unsigned VAR_12 = VAR_10 ? VAR_5 : VAR_4;

 if (VAR_7->family < VAR_0)
  VAR_12 |= VAR_6;

 FUNC_2(VAR_8, FUNC_0(VAR_2, 1));
 FUNC_2(VAR_8, FUNC_1(VAR_11));
 FUNC_2(VAR_8, (FUNC_3(VAR_11) & 0xff) | VAR_12);


 if (VAR_10 && (VAR_7->family >= VAR_1)) {

  FUNC_2(VAR_8, FUNC_0(VAR_3, 0));
  FUNC_2(VAR_8, 0x0);
 }

 return 1;
}
