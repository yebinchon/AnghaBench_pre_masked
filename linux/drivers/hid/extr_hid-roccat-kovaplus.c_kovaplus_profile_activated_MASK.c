
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct kovaplus_device {size_t actual_profile; TYPE_1__* profile_settings; int actual_y_sensitivity; int actual_x_sensitivity; int actual_cpi; } ;
struct TYPE_2__ {int sensitivity_y; int sensitivity_x; int cpi_startup_level; } ;


 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct kovaplus_device *VAR_0,
  uint VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0->profile_settings))
  return;
 VAR_0->actual_profile = VAR_1;
 VAR_0->actual_cpi = VAR_0->profile_settings[VAR_1].cpi_startup_level;
 VAR_0->actual_x_sensitivity = VAR_0->profile_settings[VAR_1].sensitivity_x;
 VAR_0->actual_y_sensitivity = VAR_0->profile_settings[VAR_1].sensitivity_y;
}
