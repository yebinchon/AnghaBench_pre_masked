
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lo; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double) ;
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
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 double VAR_14 ;
 double FUNC_3 (double) ;

double
FUNC_4 (double VAR_15)
{
  double VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
  double_accessor VAR_22;
  int VAR_23, VAR_24;

  VAR_23 = FUNC_0 (VAR_15);
  VAR_24 = VAR_23 & 0x7fffffff;
  if (VAR_24 >= 0x3ff00000)
  {
    if (((VAR_24 - 0x3ff00000) | FUNC_1 (VAR_15)) == 0)
    {
      return VAR_15 * VAR_8 + VAR_15 * VAR_9;
    }
    return (VAR_15 - VAR_15) / (VAR_15 - VAR_15);
  }
  else if (VAR_24 < 0x3fe00000)
  {
    if (VAR_24 < 0x3e400000)
    {
      if (VAR_0 + VAR_15 > VAR_1)
      {
        return VAR_15;
      }
    }
    VAR_16 = VAR_15 * VAR_15;
    VAR_17 = VAR_16 * (VAR_2 + VAR_16 * (VAR_3 + VAR_16 * (VAR_4 + VAR_16 * (VAR_5 + VAR_16 * (VAR_6 + VAR_16 * VAR_7)))));
    VAR_18 = VAR_1 + VAR_16 * (VAR_11 + VAR_16 * (VAR_12 + VAR_16 * (VAR_13 + VAR_16 * VAR_14)));
    VAR_22.dbl = VAR_17 / VAR_18;
    return VAR_15 + VAR_15 * VAR_22.dbl;
  }

  VAR_22.dbl = VAR_1 - FUNC_2 (VAR_15);
  VAR_16 = VAR_22.dbl * 0.5;
  VAR_17 = VAR_16 * (VAR_2 + VAR_16 * (VAR_3 + VAR_16 * (VAR_4 + VAR_16 * (VAR_5 + VAR_16 * (VAR_6 + VAR_16 * VAR_7)))));
  VAR_18 = VAR_1 + VAR_16 * (VAR_11 + VAR_16 * (VAR_12 + VAR_16 * (VAR_13 + VAR_16 * VAR_14)));
  VAR_21 = FUNC_3 (VAR_16);
  if (VAR_24 >= 0x3FEF3333)
  {
    VAR_22.dbl = VAR_17 / VAR_18;
    VAR_16 = VAR_8 - (2.0 * (VAR_21 + VAR_21 * VAR_22.dbl) - VAR_9);
  }
  else
  {
    VAR_22.dbl = VAR_21;
    VAR_22.as_int.lo = 0;
    VAR_19 = (VAR_16 - VAR_22.dbl * VAR_22.dbl) / (VAR_21 + VAR_22.dbl);
    VAR_20 = VAR_17 / VAR_18;
    VAR_17 = 2.0 * VAR_21 * VAR_20 - (VAR_9 - 2.0 * VAR_19);
    VAR_18 = VAR_10 - 2.0 * VAR_22.dbl;
    VAR_16 = VAR_10 - (VAR_17 - VAR_18);
  }
  if (VAR_23 > 0)
  {
    return VAR_16;
  }
  else
  {
    return -VAR_16;
  }
}
