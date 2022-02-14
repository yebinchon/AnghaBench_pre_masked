
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 double FUNC_0 (int*,int,size_t*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_1,
                             uint32_t* VAR_2,
                             size_t* VAR_3,
                             const uint32_t** VAR_4) {
  static const uint32_t VAR_5[64] = {
    1, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  static const uint32_t VAR_6[64] = {
    0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };

  uint32_t VAR_7[3] = { 0 };
  uint32_t VAR_8[6] = { 0 };
  size_t VAR_9;
  size_t VAR_10;
  size_t VAR_11;
  double VAR_12[4];
  for (VAR_10 = 0; VAR_10 < 9; ++VAR_10) {
    VAR_7[VAR_10 % 3] += VAR_2[VAR_10];
    VAR_8[VAR_10 % 6] += VAR_2[VAR_10];
  }
  VAR_12[1] = FUNC_0(VAR_7, 3, &VAR_11);
  VAR_12[2] = (FUNC_0(VAR_8, 3, &VAR_11) +
                FUNC_0(VAR_8 + 3, 3, &VAR_11));
  VAR_12[3] = 0;
  for (VAR_10 = 0; VAR_10 < 3; ++VAR_10) {
    VAR_12[3] += FUNC_0(VAR_2 + 3 * VAR_10, 3, &VAR_11);
  }

  VAR_9 = VAR_7[0] + VAR_7[1] + VAR_7[2];
  FUNC_1(VAR_9 != 0);
  VAR_12[0] = 1.0 / (double)VAR_9;
  VAR_12[1] *= VAR_12[0];
  VAR_12[2] *= VAR_12[0];
  VAR_12[3] *= VAR_12[0];

  if (VAR_1 < VAR_0) {

    VAR_12[3] = VAR_12[1] * 10;
  }


  if (VAR_12[1] - VAR_12[2] < 0.2 &&
      VAR_12[1] - VAR_12[3] < 0.2) {
    *VAR_3 = 1;
  } else if (VAR_12[2] - VAR_12[3] < 0.02) {
    *VAR_3 = 2;
    *VAR_4 = VAR_6;
  } else {
    *VAR_3 = 3;
    *VAR_4 = VAR_5;
  }
}
