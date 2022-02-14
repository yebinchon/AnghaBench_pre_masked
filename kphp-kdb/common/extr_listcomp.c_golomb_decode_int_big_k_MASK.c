
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;
struct list_decoder {int last; int k; int p; scalar_t__ M; struct bitreader br; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1 (struct list_decoder *VAR_1) {
  struct bitreader *VAR_2 = &VAR_1->br;
  register int VAR_3 = VAR_2->m;
  int VAR_4 = 0, VAR_5 = VAR_1->last;
  while (VAR_0) {
    VAR_5 += VAR_1->M;
    FUNC_0();
  }
  FUNC_0();
  int VAR_6 = VAR_1->k;
  do {
    VAR_4 <<= 1;
    if (VAR_0) {
      VAR_4++;
    }
    FUNC_0();
  } while (--VAR_6 > 1);
  if (VAR_4 >= VAR_1->p) {
    VAR_4 <<= 1;
    if (VAR_0) {
      VAR_4++;
    }
    FUNC_0();
    VAR_4 -= VAR_1->p;
  }
  VAR_2->m = VAR_3;
  return VAR_1->last = VAR_5 + VAR_4 + 1;
}
