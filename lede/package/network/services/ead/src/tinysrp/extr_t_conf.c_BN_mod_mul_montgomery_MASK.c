
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(BIGNUM *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2,
     BN_MONT_CTX *VAR_3, BN_CTX *VAR_4)
 {
 BIGNUM *VAR_5,*VAR_6;
 int VAR_7=0;

 FUNC_2(VAR_4);
 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) goto err;

 FUNC_6(VAR_5);
 FUNC_6(VAR_6);

 if (VAR_1 == VAR_2)
  {
  if (!FUNC_5(VAR_5,VAR_1,VAR_4)) goto err;
  }
 else
  {
  if (!FUNC_4(VAR_5,VAR_1,VAR_2,VAR_4)) goto err;
  }

 if (!FUNC_3(VAR_0,VAR_5,VAR_3,VAR_4)) goto err;
 VAR_7=1;
err:
 FUNC_0(VAR_4);
 return(VAR_7);
 }
