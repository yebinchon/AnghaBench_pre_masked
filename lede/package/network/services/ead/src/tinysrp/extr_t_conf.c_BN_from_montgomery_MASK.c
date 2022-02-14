
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {int* d; int top; int neg; } ;
struct TYPE_25__ {int ri; int n0; TYPE_2__ N; TYPE_2__ Ni; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_2__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 long long VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int*,int*,int,int) ;
 int * FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (int*,int ,int) ;
 int FUNC_14 (char*,int,int) ;

int FUNC_15(BIGNUM *VAR_2, BIGNUM *VAR_3, BN_MONT_CTX *VAR_4,
      BN_CTX *VAR_5)
 {
 int VAR_6=0;
 BIGNUM *VAR_7,*VAR_8;

 FUNC_2(VAR_5);
 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = FUNC_1(VAR_5);
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) goto err;

 if (!FUNC_4(VAR_7,VAR_3)) goto err;
 FUNC_5(VAR_7,VAR_4->ri);

 if (!FUNC_6(VAR_8,VAR_7,&VAR_4->Ni,VAR_5)) goto err;
 FUNC_5(VAR_8,VAR_4->ri);

 if (!FUNC_6(VAR_7,VAR_8,&VAR_4->N,VAR_5)) goto err;
 if (!FUNC_3(VAR_8,VAR_3,VAR_7)) goto err;
 FUNC_7(VAR_2,VAR_8,VAR_4->ri);


 if (FUNC_8(VAR_2, &(VAR_4->N)) >= 0)
  {
  FUNC_9(VAR_2,VAR_2,&(VAR_4->N));
  }
 VAR_6=1;
 err:
 FUNC_0(VAR_5);
 return(VAR_6);
 }
