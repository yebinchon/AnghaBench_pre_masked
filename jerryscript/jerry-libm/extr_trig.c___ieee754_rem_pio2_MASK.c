
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; int lo; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 int FUNC_2 (double*,double*,int,int,int) ;
 double FUNC_3 (double) ;
 scalar_t__ VAR_0 ;
 double VAR_1 ;
 int* VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;

__attribute__((used)) static int
FUNC_4 (double VAR_11, double *VAR_12)
{
  double_accessor VAR_13;
  double VAR_14, VAR_15, VAR_16, VAR_17;
  double VAR_18[3];
  int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

  VAR_25 = FUNC_0 (VAR_11);
  VAR_24 = VAR_25 & 0x7fffffff;
  if (VAR_24 <= 0x3fe921fb)
  {
    VAR_12[0] = VAR_11;
    VAR_12[1] = 0;
    return 0;
  }
  if (VAR_24 < 0x4002d97c)
  {
    if (VAR_25 > 0)
    {
      VAR_13.dbl = VAR_11 - VAR_3;
      if (VAR_24 != 0x3ff921fb)
      {
        VAR_12[0] = VAR_13.dbl - VAR_4;
        VAR_12[1] = (VAR_13.dbl - VAR_12[0]) - VAR_4;
      }
      else
      {
        VAR_13.dbl -= VAR_5;
        VAR_12[0] = VAR_13.dbl - VAR_6;
        VAR_12[1] = (VAR_13.dbl - VAR_12[0]) - VAR_6;
      }
      return 1;
    }
    else
    {
      VAR_13.dbl = VAR_11 + VAR_3;
      if (VAR_24 != 0x3ff921fb)
      {
        VAR_12[0] = VAR_13.dbl + VAR_4;
        VAR_12[1] = (VAR_13.dbl - VAR_12[0]) + VAR_4;
      }
      else
      {
        VAR_13.dbl += VAR_5;
        VAR_12[0] = VAR_13.dbl + VAR_6;
        VAR_12[1] = (VAR_13.dbl - VAR_12[0]) + VAR_6;
      }
      return -1;
    }
  }
  if (VAR_24 <= 0x413921fb)
  {
    VAR_15 = FUNC_3 (VAR_11);
    VAR_23 = (int) (VAR_15 * VAR_1 + VAR_0);
    VAR_17 = (double) VAR_23;
    VAR_16 = VAR_15 - VAR_17 * VAR_3;
    VAR_14 = VAR_17 * VAR_4;
    if (VAR_23 < 32 && VAR_24 != VAR_2[VAR_23 - 1])
    {
      VAR_12[0] = VAR_16 - VAR_14;
    }
    else
    {
      VAR_21 = VAR_24 >> 20;
      VAR_12[0] = VAR_16 - VAR_14;
      VAR_20 = VAR_21 - (((FUNC_0 (VAR_12[0])) >> 20) & 0x7ff);
      if (VAR_20 > 16)
      {
        VAR_15 = VAR_16;
        VAR_14 = VAR_17 * VAR_5;
        VAR_16 = VAR_15 - VAR_14;
        VAR_14 = VAR_17 * VAR_6 - ((VAR_15 - VAR_16) - VAR_14);
        VAR_12[0] = VAR_16 - VAR_14;
        VAR_20 = VAR_21 - (((FUNC_0 (VAR_12[0])) >> 20) & 0x7ff);
        if (VAR_20 > 49)
        {
          VAR_15 = VAR_16;
          VAR_14 = VAR_17 * VAR_7;
          VAR_16 = VAR_15 - VAR_14;
          VAR_14 = VAR_17 * VAR_8 - ((VAR_15 - VAR_16) - VAR_14);
          VAR_12[0] = VAR_16 - VAR_14;
        }
      }
    }
    VAR_12[1] = (VAR_16 - VAR_12[0]) - VAR_14;
    if (VAR_25 < 0)
    {
      VAR_12[0] = -VAR_12[0];
      VAR_12[1] = -VAR_12[1];
      return -VAR_23;
    }
    else
    {
      return VAR_23;
    }
  }



  if (VAR_24 >= 0x7ff00000)
  {
    VAR_12[0] = VAR_12[1] = VAR_11 - VAR_11;
    return 0;
  }

  VAR_13.as_int.lo = FUNC_1 (VAR_11);
  VAR_19 = (VAR_24 >> 20) - 1046;
  VAR_13.as_int.hi = VAR_24 - (VAR_19 << 20);
  for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  {
    VAR_18[VAR_20] = (double) ((int) (VAR_13.dbl));
    VAR_13.dbl = (VAR_13.dbl - VAR_18[VAR_20]) * VAR_9;
  }
  VAR_18[2] = VAR_13.dbl;
  VAR_22 = 3;
  while (VAR_18[VAR_22 - 1] == VAR_10)
  {
    VAR_22--;
  }
  VAR_23 = FUNC_2 (VAR_18, VAR_12, VAR_19, VAR_22, 2);
  if (VAR_25 < 0)
  {
    VAR_12[0] = -VAR_12[0];
    VAR_12[1] = -VAR_12[1];
    return -VAR_23;
  }
  return VAR_23;
}
