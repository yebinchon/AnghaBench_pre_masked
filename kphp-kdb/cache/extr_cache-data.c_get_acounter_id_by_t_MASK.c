
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ T; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1 (int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    if (FUNC_0 (VAR_0[VAR_3].T - VAR_2) < 0.5) {
      return VAR_3;
    }
  }
  return -1;
}
