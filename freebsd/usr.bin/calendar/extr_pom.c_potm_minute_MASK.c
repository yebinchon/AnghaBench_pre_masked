
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double
FUNC_2(double VAR_2, int VAR_3) {
 double VAR_4 = VAR_0 / 2.0;
 double VAR_5, VAR_6;
 double VAR_7, VAR_8;
 int VAR_9;



 VAR_5 = VAR_2 + (VAR_4 / VAR_1);
 VAR_4 /= 2;

 while (VAR_4 > 30) {

  VAR_6 = VAR_5 + (2.0 / VAR_1);
  VAR_7 = FUNC_1(VAR_5);
  VAR_8 = FUNC_1(VAR_6);

  VAR_9 = VAR_7 < VAR_8 ? -1 : +1;
  if (VAR_3 != VAR_9)
   VAR_5 += (VAR_4 / VAR_1);
  else
   VAR_5 -= (VAR_4 / VAR_1);
  VAR_4 /= 2;


 }
 VAR_5 -= FUNC_0(VAR_5);

 return (VAR_5);
}
