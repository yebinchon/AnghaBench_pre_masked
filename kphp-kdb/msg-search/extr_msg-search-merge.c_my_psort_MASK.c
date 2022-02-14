
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hash; scalar_t__ order; } ;
typedef TYPE_1__ pair_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0 (int VAR_1, int VAR_2) {
  pair_t VAR_3, VAR_4;
  int VAR_5, VAR_6;
  if (VAR_1 >= VAR_2) return;
  VAR_5 = VAR_1; VAR_6 = VAR_2;
  VAR_3 = VAR_0[(VAR_1+VAR_2)>>1];
  do {
    while (VAR_0[VAR_5].hash < VAR_3.hash || (VAR_0[VAR_5].hash == VAR_3.hash && VAR_0[VAR_5].order < VAR_3.order)) VAR_5++;
    while (VAR_0[VAR_6].hash > VAR_3.hash || (VAR_0[VAR_6].hash == VAR_3.hash && VAR_0[VAR_6].order > VAR_3.order)) VAR_6--;
    if (VAR_5 <= VAR_6) {
      VAR_4 = VAR_0[VAR_5]; VAR_0[VAR_5++] = VAR_0[VAR_6]; VAR_0[VAR_6--] = VAR_4;
    }
  } while (VAR_5 <= VAR_6);
  FUNC_0 (VAR_1, VAR_6);
  FUNC_0 (VAR_5, VAR_2);
}
