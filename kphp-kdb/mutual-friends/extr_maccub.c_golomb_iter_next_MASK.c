
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int k; int p; scalar_t__ a; scalar_t__ M; } ;
typedef TYPE_1__ golomb_iterator ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1 (golomb_iterator *VAR_1) {
  if (VAR_1->len <= 0) {
    VAR_1->a = 0;
    return;
  }

  VAR_1->len--;

  int VAR_2 = 0, VAR_3;
  while (VAR_0) {
    VAR_1->a -= VAR_1->M;
    FUNC_0();
  }
  FUNC_0();
  for (VAR_3 = VAR_1->k; VAR_3 > 1; VAR_3--) {
    VAR_2 <<= 1;
    if (VAR_0) {
      VAR_2++;
    }
    FUNC_0();
  }
  if (VAR_2 >= VAR_1->p) {
    VAR_2 <<= 1;
    if (VAR_0) {
      VAR_2++;
    }
    FUNC_0();
    VAR_2 -= VAR_1->p;
  }

  VAR_1->a -= VAR_2;
}
