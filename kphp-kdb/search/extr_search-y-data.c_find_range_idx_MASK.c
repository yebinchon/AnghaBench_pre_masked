
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; int maxr; int minr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0 (int VAR_5) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    if (VAR_3[VAR_6].idx == VAR_5) {
      return VAR_6;
    }
  }
  if (VAR_4 >= VAR_2 + 2) {
    return -1;
  }
  VAR_3[VAR_4].minr = VAR_1;
  VAR_3[VAR_4].maxr = VAR_0;
  VAR_3[VAR_4].idx = VAR_5;
  return VAR_4++;
}
