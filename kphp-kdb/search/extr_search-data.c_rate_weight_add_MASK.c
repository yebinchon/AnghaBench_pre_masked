
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int weight; scalar_t__ p; } ;
struct TYPE_5__ {int p; int weight; } ;
struct TYPE_4__ {int p; int weight; int * f; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;

__attribute__((used)) static int FUNC_1 (int VAR_15, int VAR_16, int VAR_17) {
  if (VAR_17 <= 0) {
    return 0;
  }
  if (VAR_10 >= VAR_2) { return -3; }

  if (VAR_16 == 'P') {
    if (VAR_15 == 'l') {
      VAR_4.p = 0;
      VAR_4.weight = VAR_17;
      VAR_7[VAR_10].f = ((void*)0);
      VAR_8 |= VAR_0;
      return 0;
    }
    return -4;
  }

  int VAR_18 = FUNC_0 (VAR_16);
  if (VAR_18 < 0) { return -1; }
  int VAR_19 = VAR_18 & VAR_1;
  VAR_7[VAR_10].p = VAR_18 & 15;
  VAR_7[VAR_10].weight = VAR_17;
  if (VAR_15 == 'L') {
    VAR_7[VAR_10].f = VAR_19 ? VAR_14 : VAR_13;
  } else if (VAR_15 == 'l') {
    VAR_7[VAR_10].f = VAR_19 ? VAR_12 : VAR_11;
  } else if (VAR_15 == 'T') {
    VAR_5.p = VAR_7[VAR_10].p;
    VAR_5.weight = -(VAR_3 / VAR_17);
    VAR_6 = VAR_9 - VAR_17 * 40;
    return 0;
  } else {
    return -2;
  }
  VAR_10++;
  return 0;
}
