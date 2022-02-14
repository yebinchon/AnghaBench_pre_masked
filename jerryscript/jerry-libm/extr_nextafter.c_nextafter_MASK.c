
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
 unsigned int FUNC_1 (double) ;

double
FUNC_2 (double VAR_0,
           double VAR_1)
{
  int VAR_2, VAR_3, VAR_4, VAR_5;
  unsigned VAR_6, VAR_7;
  double_accessor VAR_8;

  VAR_2 = FUNC_0 (VAR_0);
  VAR_6 = FUNC_1 (VAR_0);
  VAR_3 = FUNC_0 (VAR_1);
  VAR_7 = FUNC_1 (VAR_1);
  VAR_4 = VAR_2 & 0x7fffffff;
  VAR_5 = VAR_3 & 0x7fffffff;

  if (((VAR_4 >= 0x7ff00000) && ((VAR_4 - 0x7ff00000) | VAR_6) != 0)
      || ((VAR_5 >= 0x7ff00000) && ((VAR_5 - 0x7ff00000) | VAR_7) != 0))
  {
    return VAR_0 + VAR_1;
  }

  if (VAR_0 == VAR_1)
  {
    return VAR_0;
  }

  if ((VAR_4 | VAR_6) == 0)
  {
    VAR_8.as_int.hi = VAR_3 & 0x80000000;
    VAR_8.as_int.lo = 1;
    VAR_1 = VAR_8.dbl * VAR_8.dbl;
    if (VAR_1 == VAR_8.dbl)
    {
      return VAR_1;
    }
    else
    {
      return VAR_8.dbl;
    }
  }

  if (VAR_2 >= 0)
  {
    if (VAR_2 > VAR_3 || ((VAR_2 == VAR_3) && (VAR_6 > VAR_7)))
    {
      if (VAR_6 == 0)
      {
        VAR_2 -= 1;
      }

      VAR_6 -= 1;
    }
    else
    {
      VAR_6 += 1;

      if (VAR_6 == 0)
      {
        VAR_2 += 1;
      }
    }
  }
  else
  {
    if (VAR_3 >= 0 || VAR_2 > VAR_3 || ((VAR_2 == VAR_3) && (VAR_6 > VAR_7)))
    {
      if (VAR_6 == 0)
      {
        VAR_2 -= 1;
      }

      VAR_6 -= 1;
    }
    else
    {
      VAR_6 += 1;

      if (VAR_6 == 0)
      {
        VAR_2 += 1;
      }
    }
  }

  VAR_3 = VAR_2 & 0x7ff00000;

  if (VAR_3 >= 0x7ff00000)
  {
    return VAR_0 + VAR_0;
  }

  if (VAR_3 < 0x00100000)
  {
    VAR_1 = VAR_0 * VAR_0;
    if (VAR_1 != VAR_0)
    {
      VAR_8.as_int.hi = VAR_2;
      VAR_8.as_int.lo = VAR_6;
      return VAR_8.dbl;
    }
  }

  VAR_8.as_int.hi = VAR_2;
  VAR_8.as_int.lo = VAR_6;
  return VAR_8.dbl;
}
