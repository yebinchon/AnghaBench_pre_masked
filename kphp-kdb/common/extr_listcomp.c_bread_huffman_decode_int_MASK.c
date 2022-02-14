
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

int FUNC_1 (struct bitreader *VAR_2, int *VAR_3 ,int *VAR_4) {
  int VAR_5 = VAR_2->m, VAR_6, VAR_7 = 0;
  if (VAR_1) {
    VAR_7++;
  }
  FUNC_0();
  VAR_6 = 1;
  while (VAR_7 < VAR_3[VAR_6]) {
    VAR_7 <<= 1;
    if (VAR_1) {
      VAR_7++;
    }
    FUNC_0();
    VAR_6++;
  }
  VAR_2->m = VAR_5;
  return VAR_4[(VAR_0 + 1) * (VAR_7 - VAR_3[VAR_6]) + VAR_6];
}
