
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (double) ;

int FUNC_3 (int VAR_0, int VAR_1) {
  double VAR_2, VAR_3, VAR_4, VAR_5;
  int VAR_6;
  if (VAR_0 <= 0 || VAR_1 <= 0) {
    return 0;
  }
  if (VAR_1 == 1) {
    return VAR_0;
  }
  if (VAR_0 >= 100 && VAR_0 >= 100*VAR_1) {
    VAR_2 = (double) VAR_0 / VAR_1;
    return (int) (VAR_2 + 7*FUNC_2(VAR_2) + 1);
  }
  VAR_3 = FUNC_0 (VAR_0*FUNC_1 (1 - 1.0/VAR_1));
  VAR_2 = VAR_3;
  VAR_6 = 0;
  VAR_4 = 1 - 1e-9/VAR_1;
  VAR_5 = 1e-9/VAR_1/VAR_0;
  while (VAR_2 < VAR_4 && VAR_6 < VAR_0 && !(VAR_3 < VAR_5 && VAR_6*VAR_1 > VAR_0)) {
    VAR_3 *= VAR_0-VAR_6;
    VAR_3 /= (VAR_1-1)*++VAR_6;
    VAR_2 += VAR_3;
  }
  return VAR_6;
}
