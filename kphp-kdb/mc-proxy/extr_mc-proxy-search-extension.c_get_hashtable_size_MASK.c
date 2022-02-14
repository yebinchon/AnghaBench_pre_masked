
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1 (int VAR_0) {
  static const int VAR_1[] = {1103,1217,1361,1499,1657,1823,2011,2213,2437,2683,2953,3251,3581,3943,4339,
  4783,5273,5801,6389,7039,7753,8537,9391,10331,11369,12511,13763,15149,16381};
  const int VAR_2 = sizeof (VAR_1) / sizeof (VAR_1[0]);
  int VAR_3 = -1;
  int VAR_4 = VAR_2;
  VAR_0 += VAR_0 >> 1;
  while (VAR_4 - VAR_3 > 1) {
    int VAR_5 = ((VAR_3 + VAR_4) >> 1);
    if (VAR_1[VAR_5] <= VAR_0) { VAR_3 = VAR_5; } else { VAR_4 = VAR_5; }
  }
  if (VAR_3 < 0) { VAR_3++; }
  FUNC_0 (VAR_3 < VAR_2-1);
  return VAR_1[VAR_3];
}
