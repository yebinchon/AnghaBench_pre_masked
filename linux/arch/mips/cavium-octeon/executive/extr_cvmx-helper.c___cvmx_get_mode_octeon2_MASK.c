
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int qlm_spd; int qlm_cfg; } ;
union cvmx_mio_qlmx_cfg {TYPE_1__ s; void* u64; } ;
struct TYPE_6__ {scalar_t__ type; int en; } ;
struct TYPE_5__ {int mode; } ;
union cvmx_gmxx_inf_mode {TYPE_3__ s; TYPE_2__ cn61xx; void* u64; } ;
typedef int cvmx_helper_interface_mode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static cvmx_helper_interface_mode_t FUNC_5(int VAR_12)
{
 union cvmx_gmxx_inf_mode VAR_13;

 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_12);

 if (VAR_12 == 2)
  return VAR_3;

 if (VAR_12 == 3)
  return VAR_2;


 if ((FUNC_2(VAR_8) &&
      (VAR_12 == 4 || VAR_12 == 5)) ||
     (FUNC_2(VAR_9) &&
      VAR_12 >= 4 && VAR_12 <= 7)) {
  return VAR_0;
 }

 if (FUNC_2(VAR_9)) {
  union cvmx_mio_qlmx_cfg VAR_14;


  if (VAR_12 == 0)
   VAR_14.u64 = FUNC_4(FUNC_1(2));
  else if (VAR_12 == 1)
   VAR_14.u64 = FUNC_4(FUNC_1(1));
  else
   return VAR_0;

  if (VAR_14.s.qlm_spd == 15)
   return VAR_0;

  if (VAR_14.s.qlm_cfg == 9)
   return VAR_5;
  else if (VAR_14.s.qlm_cfg == 11)
   return VAR_6;
  else
   return VAR_0;
 } else if (FUNC_2(VAR_7)) {
  union cvmx_mio_qlmx_cfg VAR_15;

  if (VAR_12 == 0) {
   VAR_15.u64 = FUNC_4(FUNC_1(2));
   if (VAR_15.s.qlm_cfg == 2)
    return VAR_5;
   else if (VAR_15.s.qlm_cfg == 3)
    return VAR_6;
   else
    return VAR_0;
  } else if (VAR_12 == 1) {
   VAR_15.u64 = FUNC_4(FUNC_1(0));
   if (VAR_15.s.qlm_cfg == 2)
    return VAR_5;
   else if (VAR_15.s.qlm_cfg == 3)
    return VAR_6;
   else
    return VAR_0;
  }
 } else if (FUNC_2(VAR_11)) {
  if (VAR_12 == 0) {
   union cvmx_mio_qlmx_cfg VAR_16;
   VAR_16.u64 = FUNC_4(FUNC_1(0));
   if (VAR_16.s.qlm_cfg == 2)
    return VAR_5;
  }
  return VAR_0;
 }

 if (VAR_12 == 1 && FUNC_2(VAR_8))
  return VAR_0;

 VAR_13.u64 = FUNC_4(FUNC_0(VAR_12));

 if (FUNC_2(VAR_8)) {
  switch (VAR_13.cn61xx.mode) {
  case 0:
   return VAR_5;
  case 1:
   return VAR_6;
  default:
   return VAR_0;
  }
 } else {
  if (!VAR_13.s.en)
   return VAR_0;

  if (VAR_13.s.type)
   return VAR_1;
  else
   return VAR_4;
 }
}
