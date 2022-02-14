
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
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 struct rv6xx_ps* FUNC_2 (struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3,
     struct radeon_ps *VAR_4)
{
 struct rv6xx_ps *VAR_5 = FUNC_2(VAR_4);

 FUNC_3(VAR_3, VAR_1,
          VAR_5->low.vddc);

 FUNC_1(VAR_0, FUNC_0(VAR_1),
  ~VAR_2);
}
