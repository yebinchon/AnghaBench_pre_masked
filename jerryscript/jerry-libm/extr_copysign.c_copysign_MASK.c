
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

double
FUNC_1 (double VAR_0, double VAR_1)
{
  double_accessor VAR_2;
  VAR_2.dbl = VAR_0;
  VAR_2.as_int.hi = (FUNC_0 (VAR_0) & 0x7fffffff) | (FUNC_0 (VAR_1) & 0x80000000);
  return VAR_2.dbl;
}
