
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_ring {scalar_t__ idx; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*) ;

bool FUNC_3(struct radeon_device *VAR_3, struct radeon_ring *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (VAR_4->idx == VAR_0)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 if (!(VAR_5 & VAR_6)) {
  FUNC_1(VAR_3, VAR_4);
  return 0;
 }
 return FUNC_2(VAR_3, VAR_4);
}
