
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int* d; } ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_1__ const BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_1__ const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__ const*,int *) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*,int) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*) ;
 int FUNC_14 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 scalar_t__ FUNC_15 (TYPE_1__ const*,TYPE_1__ const*) ;
 TYPE_1__ const* FUNC_16 () ;
 int FUNC_17 (int) ;
 int VAR_0 ;
 int FUNC_18 (TYPE_1__ const*) ;

int FUNC_19(BIGNUM *VAR_1, BIGNUM *VAR_2, const BIGNUM *VAR_3,
      const BIGNUM *VAR_4, BN_CTX *VAR_5, BN_MONT_CTX *VAR_6)
 {
 int VAR_7,VAR_8,VAR_9,VAR_10=0,VAR_11,VAR_12,VAR_13,VAR_14;
 int VAR_15=1,VAR_16=0;
 BIGNUM *VAR_17,*VAR_18;
 BIGNUM *VAR_19;
 BIGNUM VAR_20[VAR_0];
 BN_MONT_CTX *VAR_21=((void*)0);

 FUNC_18(VAR_2);
 FUNC_18(VAR_3);
 FUNC_18(VAR_4);

 if (!(VAR_4->d[0] & 1))
  {
  return(0);
  }
 VAR_9=FUNC_12(VAR_3);
 if (VAR_9 == 0)
  {
  FUNC_13(VAR_1);
  return(1);
  }
 FUNC_2(VAR_5);
 VAR_17 = FUNC_1(VAR_5);
 VAR_18 = FUNC_1(VAR_5);
 if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0)) goto err;




 if (VAR_6 != ((void*)0))
  VAR_21=VAR_6;
 else
  {
  if ((VAR_21=FUNC_4()) == ((void*)0)) goto err;
  if (!FUNC_5(VAR_21,VAR_4,VAR_5)) goto err;
  }

 FUNC_8(&VAR_20[0]);
 VAR_16=1;
 if (FUNC_15(VAR_2,VAR_4) >= 0)
  {
  if (!FUNC_10(&(VAR_20[0]),VAR_2,VAR_4,VAR_5))
   goto err;
  VAR_19= &(VAR_20[0]);
  }
 else
  VAR_19=VAR_2;
 if (!FUNC_14(&(VAR_20[0]),VAR_19,VAR_21,VAR_5)) goto err;

 VAR_13 = FUNC_17(VAR_9);
 if (VAR_13 > 1)
  {
  if (!FUNC_11(VAR_17,&(VAR_20[0]),&(VAR_20[0]),VAR_21,VAR_5)) goto err;
  VAR_8=1<<(VAR_13-1);
  for (VAR_7=1; VAR_7<VAR_8; VAR_7++)
   {
   FUNC_8(&(VAR_20[VAR_7]));
   if (!FUNC_11(&(VAR_20[VAR_7]),&(VAR_20[VAR_7-1]),VAR_17,VAR_21,VAR_5))
    goto err;
   }
  VAR_16=VAR_7;
  }

 VAR_15=1;


 VAR_14=0;
 VAR_11=VAR_9-1;
 VAR_12=0;

 if (!FUNC_14(VAR_18,FUNC_16(),VAR_21,VAR_5)) goto err;
 for (;;)
  {
  if (FUNC_9(VAR_3,VAR_11) == 0)
   {
   if (!VAR_15)
    {
    if (!FUNC_11(VAR_18,VAR_18,VAR_18,VAR_21,VAR_5))
    goto err;
    }
   if (VAR_11 == 0) break;
   VAR_11--;
   continue;
   }




  VAR_8=VAR_11;
  VAR_14=1;
  VAR_12=0;
  for (VAR_7=1; VAR_7<VAR_13; VAR_7++)
   {
   if (VAR_11-VAR_7 < 0) break;
   if (FUNC_9(VAR_3,VAR_11-VAR_7))
    {
    VAR_14<<=(VAR_7-VAR_12);
    VAR_14|=1;
    VAR_12=VAR_7;
    }
   }


  VAR_8=VAR_12+1;

  if (!VAR_15)
   for (VAR_7=0; VAR_7<VAR_8; VAR_7++)
    {
    if (!FUNC_11(VAR_18,VAR_18,VAR_18,VAR_21,VAR_5))
     goto err;
    }


  if (!FUNC_11(VAR_18,VAR_18,&(VAR_20[VAR_14>>1]),VAR_21,VAR_5))
   goto err;


  VAR_11-=VAR_12+1;
  VAR_14=0;
  VAR_15=0;
  if (VAR_11 < 0) break;
  }
 if (!FUNC_7(VAR_1,VAR_18,VAR_21,VAR_5)) goto err;
 VAR_10=1;
err:
 if ((VAR_6 == ((void*)0)) && (VAR_21 != ((void*)0))) FUNC_3(VAR_21);
 FUNC_0(VAR_5);
 for (VAR_7=0; VAR_7<VAR_16; VAR_7++)
  FUNC_6(&(VAR_20[VAR_7]));
 return(VAR_10);
 }
