
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;




 unsigned long VAR_18 ;


__attribute__((used)) static u32 FUNC_3(unsigned long VAR_19, u32 VAR_20)
{
 u32 VAR_21 = 0;

 if (FUNC_1(VAR_19)) {
  if (VAR_20 == VAR_0)
   VAR_21 |= VAR_6 << VAR_9;
  else if (VAR_20 == VAR_1)
   VAR_21 |= VAR_7 << VAR_9;
 }

 if (FUNC_1(VAR_19))
  VAR_21 |= VAR_2 << VAR_4;
 else if (FUNC_2(VAR_19) || FUNC_0(VAR_19))
  VAR_21 |= VAR_3 << VAR_4;

 if (FUNC_2(VAR_19))
  VAR_21 |= VAR_8 << VAR_9;

 if (FUNC_0(VAR_19))
  VAR_21 |= VAR_5 << VAR_9;

 switch (VAR_19 & VAR_18) {
 case 129:
  VAR_21 |= VAR_13 << VAR_14;
  break;
 case 132:
  VAR_21 |= VAR_10 << VAR_14;
  break;
 case 130:
  VAR_21 |= VAR_12 << VAR_14;
  break;
 case 128:
  VAR_21 |= VAR_15 << VAR_14;
  break;
 case 131:
  VAR_21 |= VAR_11 << VAR_14;
  VAR_21 |= VAR_17 << VAR_16;
  break;
 default:
  return ~0;
 }

 return VAR_21;
}
