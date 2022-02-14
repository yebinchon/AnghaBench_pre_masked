
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double,double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_3 (double VAR_4, int VAR_5)
{
  int VAR_6, VAR_7, VAR_8;

  VAR_7 = FUNC_0 (VAR_4);
  VAR_8 = FUNC_1 (VAR_4);
  VAR_6 = (VAR_7 & 0x7ff00000) >> 20;
  if (VAR_6 == 0)
  {
    if ((VAR_8 | (VAR_7 & 0x7fffffff)) == 0)
    {
      return VAR_4;
    }
    VAR_4 *= VAR_2;
    VAR_7 = FUNC_0 (VAR_4);
    VAR_6 = ((VAR_7 & 0x7ff00000) >> 20) - 54;
    if (VAR_5 < -50000)
    {
      return VAR_1 * VAR_4;
    }
  }
  if (VAR_6 == 0x7ff)
  {
    return VAR_4 + VAR_4;
  }
  VAR_6 = VAR_6 + VAR_5;
  if (VAR_6 > 0x7fe)
  {
    return VAR_0 * FUNC_2 (VAR_0, VAR_4);
  }
  if (VAR_6 > 0)
  {
    double_accessor VAR_9;
    VAR_9.dbl = VAR_4;
    VAR_9.as_int.hi = (VAR_7 & 0x800fffff) | (VAR_6 << 20);
    return VAR_9.dbl;
  }
  if (VAR_6 <= -54)
  {
    if (VAR_5 > 50000)
    {
      return VAR_0 * FUNC_2 (VAR_0, VAR_4);
    }
    else
    {
      return VAR_1 * FUNC_2 (VAR_1, VAR_4);
    }
  }
  VAR_6 += 54;
  double_accessor VAR_10;
  VAR_10.dbl = VAR_4;
  VAR_10.as_int.hi = (VAR_7 & 0x800fffff) | (VAR_6 << 20);
  return VAR_10.dbl * VAR_3;
}
