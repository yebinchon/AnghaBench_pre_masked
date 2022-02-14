
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(int VAR_6, int VAR_7, s32 VAR_8, u32 VAR_9)
{
 s32 VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_6);
 if (FUNC_2(VAR_8) == 255 && FUNC_3(VAR_8)) {
  VAR_11 |= VAR_0 | VAR_3;
  if (VAR_7 || !(FUNC_3(VAR_8) & (1 << (VAR_5 - 1))))



   VAR_11 |= VAR_1;
 }

 if (FUNC_2(VAR_10) == 255 && FUNC_3(VAR_10)) {
  VAR_11 |= VAR_0 | VAR_3;
  if (VAR_7 || !(FUNC_3(VAR_10) & (1 << (VAR_5 - 1))))



   VAR_11 |= VAR_1;
 }

 if (VAR_11 == 0) {
  if (VAR_10 == VAR_8 || FUNC_1(VAR_10 | VAR_8) == 0) {



   VAR_11 |= VAR_4 | VAR_0;
  } else if (FUNC_4(VAR_10 ^ VAR_8)) {



   if (FUNC_4(VAR_10))



    VAR_11 |= VAR_2;
   else



    VAR_11 |= VAR_0;
  } else if ((FUNC_4(VAR_10) != 0) ^ (VAR_10 < VAR_8)) {



   VAR_11 |= VAR_2;
  } else if ((FUNC_4(VAR_10) != 0) ^ (VAR_10 > VAR_8)) {



   VAR_11 |= VAR_0;
  }
 }
 return VAR_11;
}
