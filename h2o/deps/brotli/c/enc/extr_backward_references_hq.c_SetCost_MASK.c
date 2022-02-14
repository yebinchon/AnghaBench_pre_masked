
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 scalar_t__ FUNC_0 (size_t const) ;

__attribute__((used)) static void FUNC_1(const uint32_t* VAR_0, size_t VAR_1,
                    float* VAR_2) {
  size_t VAR_3 = 0;
  float VAR_4;
  size_t VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    VAR_3 += VAR_0[VAR_5];
  }
  VAR_4 = (float)FUNC_0(VAR_3);
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    if (VAR_0[VAR_5] == 0) {
      VAR_2[VAR_5] = VAR_4 + 2;
      continue;
    }


    VAR_2[VAR_5] = VAR_4 - (float)FUNC_0(VAR_0[VAR_5]);


    if (VAR_2[VAR_5] < 1) VAR_2[VAR_5] = 1;
  }
}
