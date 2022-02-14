
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1 (struct bitreader *VAR_1, int *VAR_2, int VAR_3, int *VAR_4) {
  int VAR_5, VAR_6 = VAR_1->m;
  *VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    int VAR_7 = 0;
    if (VAR_0) { VAR_7++; }
    FUNC_0();
    VAR_7 <<= 1;
    if (VAR_0) { VAR_7++; }
    FUNC_0();
    VAR_7 <<= 1;
    if (VAR_0) { VAR_7++; }
    FUNC_0();
    VAR_7 <<= 1;
    if (VAR_0) { VAR_7++; }
    FUNC_0();
    if (VAR_7) {
      (*VAR_4)++;
    }
    VAR_2[VAR_5] = VAR_7;
  }
  VAR_1->m = VAR_6;
}
