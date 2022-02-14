
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rating ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

rating FUNC_2 (rating *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  FUNC_0 (VAR_1 <= VAR_3 && VAR_3 <= VAR_2);

  if (VAR_1 == VAR_2) {
    return VAR_0[VAR_1];
  }

  rating VAR_4 = VAR_0[VAR_1 + FUNC_1() % (VAR_2 - VAR_1 + 1)], VAR_5;
  int VAR_6 = VAR_1, VAR_7 = VAR_2;

  while (VAR_6 <= VAR_7) {
    while (VAR_0[VAR_6] < VAR_4) {
      VAR_6++;
    }
    while (VAR_4 < VAR_0[VAR_7]) {
      VAR_7--;
    }
    if (VAR_6 <= VAR_7) {
      VAR_5 = VAR_0[VAR_6];
      VAR_0[VAR_6] = VAR_0[VAR_7];
      VAR_0[VAR_7] = VAR_5;
      VAR_6++;
      VAR_7--;
    }
  }

  if (VAR_3 <= VAR_7) {
    return FUNC_2 (VAR_0, VAR_1, VAR_7, VAR_3);
  }
  return FUNC_2 (VAR_0, VAR_7 + 1, VAR_2, VAR_3);
}
