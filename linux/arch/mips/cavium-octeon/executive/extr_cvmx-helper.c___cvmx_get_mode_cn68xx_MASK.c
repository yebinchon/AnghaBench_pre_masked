
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qlm_spd; int qlm_cfg; } ;
union cvmx_mio_qlmx_cfg {TYPE_1__ s; void* u64; } ;
typedef int cvmx_helper_interface_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static cvmx_helper_interface_mode_t FUNC_2(int VAR_5)
{
 union cvmx_mio_qlmx_cfg VAR_6;
 switch (VAR_5) {
 case 0:
  VAR_6.u64 = FUNC_1(FUNC_0(0));

  if (VAR_6.s.qlm_spd == 15)
   return VAR_0;

  if (VAR_6.s.qlm_cfg == 2)
   return VAR_3;
  else if (VAR_6.s.qlm_cfg == 3)
   return VAR_4;
  else
   return VAR_0;
 case 2:
 case 3:
 case 4:
  VAR_6.u64 = FUNC_1(FUNC_0(VAR_5));

  if (VAR_6.s.qlm_spd == 15)
   return VAR_0;

  if (VAR_6.s.qlm_cfg == 2)
   return VAR_3;
  else if (VAR_6.s.qlm_cfg == 3)
   return VAR_4;
  else
   return VAR_0;
 case 7:
  VAR_6.u64 = FUNC_1(FUNC_0(3));

  if (VAR_6.s.qlm_spd == 15) {
   return VAR_0;
  } else if (VAR_6.s.qlm_cfg != 0) {
   VAR_6.u64 = FUNC_1(FUNC_0(1));
   if (VAR_6.s.qlm_cfg != 0)
    return VAR_0;
  }
  return VAR_2;
 case 8:
  return VAR_1;
 default:
  return VAR_0;
 }
}
