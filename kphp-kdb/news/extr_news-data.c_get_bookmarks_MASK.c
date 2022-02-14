
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;


 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_3 (int VAR_1, int VAR_2, int *VAR_3, int VAR_4) {
  int VAR_5 = FUNC_2 (VAR_1, 1);
  if (VAR_5 < 0) {
    return VAR_5;
  }
  VAR_5 = 0;
  while (VAR_5 < VAR_4 && FUNC_1 () >= 0) {
    FUNC_0(VAR_0.value, VAR_3[3 * VAR_5 + 0], VAR_3[3 * VAR_5 + 1], VAR_3[3 * VAR_5 + 2]);
    if ((1 << VAR_3[3 * VAR_5 + 0]) & VAR_2) {
      VAR_5 ++;
    }
  }
  return VAR_5;
}
