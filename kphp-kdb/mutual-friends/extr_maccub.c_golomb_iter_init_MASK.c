
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int len; int k; int p; int m; int M; int * ptr; } ;
typedef TYPE_1__ golomb_iterator ;
typedef int * golomb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

void FUNC_4 (golomb_iterator *VAR_2, golomb VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  VAR_2->ptr = VAR_3;

  if (VAR_3 == ((void*)0)) {
    VAR_2->a = 0;
    VAR_2->len = 0;
    return;
  }

  VAR_2->k = VAR_0;
  VAR_2->p = 1 << (VAR_0 + 1);


  VAR_2->m = ((int) *(VAR_2->ptr)++ << 24) + (1 << 23);

  int VAR_7 = 0;
  while (VAR_2->k >= 0) {
    if (VAR_1) { VAR_7 += (1 << VAR_2->k); }
    FUNC_3 ();
    VAR_2->k--;
  }

  VAR_2->len = VAR_7;

  FUNC_0 (VAR_2->len >= 0);

  VAR_2->a = VAR_4 + VAR_2->len + 1;
  VAR_2->M = FUNC_1 (VAR_4 + VAR_2->len, VAR_2->len);

  VAR_2->k = 0, VAR_2->p = 1;
  while (VAR_2->M >= VAR_2->p) {
    VAR_2->p <<= 1;
    VAR_2->k++;
  }
  VAR_2->p -= VAR_2->M;

  FUNC_2 (VAR_2);

  while (VAR_2->a > VAR_6) {
    FUNC_2 (VAR_2);
  }
}
