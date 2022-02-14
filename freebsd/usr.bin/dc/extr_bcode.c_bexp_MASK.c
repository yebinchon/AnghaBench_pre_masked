
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int ;
struct number {scalar_t__ scale; int * number; } ;
struct TYPE_2__ {int scale; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_11 (struct number*,struct number*,struct number*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 struct number* FUNC_14 (struct number*) ;
 int FUNC_15 (struct number*) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (struct number*) ;
 struct number* FUNC_18 () ;
 int FUNC_19 (struct number*,int) ;
 struct number* FUNC_20 () ;
 int FUNC_21 (struct number*) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (struct number*,int *,int *) ;
 int FUNC_24 (char*) ;

__attribute__((used)) static void
FUNC_25(void)
{
 struct number *VAR_3, *VAR_4;
 struct number *VAR_5;
 bool VAR_6;
 u_int VAR_7;

 VAR_4 = FUNC_20();
 if (VAR_4 == ((void*)0))
  return;
 VAR_3 = FUNC_20();
 if (VAR_3 == ((void*)0)) {
  FUNC_21(VAR_4);
  return;
 }

 if (VAR_4->scale != 0) {
  BIGNUM *VAR_8, *VAR_9;
  VAR_8 = FUNC_8();
  FUNC_13(VAR_8);
  VAR_9 = FUNC_8();
  FUNC_13(VAR_9);
  FUNC_23(VAR_4, VAR_8, VAR_9);
  if (!FUNC_7(VAR_9))
   FUNC_24("Runtime warning: non-zero fractional part in exponent");
  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
 }

 FUNC_19(VAR_4, 0);

 VAR_6 = 0;
 if (FUNC_6(VAR_4->number)) {
  VAR_6 = 1;
  FUNC_17(VAR_4);
  VAR_7 = VAR_2.scale;
 } else {

  u_long VAR_10;
  u_int VAR_11;

  VAR_10 = FUNC_4(VAR_4->number);
  VAR_11 = FUNC_16(VAR_3->scale, VAR_2.scale);
  VAR_7 = VAR_3->scale * (u_int)VAR_10;
  if (VAR_7 > VAR_11 || (VAR_3->scale > 0 && (VAR_10 == VAR_1 ||
      VAR_10 > VAR_0)))
   VAR_7 = VAR_11;
 }

 if (FUNC_7(VAR_4->number)) {
  VAR_5 = FUNC_18();
  FUNC_12(FUNC_9(VAR_5->number));
  FUNC_19(VAR_5, VAR_7);
 } else {
  u_int VAR_12, VAR_13;

  VAR_12 = VAR_3->scale;
  while (!FUNC_5(VAR_4->number, 0)) {
   VAR_12 *= 2;
   FUNC_11(VAR_3, VAR_3, VAR_3, VAR_12);
   FUNC_12(FUNC_10(VAR_4->number, VAR_4->number));
  }

  VAR_5 = FUNC_14(VAR_3);
  FUNC_12(FUNC_10(VAR_4->number, VAR_4->number));

  VAR_13 = VAR_12;
  while (!FUNC_7(VAR_4->number)) {
   VAR_12 *= 2;
   FUNC_11(VAR_3, VAR_3, VAR_3, VAR_12);
   if (FUNC_5(VAR_4->number, 0)) {
    VAR_13 += VAR_12;
    FUNC_11(VAR_5, VAR_5, VAR_3, VAR_13);
   }
   FUNC_12(FUNC_10(VAR_4->number, VAR_4->number));
  }

  if (VAR_6) {
   BN_CTX *VAR_14;
   BIGNUM *VAR_15;

   VAR_15 = FUNC_8();
   FUNC_13(VAR_15);
   FUNC_12(FUNC_9(VAR_15));
   VAR_14 = FUNC_1();
   FUNC_13(VAR_14);
   FUNC_22(VAR_15, VAR_5->scale + VAR_7);

   if (FUNC_7(VAR_5->number))
    FUNC_24("divide by zero");
   else
    FUNC_12(FUNC_2(VAR_5->number, ((void*)0), VAR_15,
        VAR_5->number, VAR_14));
   FUNC_3(VAR_15);
   FUNC_0(VAR_14);
   VAR_5->scale = VAR_7;
  } else
   FUNC_19(VAR_5, VAR_7);
 }
 FUNC_21(VAR_5);
 FUNC_15(VAR_3);
 FUNC_15(VAR_4);
}
