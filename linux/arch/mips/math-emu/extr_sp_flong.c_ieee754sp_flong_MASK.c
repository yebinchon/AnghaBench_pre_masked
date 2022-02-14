
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ieee754sp {int dummy; } ieee754sp ;
typedef int u64 ;
typedef int s64 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 union ieee754sp FUNC_2 (int,int,int) ;
 union ieee754sp FUNC_3 (int) ;
 union ieee754sp FUNC_4 (int) ;
 union ieee754sp FUNC_5 (int ) ;

union ieee754sp FUNC_6(s64 VAR_1)
{
 u64 VAR_2;
 int VAR_3;
 int VAR_4;

 FUNC_1();

 if (VAR_1 == 0)
  return FUNC_5(0);
 if (VAR_1 == 1 || VAR_1 == -1)
  return FUNC_3(VAR_1 < 0);
 if (VAR_1 == 10 || VAR_1 == -10)
  return FUNC_4(VAR_1 < 0);

 VAR_4 = (VAR_1 < 0);
 if (VAR_4) {
  if (VAR_1 == (1ULL << 63))
   VAR_2 = (1ULL << 63);
  else
   VAR_2 = -VAR_1;
 } else {
  VAR_2 = VAR_1;
 }
 VAR_3 = VAR_0 + 3;

 if (VAR_2 >> (VAR_0 + 1 + 3)) {


  while (VAR_2 >> (VAR_0 + 1 + 3)) {
   FUNC_0();
  }
 } else {

  while ((VAR_2 >> (VAR_0 + 3)) == 0) {
   VAR_2 <<= 1;
   VAR_3--;
  }
 }
 return FUNC_2(VAR_4, VAR_3, VAR_2);
}
