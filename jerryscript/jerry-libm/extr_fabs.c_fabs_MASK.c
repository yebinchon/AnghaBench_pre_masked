
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;



double
FUNC_0 (double VAR_0)
{
  double_accessor VAR_1;
  VAR_1.dbl = VAR_0;
  VAR_1.as_int.hi &= 0x7fffffff;
  return VAR_1.dbl;
}
