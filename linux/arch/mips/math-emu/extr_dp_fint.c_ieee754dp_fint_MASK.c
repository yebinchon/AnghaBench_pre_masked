
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ieee754dp {int dummy; } ieee754dp ;
typedef int u64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union ieee754dp FUNC_0 (int,scalar_t__,int) ;
 int FUNC_1 () ;
 union ieee754dp FUNC_2 (int) ;
 union ieee754dp FUNC_3 (int) ;
 union ieee754dp FUNC_4 (int ) ;

union ieee754dp FUNC_5(int VAR_3)
{
 u64 VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_1();

 if (VAR_3 == 0)
  return FUNC_4(0);
 if (VAR_3 == 1 || VAR_3 == -1)
  return FUNC_2(VAR_3 < 0);
 if (VAR_3 == 10 || VAR_3 == -10)
  return FUNC_3(VAR_3 < 0);

 VAR_6 = (VAR_3 < 0);
 if (VAR_6) {
  if (VAR_3 == (1 << 31))
   VAR_4 = ((unsigned) 1 << 31);
  else
   VAR_4 = -VAR_3;
 } else {
  VAR_4 = VAR_3;
 }


 VAR_5 = VAR_1;
 while ((VAR_4 >> VAR_1) == 0) {
  VAR_4 <<= 1;
  VAR_5--;
 }
 return FUNC_0(VAR_6, VAR_5 + VAR_0, VAR_4 & ~VAR_2);
}
