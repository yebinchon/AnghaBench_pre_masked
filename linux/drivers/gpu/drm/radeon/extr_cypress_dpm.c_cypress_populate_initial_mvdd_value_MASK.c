
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct evergreen_power_info {int mvdd_high_index; } ;
struct TYPE_3__ {int value; int index; } ;
typedef TYPE_1__ RV770_SMC_VOLTAGE_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_1,
            RV770_SMC_VOLTAGE_VALUE *VAR_2)
{
 struct evergreen_power_info *VAR_3 = FUNC_1(VAR_1);

 VAR_2->index = VAR_3->mvdd_high_index;
 VAR_2->value = FUNC_0(VAR_0);

 return 0;
}
