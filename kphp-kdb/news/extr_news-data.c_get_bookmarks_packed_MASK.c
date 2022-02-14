
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long value; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_2 (int VAR_1, long long *VAR_2, int VAR_3) {
  int VAR_4 = FUNC_1 (VAR_1, -1);
  if (VAR_4 < 0) {
    return VAR_4;
  }
  VAR_4 = 0;
  while (VAR_4 < VAR_3 && FUNC_0 () >= 0) {
    VAR_2[VAR_4++] = VAR_0.value;
  }
  return VAR_4;
}
