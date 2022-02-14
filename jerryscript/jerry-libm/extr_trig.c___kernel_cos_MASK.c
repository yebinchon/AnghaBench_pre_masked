
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; scalar_t__ lo; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int FUNC_0 (double) ;
 double VAR_6 ;

__attribute__((used)) static double
FUNC_1 (double VAR_7, double VAR_8)
{
  double VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13;

  VAR_13 = FUNC_0 (VAR_7) & 0x7fffffff;
  if (VAR_13 < 0x3e400000)
  {
    if (((int) VAR_7) == 0)
    {
      return VAR_6;
    }
  }
  VAR_11 = VAR_7 * VAR_7;
  VAR_12 = VAR_11 * (VAR_0 + VAR_11 * (VAR_1 + VAR_11 * (VAR_2 + VAR_11 * (VAR_3 + VAR_11 * (VAR_4 + VAR_11 * VAR_5)))));
  if (VAR_13 < 0x3FD33333)
  {
    return VAR_6 - (0.5 * VAR_11 - (VAR_11 * VAR_12 - VAR_7 * VAR_8));
  }
  else
  {
    double_accessor VAR_14;
    if (VAR_13 > 0x3fe90000)
    {
      VAR_14.dbl = 0.28125;
    }
    else
    {
      VAR_14.as_int.hi = VAR_13 - 0x00200000;
      VAR_14.as_int.lo = 0;
    }
    VAR_10 = 0.5 * VAR_11 - VAR_14.dbl;
    VAR_9 = VAR_6 - VAR_14.dbl;
    return VAR_9 - (VAR_10 - (VAR_11 * VAR_12 - VAR_7 * VAR_8));
  }
}
