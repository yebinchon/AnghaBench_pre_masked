
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 float FUNC_1 (float) ;
 float** VAR_4 ;
 float* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

float FUNC_2 (const int VAR_8) {
  float VAR_9 = FUNC_1 (VAR_5[VAR_8] + 1.0f) / FUNC_1 (2.0f);

  if (VAR_6) {
    VAR_9 /= 1.3;
  }

  if (VAR_2 != -1) {
    VAR_9 *= (VAR_2 + 2 * VAR_3 + 1);
    VAR_9 /= (6 * VAR_3 + 3);

    if (VAR_3 <= 6) {
      VAR_9 /= (7 - VAR_3);
    }
  }

  if (VAR_7) {
    VAR_9 /= 10;

    if (VAR_6) {
      VAR_9 /= 2;
    }
  }

  return VAR_9;
}
