
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,int,...) ;

void
FUNC_4(int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
  VAR_5 = FUNC_1();
 VAR_3 -= 0;




 if (VAR_3 <= 0)
  VAR_7 = 0;
 else if (VAR_3 < 256)






  VAR_7 = ((u_int)VAR_3 * 39099 + (1 << 15) - 1) >> 15;
 else






  VAR_7 = ((u_int)VAR_3 * (long long)VAR_0 + 999999)
        / 1000000;

 while (VAR_7 > 0) {
   VAR_6 = FUNC_1();



  VAR_4 = VAR_5 - VAR_6;
  VAR_5 = VAR_6;
  if (VAR_4 < 0) {
   VAR_4 += VAR_1;






   if (VAR_4 < 0)
    VAR_4 = 0;
  }
  VAR_7 -= VAR_4;
 }





}
