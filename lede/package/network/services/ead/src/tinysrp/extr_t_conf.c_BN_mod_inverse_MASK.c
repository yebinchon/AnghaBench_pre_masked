
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int const*,int const*) ;
 int * FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,int const*,int const*,int *) ;
 int FUNC_10 (int const*,int const*,int const*,int *) ;
 int const* FUNC_11 () ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int const*,int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;

BIGNUM *FUNC_16(BIGNUM *VAR_0, BIGNUM *VAR_1, const BIGNUM *VAR_2, BN_CTX *VAR_3)
 {
 BIGNUM *VAR_4,*VAR_5,*VAR_6,*VAR_7,*VAR_8,*VAR_9,*VAR_10=((void*)0);
 BIGNUM *VAR_11,*VAR_12=((void*)0);
 int VAR_13;

 FUNC_15(VAR_1);
 FUNC_15(VAR_2);

 FUNC_2(VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_1(VAR_3);
 VAR_9 = FUNC_1(VAR_3);
 VAR_8 = FUNC_1(VAR_3);
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 == ((void*)0)) goto err;

 if (VAR_0 == ((void*)0))
  VAR_10=FUNC_11();
 else
  VAR_10=VAR_0;
 if (VAR_10 == ((void*)0)) goto err;

 FUNC_14(VAR_6);
 FUNC_12(VAR_7);
 if (FUNC_4(VAR_4,VAR_1) == ((void*)0)) goto err;
 if (FUNC_4(VAR_5,VAR_2) == ((void*)0)) goto err;
 VAR_13=1;

 while (!FUNC_8(VAR_5))
  {
  if (!FUNC_5(VAR_9,VAR_8,VAR_4,VAR_5,VAR_3)) goto err;
  VAR_11=VAR_4;
  VAR_4=VAR_5;
  VAR_5=VAR_8;


  if (!FUNC_10(VAR_11,VAR_9,VAR_6,VAR_3)) goto err;
  if (!FUNC_3(VAR_11,VAR_11,VAR_7)) goto err;
  VAR_8=VAR_7;
  VAR_7=VAR_6;
  VAR_6=VAR_11;
  VAR_13= -VAR_13;
  }
 if (VAR_13 < 0)
  {
  if (!FUNC_13(VAR_7,VAR_2,VAR_7)) goto err;
  }

 if (FUNC_7(VAR_4))
  { if (!FUNC_9(VAR_10,VAR_7,VAR_2,VAR_3)) goto err; }
 else
  {
  goto err;
  }
 VAR_12=VAR_10;
err:
 if ((VAR_12 == ((void*)0)) && (VAR_0 == ((void*)0))) FUNC_6(VAR_10);
 FUNC_0(VAR_3);
 return(VAR_12);
 }
