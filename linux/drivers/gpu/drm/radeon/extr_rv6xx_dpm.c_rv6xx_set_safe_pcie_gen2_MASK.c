
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rv6xx_ps {TYPE_1__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;
 struct rv6xx_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
         struct radeon_ps *VAR_2,
         struct radeon_ps *VAR_3)
{
 struct rv6xx_ps *VAR_4 = FUNC_1(VAR_2);
 struct rv6xx_ps *VAR_5 = FUNC_1(VAR_3);

 if ((VAR_4->low.flags & VAR_0) !=
     (VAR_5->low.flags & VAR_0))
  FUNC_0(VAR_1);
}
