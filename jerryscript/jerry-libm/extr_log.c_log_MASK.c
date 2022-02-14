
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 int FUNC_0 (double) ;
 unsigned int FUNC_1 (double) ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;

double
FUNC_2 (double VAR_11)
{
  double VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  int VAR_21, VAR_22, VAR_23, VAR_24;
  unsigned VAR_25;

  VAR_22 = FUNC_0 (VAR_11);
  VAR_25 = FUNC_1 (VAR_11);

  VAR_21 = 0;
  if (VAR_22 < 0x00100000)
  {
    if (((VAR_22 & 0x7fffffff) | VAR_25) == 0)
    {
      return -VAR_9 / VAR_10;
    }
    if (VAR_22 < 0)
    {
      return (VAR_11 - VAR_11) / VAR_10;
    }
    VAR_21 -= 54;
    VAR_11 *= VAR_9;
    VAR_22 = FUNC_0 (VAR_11);
  }
  if (VAR_22 >= 0x7ff00000)
  {
    return VAR_11 + VAR_11;
  }
  VAR_21 += (VAR_22 >> 20) - 1023;
  VAR_22 &= 0x000fffff;
  VAR_23 = (VAR_22 + 0x95f64) & 0x100000;

  double_accessor VAR_26;
  VAR_26.dbl = VAR_11;
  VAR_26.as_int.hi = VAR_22 | (VAR_23 ^ 0x3ff00000);
  VAR_21 += (VAR_23 >> 20);
  VAR_13 = VAR_26.dbl - 1.0;

  if ((0x000fffff & (2 + VAR_22)) < 3)
  {
    if (VAR_13 == VAR_10)
    {
      if (VAR_21 == 0)
      {
        return VAR_10;
      }
      else
      {
        VAR_20 = (double) VAR_21;
        return VAR_20 * VAR_7 + VAR_20 * VAR_8;
      }
    }
    VAR_16 = VAR_13 * VAR_13 * (0.5 - 0.33333333333333333 * VAR_13);
    if (VAR_21 == 0)
    {
      return VAR_13 - VAR_16;
    }
    else
    {
      VAR_20 = (double) VAR_21;
      return VAR_20 * VAR_7 - ((VAR_16 - VAR_20 * VAR_8) - VAR_13);
    }
  }
  VAR_14 = VAR_13 / (2.0 + VAR_13);
  VAR_20 = (double) VAR_21;
  VAR_15 = VAR_14 * VAR_14;
  VAR_23 = VAR_22 - 0x6147a;
  VAR_17 = VAR_15 * VAR_15;
  VAR_24 = 0x6b851 - VAR_22;
  VAR_18 = VAR_17 * (VAR_1 + VAR_17 * (VAR_3 + VAR_17 * VAR_5));
  VAR_19 = VAR_15 * (VAR_0 + VAR_17 * (VAR_2 + VAR_17 * (VAR_4 + VAR_17 * VAR_6)));
  VAR_23 |= VAR_24;
  VAR_16 = VAR_19 + VAR_18;
  if (VAR_23 > 0)
  {
    VAR_12 = 0.5 * VAR_13 * VAR_13;
    if (VAR_21 == 0)
    {
      return VAR_13 - (VAR_12 - VAR_14 * (VAR_12 + VAR_16));
    }
    else
    {
      return VAR_20 * VAR_7 - ((VAR_12 - (VAR_14 * (VAR_12 + VAR_16) + VAR_20 * VAR_8)) - VAR_13);
    }
  }
  else
  {
    if (VAR_21 == 0)
    {
      return VAR_13 - VAR_14 * (VAR_13 - VAR_16);
    }
    else
    {
      return VAR_20 * VAR_7 - ((VAR_14 * (VAR_13 - VAR_16) - VAR_20 * VAR_8) - VAR_13);
    }
  }
}
