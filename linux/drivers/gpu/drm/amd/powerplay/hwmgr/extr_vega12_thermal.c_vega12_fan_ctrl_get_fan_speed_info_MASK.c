
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct phm_fan_speed_info {int supports_percent_read; int supports_percent_write; int supports_rpm_read; int supports_rpm_write; } ;


 int FUNC_0 (struct phm_fan_speed_info*,int ,int) ;

int FUNC_1(struct pp_hwmgr *VAR_0,
  struct phm_fan_speed_info *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->supports_percent_read = 0;
 VAR_1->supports_percent_write = 0;
 VAR_1->supports_rpm_read = 1;
 VAR_1->supports_rpm_write = 1;

 return 0;
}
