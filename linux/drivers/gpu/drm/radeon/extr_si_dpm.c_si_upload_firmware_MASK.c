
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {int sram_end; } ;
struct radeon_device {int dummy; } ;


 struct si_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_0)
{
 struct si_power_info *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);

 VAR_2 = FUNC_1(VAR_0, VAR_1->sram_end);

 return VAR_2;
}
