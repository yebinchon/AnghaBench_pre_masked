
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {int m; int* ptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct bitwriter*,int ) ;
 int FUNC_3 (struct bitwriter*,unsigned int,int) ;

void FUNC_4 (struct bitwriter *VAR_0, unsigned int VAR_1) {
  FUNC_0 (VAR_1 > 0);
  int VAR_2, VAR_3 = FUNC_1 (VAR_1);
  VAR_1 ^= 1U << VAR_3;
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    if (!VAR_0->m) {
      FUNC_2 (VAR_0, 0);
      VAR_0->m = 0x80;
    }
    *VAR_0->ptr += VAR_0->m;
    VAR_0->m >>= 1;
  }
  if (!VAR_0->m) {
    FUNC_2 (VAR_0, 0);
    VAR_0->m = 0x80;
  }
  VAR_0->m >>= 1;
  FUNC_3 (VAR_0, VAR_1, VAR_3);
}
