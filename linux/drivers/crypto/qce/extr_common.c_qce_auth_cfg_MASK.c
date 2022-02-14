
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (unsigned long) ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static u32 FUNC_12(unsigned long VAR_23, u32 VAR_24)
{
 u32 VAR_25 = 0;

 if (FUNC_1(VAR_23) && (FUNC_3(VAR_23) || FUNC_4(VAR_23)))
  VAR_25 |= VAR_2 << VAR_4;
 else
  VAR_25 |= VAR_3 << VAR_4;

 if (FUNC_3(VAR_23) || FUNC_4(VAR_23)) {
  if (VAR_24 == VAR_0)
   VAR_25 |= VAR_7 << VAR_6;
  else if (VAR_24 == VAR_1)
   VAR_25 |= VAR_8 << VAR_6;
 }

 if (FUNC_7(VAR_23) || FUNC_8(VAR_23))
  VAR_25 |= VAR_19 << VAR_21;
 else if (FUNC_9(VAR_23) || FUNC_10(VAR_23))
  VAR_25 |= VAR_20 << VAR_21;
 else if (FUNC_4(VAR_23))
  VAR_25 |= VAR_18 << VAR_21;

 if (FUNC_7(VAR_23) || FUNC_9(VAR_23))
  VAR_25 |= VAR_12 << VAR_14;
 else if (FUNC_8(VAR_23) || FUNC_10(VAR_23) ||
   FUNC_2(VAR_23) || FUNC_5(VAR_23))
  VAR_25 |= VAR_13 << VAR_14;
 else if (FUNC_1(VAR_23) && FUNC_3(VAR_23))
  VAR_25 |= VAR_10 << VAR_14;
 else if (FUNC_1(VAR_23) && FUNC_4(VAR_23))
  VAR_25 |= VAR_11 << VAR_14;

 if (FUNC_6(VAR_23) || FUNC_11(VAR_23))
  VAR_25 |= VAR_16 << VAR_17;

 if (FUNC_3(VAR_23))
  VAR_25 |= VAR_22 << VAR_15;

 if (FUNC_2(VAR_23) || FUNC_5(VAR_23) || FUNC_3(VAR_23) ||
     FUNC_4(VAR_23))
  VAR_25 |= FUNC_0(VAR_9) | FUNC_0(VAR_5);

 return VAR_25;
}
