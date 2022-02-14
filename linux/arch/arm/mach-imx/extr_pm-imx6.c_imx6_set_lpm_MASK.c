
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum mxc_cpu_pwr_mode { ____Placeholder_mxc_cpu_pwr_mode } mxc_cpu_pwr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;





 scalar_t__ VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

int FUNC_10(enum mxc_cpu_pwr_mode VAR_12)
{
 u32 VAR_13 = FUNC_8(VAR_11 + VAR_9);

 VAR_13 &= ~VAR_4;
 switch (VAR_12) {
 case 130:
  break;
 case 129:
  VAR_13 |= 0x1 << VAR_7;
  VAR_13 |= VAR_0;
  break;
 case 131:
  VAR_13 |= 0x2 << VAR_7;
  VAR_13 &= ~VAR_6;
  VAR_13 &= ~VAR_5;
  if (FUNC_0())
   VAR_13 |= VAR_1;
  if (FUNC_0() || FUNC_2() || FUNC_3() ||
      FUNC_4() || FUNC_1() || FUNC_5())
   VAR_13 |= VAR_2;
  else
   VAR_13 |= VAR_3;
  break;
 case 128:
  VAR_13 |= 0x1 << VAR_7;
  VAR_13 &= ~VAR_6;
  VAR_13 &= ~VAR_5;
  break;
 case 132:
  VAR_13 |= 0x2 << VAR_7;
  VAR_13 |= 0x3 << VAR_8;
  VAR_13 |= VAR_6;
  VAR_13 |= VAR_5;
  if (FUNC_0() || FUNC_2())
   VAR_13 |= VAR_1;
  if (FUNC_0() || FUNC_2() || FUNC_3() ||
      FUNC_4() || FUNC_1() || FUNC_5())
   VAR_13 |= VAR_2;
  else
   VAR_13 |= VAR_3;
  break;
 default:
  return -VAR_10;
 }
 if (VAR_12 != 130)
  FUNC_7(0);
 FUNC_9(VAR_13, VAR_11 + VAR_9);
 if (VAR_12 != 130)
  FUNC_6(0);

 return 0;
}
