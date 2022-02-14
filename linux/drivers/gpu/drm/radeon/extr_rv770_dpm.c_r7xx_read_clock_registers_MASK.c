
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3)
{
 if (VAR_3->family == VAR_2)
  FUNC_1(VAR_3);
 else if ((VAR_3->family == VAR_1) || (VAR_3->family == VAR_0))
  FUNC_0(VAR_3);
 else
  FUNC_2(VAR_3);
}
