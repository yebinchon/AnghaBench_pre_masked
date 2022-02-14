
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ vddc; } ;
struct rv6xx_ps {TYPE_1__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 struct rv6xx_ps* FUNC_2 (struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3,
      struct radeon_ps *VAR_4,
      struct radeon_ps *VAR_5)
{
 struct rv6xx_ps *VAR_6 = FUNC_2(VAR_4);
 struct rv6xx_ps *VAR_7 = FUNC_2(VAR_5);
 u16 VAR_8;

 VAR_8 = (VAR_6->low.vddc >= VAR_7->low.vddc) ?
  VAR_6->low.vddc : VAR_7->low.vddc;

 FUNC_3(VAR_3, VAR_1,
          VAR_8);

 FUNC_1(VAR_0, FUNC_0(VAR_1),
   ~VAR_2);
}
