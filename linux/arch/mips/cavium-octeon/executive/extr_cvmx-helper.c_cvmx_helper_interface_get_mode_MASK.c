
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int en; } ;
struct TYPE_3__ {int mode; } ;
union cvmx_gmxx_inf_mode {TYPE_2__ s; TYPE_1__ cn52xx; int u64; } ;
typedef int cvmx_helper_interface_mode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

cvmx_helper_interface_mode_t FUNC_6(int VAR_19)
{
 union cvmx_gmxx_inf_mode VAR_20;

 if (VAR_19 < 0 ||
     VAR_19 >= FUNC_4())
  return VAR_0;




 if (FUNC_1(VAR_17))
  return FUNC_2(VAR_19);




 if (FUNC_1(VAR_16) || FUNC_1(VAR_18))
  return FUNC_3(VAR_19);




 if (VAR_19 == 2)
  return VAR_3;

 if (VAR_19 == 3) {
  if (FUNC_1(VAR_14)
      || FUNC_1(VAR_13))
   return VAR_2;
  else
   return VAR_0;
 }


 if ((VAR_19 == 1)
     && (FUNC_1(VAR_10) || FUNC_1(VAR_9)
  || FUNC_1(VAR_12)
  || FUNC_1(VAR_13)))
  return VAR_0;

 VAR_20.u64 = FUNC_5(FUNC_0(VAR_19));

 if (FUNC_1(VAR_14) || FUNC_1(VAR_13)) {
  switch (VAR_20.cn52xx.mode) {
  case 0:
   return VAR_0;
  case 1:
   return VAR_8;
  case 2:
   return VAR_6;
  case 3:
   return VAR_4;
  default:
   return VAR_0;
  }
 } else {
  if (!VAR_20.s.en)
   return VAR_0;

  if (VAR_20.s.type) {
   if (FUNC_1(VAR_11)
       || FUNC_1(VAR_15))
    return VAR_7;
   else
    return VAR_1;
  } else
   return VAR_5;
 }
}
