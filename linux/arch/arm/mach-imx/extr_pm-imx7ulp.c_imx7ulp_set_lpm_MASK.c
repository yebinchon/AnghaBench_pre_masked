
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ulp_cpu_pwr_mode { ____Placeholder_ulp_cpu_pwr_mode } ulp_cpu_pwr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;



 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(enum ulp_cpu_pwr_mode VAR_10)
{
 u32 VAR_11 = FUNC_0(VAR_9 + VAR_8);


 VAR_11 &= ~(VAR_1 | VAR_2 | VAR_0);

 switch (VAR_10) {
 case 130:

  VAR_11 |= VAR_7 << VAR_3;
  break;
 case 128:

  VAR_11 |= VAR_6 << VAR_3;
  break;
 case 129:

  VAR_11 |= VAR_5 << VAR_3;
  break;
 default:
  return -VAR_4;
 }

 FUNC_1(VAR_11, VAR_9 + VAR_8);

 return 0;
}
