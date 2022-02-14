
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,unsigned char const*,int) ;
 int FUNC_2 (int*,unsigned char const*,int) ;
 int** VAR_1 ;
 int VAR_2 ;

int FUNC_3 (const unsigned char VAR_3[16]) {
  int VAR_4;
  for (VAR_4 = 1; VAR_4 <= VAR_2; VAR_4 += 2) {
    if (!FUNC_1 (VAR_1[VAR_4], VAR_3, 16)) {
      return VAR_4;
    }
  }
  if (!VAR_2) {
    VAR_2 = 1;
    VAR_1[1][15] = 1;
    FUNC_0 (1);
    if (!FUNC_1 (VAR_1[1], VAR_3, 16)) {
      return 1;
    }
  } else if (VAR_2 >= VAR_0 - 2) {
    return 0;
  }
  VAR_2 += 2;
  FUNC_2 (VAR_1[VAR_2], VAR_3, 16);
  FUNC_0 (VAR_2);
  return VAR_2;
}
