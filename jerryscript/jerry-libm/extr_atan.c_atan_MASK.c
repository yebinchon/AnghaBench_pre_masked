
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double* VAR_11 ;
 double* VAR_12 ;
 double FUNC_2 (double) ;
 double VAR_13 ;
 double VAR_14 ;

double
FUNC_3 (double VAR_15)
{
  double VAR_16, VAR_17, VAR_18, VAR_19;
  int VAR_20, VAR_21, VAR_22;

  VAR_21 = FUNC_0 (VAR_15);
  VAR_20 = VAR_21 & 0x7fffffff;
  if (VAR_20 >= 0x44100000)
  {
    if (VAR_20 > 0x7ff00000 || (VAR_20 == 0x7ff00000 && (FUNC_1 (VAR_15) != 0)))
    {
      return VAR_15 + VAR_15;
    }
    if (VAR_21 > 0)
    {
      return VAR_11[3] + VAR_12[3];
    }
    else
    {
      return -VAR_11[3] - VAR_12[3];
    }
  }
  if (VAR_20 < 0x3fdc0000)
  {
    if (VAR_20 < 0x3e200000)
    {
      if (VAR_13 + VAR_15 > VAR_14)
      {
        return VAR_15;
      }
    }
    VAR_22 = -1;
  }
  else
  {
    VAR_15 = FUNC_2 (VAR_15);
    if (VAR_20 < 0x3ff30000)
    {
      if (VAR_20 < 0x3fe60000)
      {
        VAR_22 = 0;
        VAR_15 = (2.0 * VAR_15 - VAR_14) / (2.0 + VAR_15);
      }
      else
      {
        VAR_22 = 1;
        VAR_15 = (VAR_15 - VAR_14) / (VAR_15 + VAR_14);
      }
    }
    else
    {
      if (VAR_20 < 0x40038000)
      {
        VAR_22 = 2;
        VAR_15 = (VAR_15 - 1.5) / (VAR_14 + 1.5 * VAR_15);
      }
      else
      {
        VAR_22 = 3;
        VAR_15 = -1.0 / VAR_15;
      }
    }
  }

  VAR_19 = VAR_15 * VAR_15;
  VAR_16 = VAR_19 * VAR_19;

  VAR_17 = VAR_19 * (VAR_0 + VAR_16 * (VAR_3 + VAR_16 * (VAR_5 + VAR_16 * (VAR_7 + VAR_16 * (VAR_9 + VAR_16 * VAR_2)))));
  VAR_18 = VAR_16 * (VAR_1 + VAR_16 * (VAR_4 + VAR_16 * (VAR_6 + VAR_16 * (VAR_8 + VAR_16 * VAR_10))));
  if (VAR_22 < 0)
  {
    return VAR_15 - VAR_15 * (VAR_17 + VAR_18);
  }
  else
  {
    VAR_19 = VAR_11[VAR_22] - ((VAR_15 * (VAR_17 + VAR_18) - VAR_12[VAR_22]) - VAR_15);
    return (VAR_21 < 0) ? -VAR_19 : VAR_19;
  }
}
