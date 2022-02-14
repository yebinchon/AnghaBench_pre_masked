
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long power_consumption; scalar_t__ im; } ;
struct TYPE_5__ {TYPE_1__ pal_power_mgmt_info_s; } ;
typedef TYPE_2__ pal_power_mgmt_info_u_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

void
FUNC_2 (void)
{
 pal_power_mgmt_info_u_t VAR_0[8];
 unsigned long VAR_1;
 int VAR_2, VAR_3;

 if (FUNC_1(VAR_0) != 0)
  return;

 VAR_3 = 0;
 VAR_1 = VAR_0[0].pal_power_mgmt_info_s.power_consumption;
 for (VAR_2 = 1; VAR_2 < 8; ++VAR_2)
  if (VAR_0[VAR_2].pal_power_mgmt_info_s.im
      && VAR_0[VAR_2].pal_power_mgmt_info_s.power_consumption < VAR_1) {
   VAR_1 = VAR_0[VAR_2].pal_power_mgmt_info_s.power_consumption;
   VAR_3 = VAR_2;
  }

 while (1)
  FUNC_0(VAR_3);
}
