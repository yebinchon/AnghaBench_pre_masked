
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {int m; int* ptr; } ;
struct list_encoder {int last; int M; int p; int k; struct bitwriter bw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bitwriter*,int) ;

__attribute__((used)) static void FUNC_2 (struct list_encoder *VAR_0, int VAR_1) {
  struct bitwriter *VAR_2 = &VAR_0->bw;
  int VAR_3 = VAR_1;
  VAR_1 -= VAR_0->last;
  VAR_0->last = VAR_3;
  FUNC_0 (VAR_1 > 0);
  VAR_1--;




  while (VAR_1 >= VAR_0->M) {
    if (!VAR_2->m) {
      FUNC_1 (VAR_2, 0x80);
      VAR_2->m = 0x40;
    } else {
      *VAR_2->ptr += VAR_2->m;
      VAR_2->m >>= 1;
    }
    VAR_1 -= VAR_0->M;
  }
  if (!VAR_2->m) {
    FUNC_1 (VAR_2, 0);
    VAR_2->m = 0x40;
  } else {
    VAR_2->m >>= 1;
  }
  if (VAR_1 < VAR_0->p) {
    VAR_1 = ((4*VAR_1 + 2) << VAR_0->k);
  } else {
    VAR_1 = ((2*(VAR_1 + VAR_0->p) + 1) << VAR_0->k);
  }
  while (VAR_1 != (-1 << 31)) {
    if (!VAR_2->m) {
      FUNC_1 (VAR_2, 0);
      VAR_2->m = 0x80;
    }
    if (VAR_1 < 0) { *VAR_2->ptr += VAR_2->m; }
    VAR_1 <<= 1;
    VAR_2->m >>= 1;
  }
}
