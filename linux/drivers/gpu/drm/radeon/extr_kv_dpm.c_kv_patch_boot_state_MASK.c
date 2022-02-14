
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct kv_ps {int num_levels; int * levels; } ;
struct kv_power_info {int boot_pl; } ;


 struct kv_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
    struct kv_ps *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_0(VAR_0);

 VAR_1->num_levels = 1;
 VAR_1->levels[0] = VAR_2->boot_pl;
}
