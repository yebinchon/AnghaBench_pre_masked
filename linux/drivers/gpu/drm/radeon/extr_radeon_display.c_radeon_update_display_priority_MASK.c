
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; int flags; int disp_priority; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct radeon_device *VAR_3)
{

 if ((VAR_2 == 0) || (VAR_2 > 2)) {






  if ((FUNC_0(VAR_3) || (VAR_3->family == VAR_0)) &&
      !(VAR_3->flags & VAR_1))
   VAR_3->disp_priority = 2;
  else
   VAR_3->disp_priority = 0;
 } else
  VAR_3->disp_priority = VAR_2;

}
