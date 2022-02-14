
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct number {int number; scalar_t__ scale; } ;
struct TYPE_2__ {scalar_t__ scale; } ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct number* FUNC_7 (struct number*,struct number*,scalar_t__) ;
 int FUNC_8 (struct number*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 struct number* FUNC_10 () ;
 int FUNC_11 (struct number*,scalar_t__) ;
 struct number* FUNC_12 () ;
 int FUNC_13 (struct number*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(void)
{
 struct number *VAR_1, *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 BN_CTX *VAR_7;
 u_int VAR_8;

 VAR_1 = FUNC_12();
 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = FUNC_12();
 if (VAR_2 == ((void*)0)) {
  FUNC_13(VAR_1);
  return;
 }

 VAR_5 = FUNC_10();
 VAR_4 = FUNC_10();
 VAR_6 = FUNC_10();
 VAR_8 = FUNC_9(VAR_1->scale, VAR_2->scale);
 VAR_5->scale = 0;
 VAR_6->scale = VAR_8;
 VAR_4->scale = VAR_0.scale;
 VAR_8 = FUNC_9(VAR_1->scale, VAR_2->scale);

 if (FUNC_4(VAR_1->number))
  FUNC_14("divide by zero");
 else {
  FUNC_11(VAR_1, VAR_8);
  FUNC_11(VAR_2, VAR_8);

  VAR_7 = FUNC_1();
  FUNC_6(VAR_7);
  FUNC_5(FUNC_3(VAR_5->number, VAR_6->number,
      VAR_2->number, VAR_1->number, VAR_7));
  VAR_3 = FUNC_7(VAR_6, VAR_1, VAR_0.scale);
  FUNC_11(VAR_5, VAR_0.scale);
  FUNC_11(VAR_6, VAR_8);
  FUNC_5(FUNC_2(VAR_4->number, VAR_5->number, VAR_3->number));
  FUNC_8(VAR_3);
  FUNC_0(VAR_7);
 }
 FUNC_13(VAR_4);
 FUNC_13(VAR_6);
 FUNC_8(VAR_5);
 FUNC_8(VAR_1);
 FUNC_8(VAR_2);
}
