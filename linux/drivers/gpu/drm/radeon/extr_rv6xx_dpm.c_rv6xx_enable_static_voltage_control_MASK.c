
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vddc; } ;
struct rv6xx_ps {TYPE_1__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int ) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 struct rv6xx_ps* FUNC_3 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_1,
      struct radeon_ps *VAR_2,
      bool VAR_3)
{
 struct rv6xx_ps *VAR_4 = FUNC_3(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_1,
     VAR_4->low.vddc,
     VAR_0);
 else
  FUNC_0(VAR_1,
              FUNC_2(VAR_1));
}
