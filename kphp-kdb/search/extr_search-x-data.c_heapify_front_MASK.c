
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct item_with_rating {scalar_t__ V; int I; } ;
struct TYPE_4__ {TYPE_1__* h; } ;
struct TYPE_3__ {int value; } ;


 int * VAR_0 ;
 scalar_t__* VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_0 (struct item_with_rating *VAR_5, int VAR_6, int VAR_7) {
  while (1) {
    int VAR_8 = VAR_6 << 1;
    if (VAR_8 > VAR_3) { break; }
    if (VAR_8 < VAR_3 && VAR_1[VAR_8] < VAR_1[VAR_8+1]) { VAR_8++; }
    if (VAR_5->V >= VAR_1[VAR_8]) { break; }
    VAR_0[VAR_6] = VAR_0[VAR_8];
    VAR_1[VAR_6] = VAR_1[VAR_8];
    VAR_4.h[VAR_2[VAR_6] = VAR_2[VAR_8]].value = VAR_6;
    VAR_6 = VAR_8;
  }
  VAR_0[VAR_6] = VAR_5->I;
  VAR_1[VAR_6] = VAR_5->V;
  VAR_4.h[VAR_2[VAR_6] = VAR_7].value = VAR_6;
}
