
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3,
        struct radeon_ps *VAR_4)
{
 if ((VAR_3->family == VAR_1) ||
     (VAR_3->family == VAR_0) ||
     (VAR_3->family == VAR_2))
  FUNC_0(VAR_3, VAR_4);
 else
  FUNC_1(VAR_3, VAR_4);
}
