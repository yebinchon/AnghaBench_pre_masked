
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
 unsigned int FUNC_0 (double) ;
 unsigned int FUNC_1 (double) ;
 scalar_t__* VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double* VAR_8 ;
 double* VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;

double
FUNC_2 (double VAR_14)
{
  double VAR_15, VAR_16, VAR_17, VAR_18;
  int VAR_19 = 0, VAR_20;
  unsigned VAR_21;

  VAR_21 = FUNC_0 (VAR_14);
  VAR_20 = (VAR_21 >> 31) & 1;
  VAR_21 &= 0x7fffffff;


  if (VAR_21 >= 0x40862E42)
  {
    if (VAR_21 >= 0x7ff00000)
    {
      if (((VAR_21 & 0xfffff) | FUNC_1 (VAR_14)) != 0)
      {
        return VAR_14 + VAR_14;
      }
      else
      {
        return (VAR_20 == 0) ? VAR_14 : 0.0;
      }
    }
    if (VAR_14 > VAR_10)
    {
      return VAR_6 * VAR_6;
    }
    if (VAR_14 < VAR_13)
    {
      return VAR_12 * VAR_12;
    }
  }


  if (VAR_21 > 0x3fd62e42)
  {
    if (VAR_21 < 0x3FF0A2B2)
    {
      VAR_15 = VAR_14 - VAR_8[VAR_20];
      VAR_16 = VAR_9[VAR_20];
      VAR_19 = 1 - VAR_20 - VAR_20;
    }
    else
    {
      VAR_19 = (int) (VAR_7 * VAR_14 + VAR_5[VAR_20]);
      VAR_18 = VAR_19;
      VAR_15 = VAR_14 - VAR_18 * VAR_8[0];
      VAR_16 = VAR_18 * VAR_9[0];
    }
    VAR_14 = VAR_15 - VAR_16;
  }
  else if (VAR_21 < 0x3e300000)
  {
    if (VAR_6 + VAR_14 > VAR_11)
    {
      return VAR_11 + VAR_14;
    }
  }
  else
  {
    VAR_19 = 0;
  }

  double_accessor VAR_22;


  VAR_18 = VAR_14 * VAR_14;
  VAR_17 = VAR_14 - VAR_18 * (VAR_0 + VAR_18 * (VAR_1 + VAR_18 * (VAR_2 + VAR_18 * (VAR_3 + VAR_18 * VAR_4))));
  if (VAR_19 == 0)
  {
    return VAR_11 - ((VAR_14 * VAR_17) / (VAR_17 - 2.0) - VAR_14);
  }
  else
  {
    VAR_22.dbl = VAR_11 - ((VAR_16 - (VAR_14 * VAR_17) / (2.0 - VAR_17)) - VAR_15);
  }
  if (VAR_19 >= -1021)
  {
    VAR_22.as_int.hi += (VAR_19 << 20);
    return VAR_22.dbl;
  }
  else
  {
    VAR_22.as_int.hi += ((VAR_19 + 1000) << 20);
    return VAR_22.dbl * VAR_12;
  }
}
