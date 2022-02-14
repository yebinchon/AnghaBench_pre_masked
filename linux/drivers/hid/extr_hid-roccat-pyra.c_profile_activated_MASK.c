
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pyra_device {unsigned int actual_profile; TYPE_1__* profile_settings; int actual_cpi; } ;
struct TYPE_2__ {int y_cpi; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct pyra_device *VAR_0,
  unsigned int VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0->profile_settings))
  return;
 VAR_0->actual_profile = VAR_1;
 VAR_0->actual_cpi = VAR_0->profile_settings[VAR_0->actual_profile].y_cpi;
}
