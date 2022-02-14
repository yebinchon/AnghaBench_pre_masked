
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct rv6xx_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3,
        struct radeon_ps *VAR_4,
        struct radeon_ps *VAR_5)
{
 struct rv6xx_ps *VAR_6 = FUNC_1(VAR_4);
 struct rv6xx_ps *VAR_7 = FUNC_1(VAR_5);

 if ((VAR_6->low.flags & VAR_0) &&
     (VAR_7->low.flags & VAR_0))
  FUNC_0(VAR_2, VAR_1, ~VAR_1);
 else
  FUNC_0(VAR_2, 0, ~VAR_1);
}
