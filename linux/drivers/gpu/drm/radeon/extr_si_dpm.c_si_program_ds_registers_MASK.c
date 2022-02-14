
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ sclk_deep_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4)
{
 struct evergreen_power_info *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = 1;

 if (VAR_5->sclk_deep_sleep) {
  FUNC_1(VAR_3, FUNC_0(VAR_6), ~VAR_2);
  FUNC_1(VAR_1, VAR_0,
    ~VAR_0);
 }
}
