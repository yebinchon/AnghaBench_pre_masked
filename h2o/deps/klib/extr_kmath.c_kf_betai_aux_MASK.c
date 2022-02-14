
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 double FUNC_3 (int) ;

__attribute__((used)) static double FUNC_4(double VAR_2, double VAR_3, double VAR_4)
{
 double VAR_5, VAR_6, VAR_7;
 int VAR_8;
 if (VAR_4 == 0.) return 0.;
 if (VAR_4 == 1.) return 1.;
 VAR_7 = 1.; VAR_5 = VAR_7; VAR_6 = 0.;

 for (VAR_8 = 1; VAR_8 < 200; ++VAR_8) {
  double VAR_9, VAR_10;
  int VAR_11 = VAR_8>>1;
  VAR_9 = (VAR_8&1)? -(VAR_2 + VAR_11) * (VAR_2 + VAR_3 + VAR_11) * VAR_4 / ((VAR_2 + 2*VAR_11) * (VAR_2 + 2*VAR_11 + 1))
   : VAR_11 * (VAR_3 - VAR_11) * VAR_4 / ((VAR_2 + 2*VAR_11 - 1) * (VAR_2 + 2*VAR_11));
  VAR_6 = 1. + VAR_9 * VAR_6;
  if (VAR_6 < VAR_1) VAR_6 = VAR_1;
  VAR_5 = 1. + VAR_9 / VAR_5;
  if (VAR_5 < VAR_1) VAR_5 = VAR_1;
  VAR_6 = 1. / VAR_6;
  VAR_10 = VAR_5 * VAR_6;
  VAR_7 *= VAR_10;
  if (FUNC_1(VAR_10 - 1.) < VAR_0) break;
 }
 return FUNC_0(FUNC_2(VAR_2+VAR_3) - FUNC_2(VAR_2) - FUNC_2(VAR_3) + VAR_2 * FUNC_3(VAR_4) + VAR_3 * FUNC_3(1.-VAR_4)) / VAR_2 / VAR_7;
}
