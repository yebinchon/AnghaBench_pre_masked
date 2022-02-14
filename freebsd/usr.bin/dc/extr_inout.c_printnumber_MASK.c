
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct stack {int dummy; } ;
typedef struct number {scalar_t__ scale; int * number; } const number ;
typedef int buf ;
typedef int FILE ;
typedef int BN_ULONG ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (struct number const*,struct number const*,struct number const*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct number const*) ;
 char* FUNC_18 (int ,int,int) ;
 int VAR_1 ;
 struct number const* FUNC_19 () ;
 int FUNC_20 (struct number const*,scalar_t__) ;
 int FUNC_21 (int *,char*) ;
 int FUNC_22 (int *,char) ;
 int FUNC_23 (int *,scalar_t__) ;
 int FUNC_24 (char*,int,char*,int) ;
 int FUNC_25 (struct number const*,int *,int *) ;
 int FUNC_26 (struct stack*) ;
 int FUNC_27 (struct stack*) ;
 char* FUNC_28 (struct stack*) ;
 int FUNC_29 (struct stack*,char*) ;

void
FUNC_30(FILE *VAR_2, const struct number *VAR_3, u_int VAR_4)
{
 struct number *VAR_5, *VAR_6;
 struct stack VAR_7;
 char *VAR_8;
 char VAR_9[11];
 size_t VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_0 = 0;
 VAR_1 = -1;
 if (FUNC_5(VAR_3->number))
  FUNC_22(VAR_2, '0');

 VAR_6 = FUNC_19();
 VAR_5 = FUNC_19();
 VAR_5->scale = VAR_3->scale;

 if (VAR_4 <= 16)
  VAR_12 = 1;
 else {
  VAR_12 = FUNC_24(VAR_9, sizeof(VAR_9), "%u", VAR_4-1);
 }
 FUNC_25(VAR_3, VAR_6->number, VAR_5->number);

 VAR_11 = 0;
 FUNC_27(&VAR_7);
 while (!FUNC_5(VAR_6->number)) {
  BN_ULONG VAR_13 = FUNC_1(VAR_6->number, VAR_4);
  FUNC_29(&VAR_7, FUNC_18(VAR_13, VAR_12, VAR_4));
  VAR_11++;
 }
 VAR_10 = VAR_11;
 if (FUNC_4(VAR_3->number))
  FUNC_22(VAR_2, '-');
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_8 = FUNC_28(&VAR_7);
  if (VAR_4 > 16)
   FUNC_22(VAR_2, ' ');
  FUNC_21(VAR_2, VAR_8);
  FUNC_16(VAR_8);
 }
 FUNC_26(&VAR_7);
 if (VAR_3->scale > 0) {
  struct number *VAR_14;
  BIGNUM *VAR_15, *VAR_16;

  FUNC_22(VAR_2, '.');
  VAR_14 = FUNC_19();
  FUNC_13(FUNC_9(VAR_14->number, VAR_4));
  VAR_15 = FUNC_7();
  FUNC_14(VAR_15);
  FUNC_13(FUNC_8(VAR_15));
  VAR_16 = FUNC_7();
  FUNC_14(VAR_16);
  FUNC_13(FUNC_8(VAR_16));
  FUNC_23(VAR_16, VAR_3->scale);

  VAR_11 = 0;
  while (FUNC_0(VAR_15, VAR_16) < 0) {
   u_long VAR_17;

   if (VAR_11 && VAR_4 > 16)
    FUNC_22(VAR_2, ' ');
   VAR_11 = 1;

   FUNC_12(VAR_5, VAR_5, VAR_14,
       FUNC_11());
   FUNC_25(VAR_5, VAR_6->number, ((void*)0));
   VAR_17 = FUNC_3(VAR_6->number);
   VAR_8 = FUNC_18(VAR_17, VAR_12, VAR_4);
   VAR_6->scale = 0;
   FUNC_20(VAR_6, VAR_5->scale);
   FUNC_13(FUNC_10(VAR_5->number, VAR_5->number,
       VAR_6->number));
   FUNC_21(VAR_2, VAR_8);
   FUNC_16(VAR_8);
   FUNC_13(FUNC_6(VAR_15, VAR_4));
  }
  FUNC_17(VAR_14);
  FUNC_2(VAR_15);
  FUNC_2(VAR_16);
 }
 FUNC_15(VAR_2);
 FUNC_17(VAR_6);
 FUNC_17(VAR_5);
}
