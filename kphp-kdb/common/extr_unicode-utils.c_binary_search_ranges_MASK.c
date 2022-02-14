
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (const int *VAR_0, int VAR_1, int VAR_2) {
  if ((unsigned int)VAR_2 > 0x10ffff) {
    return 0;
  }

  int VAR_3 = 0;
  while (VAR_3 < VAR_1) {
    int VAR_4 = ((VAR_3 + VAR_1 + 2) >> 2) << 1;
    if (VAR_0[VAR_4] <= VAR_2) {
      VAR_3 = VAR_4;
    } else {
      VAR_1 = VAR_4 - 2;
    }
  }

  int VAR_5 = VAR_0[VAR_3 + 1];
  if (VAR_5 < 0) {
    return VAR_2 - VAR_0[VAR_3] + (~VAR_5);
  }
  if (VAR_5 <= 0x10ffff) {
    return VAR_5;
  }
  switch (VAR_5 - 0x200000) {
    case 0:
      return (VAR_2 & -2);
    case 1:
      return (VAR_2 | 1);
    case 2:
      return ((VAR_2 - 1) | 1);
    default:
      FUNC_0 (0);
      FUNC_1 (1);
  }
}
