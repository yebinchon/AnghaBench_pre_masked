
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
union cvmx_gmxx_inf_mode {TYPE_1__ cn68xx; int u64; } ;
typedef int cvmx_helper_interface_mode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static cvmx_helper_interface_mode_t FUNC_2(int VAR_5)
{
 union cvmx_gmxx_inf_mode VAR_6;

 VAR_6.u64 = FUNC_1(FUNC_0(VAR_5));

 switch (VAR_5) {
 case 0:
 case 1:
  switch (VAR_6.cn68xx.mode) {
  case 0:
   return VAR_0;
  case 1:
  case 2:
   return VAR_3;
  case 3:
   return VAR_4;
  default:
   return VAR_3;
  }
 case 2:
  return VAR_2;
 case 3:
  return VAR_1;
 case 4:

  return VAR_0;
 default:
  return VAR_0;
 }
}
