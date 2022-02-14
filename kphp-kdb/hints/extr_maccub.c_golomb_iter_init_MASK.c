
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int len; int k; int p; int m; int M; int * ptr; } ;
typedef TYPE_1__ golomb_iterator ;
typedef int * golomb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

void FUNC_4 (golomb_iterator *VAR_1, golomb VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  VAR_1->ptr = VAR_2;

  if (VAR_2 == ((void*)0)) {
    VAR_1->a = 0;
    VAR_1->len = 0;
    return;
  }

  VAR_1->k = -1;
  VAR_1->p = 1;

  while (VAR_1->p < VAR_3) {
    VAR_1->p += VAR_1->p;
    VAR_1->k++;
  }

  VAR_1->m = ((int) *(VAR_1->ptr)++ << 24) + (1 << 23);

  int VAR_6 = 0;
  while (VAR_1->k >= 0) {
    if (VAR_0) { VAR_6 += (1 << VAR_1->k); }
    FUNC_3 ();
    VAR_1->k--;
  }

  VAR_1->len = VAR_6 + 1;

  FUNC_0 (VAR_1->len > 0);

  VAR_1->a = VAR_3 + 1;
  VAR_1->M = FUNC_1 (VAR_3, VAR_1->len);

  VAR_1->k = 0, VAR_1->p = 1;
  while (VAR_1->M >= VAR_1->p) {
    VAR_1->p <<= 1;
    VAR_1->k++;
  }
  VAR_1->p -= VAR_1->M;

  FUNC_2 (VAR_1);

  while (VAR_1->a > VAR_5) {
    FUNC_2 (VAR_1);
  }
}
