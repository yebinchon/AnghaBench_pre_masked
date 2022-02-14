
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;

int FUNC_1 (int VAR_1, int VAR_2) {
  if (VAR_2 == 0) {
    return 1;
  }
  FUNC_0 (VAR_2 > 0 && VAR_2 <= VAR_1);
  long long VAR_3 = (long long) 2*5278688*VAR_1 / VAR_2 + (7615537-5278688);
  if (VAR_3 <= 167474174) {
    int VAR_4;
    for (VAR_4 = 1; VAR_4 <= 10; VAR_4++) {
      if ((int) VAR_3 <= VAR_0[VAR_4-1]) {
        return VAR_4;
      }
    }
  }
  int VAR_5 = VAR_3 / (2*7615537);
  return VAR_5;
}
