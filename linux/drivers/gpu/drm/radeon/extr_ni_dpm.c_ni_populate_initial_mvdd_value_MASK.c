
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct evergreen_power_info {int mvdd_high_index; } ;
struct NISLANDS_SMC_VOLTAGE_VALUE {int value; int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
        struct NISLANDS_SMC_VOLTAGE_VALUE *VAR_2)
{
 struct evergreen_power_info *VAR_3 = FUNC_1(VAR_1);

 VAR_2->index = VAR_3->mvdd_high_index;
 VAR_2->value = FUNC_0(VAR_0);
}
