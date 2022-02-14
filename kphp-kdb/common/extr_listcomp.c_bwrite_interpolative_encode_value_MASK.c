
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {int m; int* ptr; } ;


 int FUNC_0 (struct bitwriter*,int ) ;

void FUNC_1 (struct bitwriter *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3[32], VAR_4 = 0, VAR_5 = VAR_2 >> 1;
  if (VAR_1 >= VAR_5) {
    VAR_1 = (VAR_1 - VAR_5) << 1;
  } else {
    VAR_1 = ((VAR_5 - VAR_1) << 1) - 1;
  }
  VAR_1 += VAR_2;
  while (VAR_1 > 1) {
    VAR_3[VAR_4++] = VAR_1 & 1;
    VAR_1 >>= 1;
  }
  for (VAR_4--; VAR_4 >= 0; VAR_4--) {
    if (!VAR_0->m) {
      FUNC_0 (VAR_0, 0);
      VAR_0->m = 0x80;
    }
    if (VAR_3[VAR_4]) {
      *VAR_0->ptr += VAR_0->m;
    }
    VAR_0->m >>= 1;
  }
}
