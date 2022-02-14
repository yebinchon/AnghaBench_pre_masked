
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mclk; int sclk; } ;
struct TYPE_5__ {int mclk; int sclk; } ;
struct TYPE_4__ {int mclk; int sclk; } ;
struct rv7xx_ps {TYPE_3__ high; TYPE_2__ medium; TYPE_1__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*,int ,int ) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*) ;
 struct rv7xx_ps* FUNC_7 (struct radeon_ps*) ;

void FUNC_8(struct radeon_device *VAR_4,
           struct radeon_ps *VAR_5)
{
 struct rv7xx_ps *VAR_6 = FUNC_7(VAR_5);
 u32 VAR_7 = FUNC_0(VAR_0);

 VAR_7 &= ~(VAR_1 | VAR_2 | VAR_3);

 VAR_7 |= FUNC_1(FUNC_5(VAR_4,
         VAR_6->low.sclk,
         VAR_6->low.mclk));
 VAR_7 |= FUNC_2(FUNC_5(VAR_4,
         VAR_6->medium.sclk,
         VAR_6->medium.mclk));
 VAR_7 |= FUNC_3(FUNC_5(VAR_4,
         VAR_6->high.sclk,
         VAR_6->high.mclk));

 FUNC_6(VAR_4, VAR_5);

 FUNC_4(VAR_0, VAR_7);
}
