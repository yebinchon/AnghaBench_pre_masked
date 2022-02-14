
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long x; int y; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

inline int FUNC_0 (long long VAR_4, int VAR_5) {
  if (VAR_2 < VAR_0) {
    VAR_1[VAR_2].x = VAR_4;
    VAR_1[VAR_2].y = VAR_5;
    VAR_2++;
    return 1;
  } else {
    VAR_3++;
    return 0;
  }
}
