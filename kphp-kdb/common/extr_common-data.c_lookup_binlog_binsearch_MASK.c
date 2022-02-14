
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long time; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_0 (long long VAR_1, int VAR_2, int VAR_3) {
  int VAR_4;
  --VAR_2;
  while (VAR_3 - VAR_2 > 1) {
    VAR_4 = (VAR_2 + VAR_3) >> 1;
    if (VAR_0[VAR_4].time < VAR_1) {
      VAR_2 = VAR_4;
    } else {
      VAR_3 = VAR_4;
    }
  }
  return VAR_3;
}
