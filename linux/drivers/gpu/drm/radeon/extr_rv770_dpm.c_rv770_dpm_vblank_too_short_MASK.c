
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*) ;

bool FUNC_1(struct radeon_device *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = 200;



 if ((VAR_2->family == VAR_0) &&
     !(VAR_2->flags & VAR_1))
  VAR_4 = 0xffffffff;

 if (VAR_3 < VAR_4)
  return 1;
 else
  return 0;

}
