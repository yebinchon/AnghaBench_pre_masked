
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;

__attribute__((used)) static inline double FUNC_1 (int VAR_2, double VAR_3, double VAR_4, double VAR_5, double *VAR_6) {
  if (VAR_4 <= 0 || VAR_5 <= 0) {
    *VAR_6 = VAR_2 / FUNC_0 (VAR_0 / 3);
    return VAR_2 * VAR_1;
  }
  double VAR_7, VAR_8 = VAR_5;
  if (VAR_3) {
    VAR_7 = VAR_3 / VAR_4;
    VAR_7 = VAR_3 / (VAR_4 + VAR_7 * VAR_5);
    VAR_8 += VAR_3 / (VAR_7*VAR_7);
  } else {
    VAR_7 = - VAR_4 / VAR_5;
  }
  VAR_7 = (VAR_8 * VAR_7 + VAR_0 * VAR_1) / (VAR_8 + VAR_0);
  VAR_8 += VAR_0;
  *VAR_6 = VAR_2 / FUNC_0 (VAR_8 / 3);
  return VAR_7 * VAR_2;
}
