
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p; int weight; int f; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1 (int VAR_7, int VAR_8, int VAR_9) {
  if (VAR_2 >= 16) { return -3; }
  int VAR_10 = FUNC_0 (VAR_8);
  if (VAR_10 < 0) { return -1; }
  int VAR_11 = VAR_10 & VAR_0;
  VAR_1[VAR_2].p = VAR_10 & 15;
  VAR_1[VAR_2].weight = VAR_9;
  if (VAR_7 == 'L') {
    VAR_1[VAR_2].f = VAR_11 ? VAR_6 : VAR_5;
  } else if (VAR_7 == 'l') {
    VAR_1[VAR_2].f = VAR_11 ? VAR_4 : VAR_3;
  } else {
    return -2;
  }

  VAR_2++;
  return 0;
}
