
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long x; } ;


 double VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (double) ;

long long FUNC_1 (double VAR_2) {
  if (VAR_1) {
    return VAR_1->x;
  }
  if (VAR_2 > VAR_0) {
    FUNC_0 (VAR_2);
    if (VAR_1) {
      return VAR_1->x;
    }
  }
  return -1;
}
