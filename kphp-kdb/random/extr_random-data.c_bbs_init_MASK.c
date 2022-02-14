
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int ctx; int mlen; int tmp; scalar_t__ i; int * m; int * x; int r; } ;
typedef TYPE_1__ bbs_t ;
typedef int BIGNUM ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int * FUNC_6 (int *,int,int ,int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int) ;
 void* FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (char const* const,int) ;
 int FUNC_18 (int,char*) ;

int FUNC_19 (bbs_t *VAR_0, int VAR_1, const char *const VAR_2, int VAR_3) {
  if (VAR_1 < 256) {
    return -1;
  }
  VAR_0->bits = VAR_1;
  VAR_0->ctx = FUNC_0 ();
  FUNC_15 (VAR_0->ctx);
  BIGNUM *VAR_4 = FUNC_9 ();
  FUNC_15 (*VAR_4);
  FUNC_15 (1 == FUNC_12 (VAR_4, 3));
  BIGNUM *VAR_5 = FUNC_9 ();
  FUNC_15 (*VAR_5);
  FUNC_15 (1 == FUNC_12 (VAR_5, 4));

  FUNC_17 (VAR_2, VAR_3);
  FUNC_18 (2, "PRNG initialized.\n");
  VAR_0->bits = VAR_1;
  FUNC_18 (2, "p was generated.\n");
  BIGNUM *VAR_6 = FUNC_9 (), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
  while (1) {
    BIGNUM *VAR_9 = FUNC_9 (), *VAR_10 = FUNC_9 ();
    FUNC_15 (VAR_9 && VAR_10);
    VAR_7 = FUNC_6 (((void*)0), VAR_1 / 2, 0, VAR_5, VAR_4, ((void*)0), ((void*)0));
    FUNC_15 (*VAR_7);
    FUNC_13 (VAR_9, VAR_7, FUNC_14 ());
    VAR_8 = FUNC_6 (((void*)0), VAR_1 / 2, 0, VAR_5, VAR_4, ((void*)0), ((void*)0));
    FUNC_15 (*VAR_8);
    FUNC_13 (VAR_10, VAR_8, FUNC_14 ());

    FUNC_11 (VAR_9, VAR_9);
    FUNC_11 (VAR_10, VAR_10);
    FUNC_5 (VAR_6, VAR_9, VAR_10, VAR_0->ctx);
    FUNC_4 (VAR_9);
    FUNC_4 (VAR_10);

    if (FUNC_7 (VAR_6)) {
      break;
    }
    FUNC_18 (2, "gcd ((p-1)/2, (q-1)/2) isn't 1.\n");
    FUNC_4 (VAR_7);
    VAR_7 = ((void*)0);
    FUNC_4 (VAR_8);
    VAR_8 = ((void*)0);
  }

  FUNC_4 (VAR_4);
  FUNC_4 (VAR_5);

  VAR_0->m = FUNC_9 ();
  FUNC_8 (VAR_0->m, VAR_7, VAR_8, VAR_0->ctx);
  FUNC_3 (VAR_7);
  FUNC_3 (VAR_8);
  VAR_0->r = FUNC_1 ();
  FUNC_15 (1 == FUNC_2 (VAR_0->r, VAR_0->m, VAR_0->ctx));

  VAR_0->mlen = FUNC_10 (VAR_0->m);
  VAR_0->tmp = FUNC_16 ((VAR_0->mlen + 3) & -4, 1);
  FUNC_15 (VAR_0->tmp);
  VAR_0->x = FUNC_9 ();
  FUNC_12 (VAR_0->x, 239);
  FUNC_5 (VAR_6, VAR_0->x, VAR_0->m, VAR_0->ctx);
  FUNC_15 (FUNC_7 (VAR_6));
  FUNC_4 (VAR_6);
  VAR_0->i = 0;

  return 0;
}
