
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;

__attribute__((used)) static double FUNC_4(double VAR_2, double VAR_3)
{
 int VAR_4;
 double VAR_5, VAR_6, VAR_7;
 VAR_7 = 1. + VAR_3 - VAR_2; VAR_5 = VAR_7; VAR_6 = 0.;


 for (VAR_4 = 1; VAR_4 < 100; ++VAR_4) {
  double VAR_8 = VAR_4 * (VAR_2 - VAR_4), VAR_9 = (VAR_4<<1) + 1 + VAR_3 - VAR_2, VAR_10;
  VAR_6 = VAR_9 + VAR_8 * VAR_6;
  if (VAR_6 < VAR_1) VAR_6 = VAR_1;
  VAR_5 = VAR_9 + VAR_8 / VAR_5;
  if (VAR_5 < VAR_1) VAR_5 = VAR_1;
  VAR_6 = 1. / VAR_6;
  VAR_10 = VAR_5 * VAR_6;
  VAR_7 *= VAR_10;
  if (FUNC_1(VAR_10 - 1.) < VAR_0) break;
 }
 return FUNC_0(VAR_2 * FUNC_3(VAR_3) - VAR_3 - FUNC_2(VAR_2) - FUNC_3(VAR_7));
}
