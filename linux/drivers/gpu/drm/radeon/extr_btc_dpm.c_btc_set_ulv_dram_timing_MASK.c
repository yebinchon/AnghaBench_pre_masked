
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rv7xx_pl {int mclk; int sclk; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {struct rv7xx_pl* pl; } ;
struct evergreen_power_info {TYPE_1__ ulv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int ,int ) ;
 struct evergreen_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int ,int ) ;
 int FUNC_6 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_4)
{
 u32 VAR_5;
 struct evergreen_power_info *VAR_6 = FUNC_4(VAR_4);
 struct rv7xx_pl *VAR_7 = VAR_6->ulv.pl;

 FUNC_5(VAR_4,
         VAR_7->sclk,
         VAR_7->mclk);

 VAR_5 = FUNC_6(VAR_4, VAR_7->sclk);
 FUNC_2(VAR_1, FUNC_0(VAR_5), ~VAR_2);

 VAR_5 = FUNC_3(VAR_4, VAR_7->sclk, VAR_7->mclk);
 FUNC_2(VAR_0, FUNC_1(VAR_5), ~VAR_3);

 return 0;
}
