
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1 (int VAR_1, int VAR_2) {
  FUNC_0 (VAR_2 > 0 && VAR_2 <= VAR_1);
  long long VAR_3 = (long long) 2*5278688*VAR_1 / VAR_2;
  if (VAR_3 <= 165137325) {
    int VAR_4 = 0;
    do {
      if ((int) VAR_3 <= VAR_0[VAR_4]) {
        return VAR_4 + 1;
      }
    } while (++VAR_4 <= 8);
    return 10;
  }
  return (int) ((VAR_3 + (7615537-5278688)) / (2*7615537));
}
