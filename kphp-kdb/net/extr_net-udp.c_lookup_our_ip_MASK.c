
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int* VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_3 ;

int FUNC_2 (unsigned VAR_4) {
  int VAR_5;
  for (VAR_5 = 2; VAR_5 <= VAR_3; VAR_5 += 2) {
    if (VAR_1[VAR_5] == VAR_4) {
      return VAR_5;
    }
  }
  if (!VAR_3) {
    VAR_3 = 2;
    VAR_1[2] = 0x7f000001;
    FUNC_1 (VAR_2[2], VAR_1[2]);
    FUNC_0 (2);
    if (VAR_1[2] == VAR_4) {
      return 2;
    }
  } else if (VAR_3 >= VAR_0 - 2) {
    return 0;
  }
  VAR_3 += 2;
  VAR_1[VAR_3] = VAR_4;
  FUNC_1 (VAR_2[VAR_3], VAR_4);
  FUNC_0 (VAR_3);
  return VAR_3;
}
