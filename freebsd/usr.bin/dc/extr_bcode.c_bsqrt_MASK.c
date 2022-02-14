
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct number {int scale; int * number; } ;
struct TYPE_2__ {int scale; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int *) ;
 TYPE_1__ VAR_0 ;
 struct number* FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int *,int*) ;
 int FUNC_17 (struct number*) ;
 int FUNC_18 (int ,int) ;
 struct number* FUNC_19 () ;
 int FUNC_20 (struct number*,int) ;
 struct number* FUNC_21 () ;
 int FUNC_22 (struct number*) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void
FUNC_24(void)
{
 struct number *VAR_1, *VAR_2;
 BIGNUM *VAR_3, *VAR_4;
 BN_CTX *VAR_5;
 u_int VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_1 = FUNC_21();
 if (VAR_1 == ((void*)0))
  return;
 if (FUNC_8(VAR_1->number)) {
  VAR_2 = FUNC_19();
  FUNC_22(VAR_2);
 } else if (FUNC_7(VAR_1->number))
  FUNC_23("square root of negative number");
 else {
  VAR_7 = FUNC_18(VAR_0.scale, VAR_1->scale);
  FUNC_20(VAR_1, 2*VAR_7);
  VAR_3 = FUNC_5(VAR_1->number);
  FUNC_15(VAR_3);
  FUNC_14(FUNC_11(VAR_3, VAR_3, FUNC_10(VAR_3)/2));
  VAR_4 = FUNC_9();
  FUNC_15(VAR_4);
  VAR_5 = FUNC_1();
  FUNC_15(VAR_5);
  for (;;) {
   FUNC_15(FUNC_3(VAR_4, VAR_3));
   FUNC_14(FUNC_4(VAR_3, ((void*)0), VAR_1->number, VAR_3, VAR_5));
   FUNC_14(FUNC_2(VAR_3, VAR_3, VAR_4));
   FUNC_14(FUNC_12(VAR_3, VAR_3));
   if (FUNC_16(VAR_3, VAR_4, &VAR_6))
    break;
  }
  VAR_2 = FUNC_13(sizeof(*VAR_2));
  VAR_2->scale = VAR_7;
  VAR_2->number = VAR_4;
  FUNC_6(VAR_3);
  FUNC_0(VAR_5);
  FUNC_22(VAR_2);
 }

 FUNC_17(VAR_1);
}
