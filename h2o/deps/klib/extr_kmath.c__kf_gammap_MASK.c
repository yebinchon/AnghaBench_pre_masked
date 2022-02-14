
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(double VAR_1, double VAR_2)
{
 double VAR_3, VAR_4;
 int VAR_5;
 for (VAR_5 = 1, VAR_3 = VAR_4 = 1.; VAR_5 < 100; ++VAR_5) {
  VAR_3 += (VAR_4 *= VAR_2 / (VAR_1 + VAR_5));
  if (VAR_4 / VAR_3 < VAR_0) break;
 }
 return FUNC_0(VAR_1 * FUNC_2(VAR_2) - VAR_2 - FUNC_1(VAR_1 + 1.) + FUNC_2(VAR_3));
}
