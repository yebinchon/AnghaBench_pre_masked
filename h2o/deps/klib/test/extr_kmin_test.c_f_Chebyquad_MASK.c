
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

double FUNC_0(int VAR_1, double *VAR_2, void *VAR_3)
{
    int VAR_4, VAR_5;
    double VAR_6[20][20], VAR_7;
    int VAR_8, VAR_9;
    double VAR_10;
    for (VAR_5 = 0; VAR_5 != VAR_1; ++VAR_5) {
  VAR_6[0][VAR_5] = 1.;
  VAR_6[1][VAR_5] = 2. * VAR_2[VAR_5] - 1.;
    }
    for (VAR_4 = 1; VAR_4 != VAR_1; ++VAR_4)
  for (VAR_5 = 0; VAR_5 != VAR_1; ++VAR_5)
   VAR_6[VAR_4+1][VAR_5] = 2. * VAR_6[1][VAR_5] * VAR_6[VAR_4][VAR_5] - VAR_6[VAR_4-1][VAR_5];
    VAR_7 = 0.;
    VAR_8 = VAR_1 + 1;
    VAR_9 = 1;
    for (VAR_4 = 0; VAR_4 != VAR_8; ++VAR_4) {
  VAR_10 = 0.;
  for (VAR_5 = 0; VAR_5 != VAR_1; ++VAR_5) VAR_10 += VAR_6[VAR_4][VAR_5];
  VAR_10 /= VAR_1;
  if (VAR_9 > 0) VAR_10 += 1. / ((VAR_4 - 1) * (VAR_4 + 1));
  VAR_9 = -VAR_9;
  VAR_7 += VAR_10 * VAR_10;
    }
 ++VAR_0;
    return VAR_7;
}
