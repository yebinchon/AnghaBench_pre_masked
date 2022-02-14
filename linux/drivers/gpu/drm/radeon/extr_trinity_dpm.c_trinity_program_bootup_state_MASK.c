
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trinity_power_info {int boot_pl; } ;
struct radeon_device {int dummy; } ;


 struct trinity_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int,int) ;
 int FUNC_2 (struct radeon_device*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0)
{
 struct trinity_power_info *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2;

 FUNC_2(VAR_0, &VAR_1->boot_pl, 0);
 FUNC_1(VAR_0, 0, 1);

 for (VAR_2 = 1; VAR_2 < 8; VAR_2++)
  FUNC_1(VAR_0, VAR_2, 0);
}
