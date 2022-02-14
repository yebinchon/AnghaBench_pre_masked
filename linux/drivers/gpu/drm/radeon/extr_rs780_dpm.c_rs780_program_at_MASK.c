
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct igp_power_info {int refresh_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct igp_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_5)
{
 struct igp_power_info *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_4, 30000000 / VAR_6->refresh_rate);
 FUNC_0(VAR_0, 1000000 * 5 / VAR_6->refresh_rate);
 FUNC_0(VAR_1, 1000000 * 10 / VAR_6->refresh_rate);
 FUNC_0(VAR_2, 1000000 * 30 / VAR_6->refresh_rate);
 FUNC_0(VAR_3, 1000000 * 50 / VAR_6->refresh_rate);
}
