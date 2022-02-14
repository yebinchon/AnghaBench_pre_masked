
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double weight; scalar_t__ p; } ;
struct TYPE_3__ {int p; double weight; scalar_t__ f; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_1 (int VAR_10, double VAR_11, int VAR_12) {
  if (VAR_11 <= 0) {
    return;
  }
  FUNC_0 (VAR_5 < VAR_1);
  if (VAR_10 == -1) {
    VAR_2.p = 0;
    VAR_2.weight = VAR_11;
    VAR_3[VAR_5].f = 0;
    VAR_4 |= VAR_0;
    return;
  }
  int VAR_13 = VAR_12 & 1;
  VAR_3[VAR_5].p = VAR_10;
  VAR_3[VAR_5].weight = VAR_11;
  if (VAR_12 & 2) {
    VAR_3[VAR_5].f = VAR_13 ? VAR_9 : VAR_8;
  } else {
    VAR_3[VAR_5].f = VAR_13 ? VAR_7 : VAR_6;
  }
  VAR_5++;
}
