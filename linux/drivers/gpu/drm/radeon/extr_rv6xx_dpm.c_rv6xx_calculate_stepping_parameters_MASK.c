
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_ps {int dummy; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,struct rv6xx_ps*) ;
 int FUNC_1 (struct radeon_device*,struct rv6xx_ps*) ;
 int FUNC_2 (struct radeon_device*,struct rv6xx_ps*) ;
 int FUNC_3 (struct radeon_device*,struct rv6xx_ps*) ;
 struct rv6xx_ps* FUNC_4 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_0,
      struct radeon_ps *VAR_1)
{
 struct rv6xx_ps *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_2);
 FUNC_3(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_2);
}
