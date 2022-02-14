
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

double FUNC_1(int VAR_0, const double VAR_1[], int VAR_2, const double VAR_3[])
{
 int VAR_4 = 0, VAR_5 = 0;
 double VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 1. / VAR_0, VAR_10 = 1. / VAR_2;
 while (VAR_4 < VAR_0 || VAR_5 < VAR_2) {
  if (VAR_4 == VAR_0) VAR_7 += VAR_10, ++VAR_5;
  else if (VAR_5 == VAR_2) VAR_6 += VAR_9, ++VAR_4;
  else if (VAR_1[VAR_4] < VAR_3[VAR_5]) VAR_6 += VAR_9, ++VAR_4;
  else if (VAR_1[VAR_4] > VAR_3[VAR_5]) VAR_7 += VAR_10, ++VAR_5;
  else VAR_6 += VAR_9, VAR_7 += VAR_10, ++VAR_4, ++VAR_5;
  if (VAR_8 < FUNC_0(VAR_6 - VAR_7)) VAR_8 = FUNC_0(VAR_6 - VAR_7);
 }
 return VAR_8;
}
