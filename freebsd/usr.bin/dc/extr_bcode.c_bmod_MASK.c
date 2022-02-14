
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct number {int number; int scale; } ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct number*) ;
 int FUNC_7 (int ,int ) ;
 struct number* FUNC_8 () ;
 int FUNC_9 (struct number*,int ) ;
 struct number* FUNC_10 () ;
 int FUNC_11 (struct number*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(void)
{
 struct number *VAR_0, *VAR_1, *VAR_2;
 BN_CTX *VAR_3;
 u_int VAR_4;

 VAR_0 = FUNC_10();
 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = FUNC_10();
 if (VAR_1 == ((void*)0)) {
  FUNC_11(VAR_0);
  return;
 }

 VAR_2 = FUNC_8();
 VAR_4 = FUNC_7(VAR_0->scale, VAR_1->scale);
 VAR_2->scale = VAR_4;

 if (FUNC_2(VAR_0->number))
  FUNC_12("remainder by zero");
 else {
  FUNC_9(VAR_0, VAR_4);
  FUNC_9(VAR_1, VAR_4);

  VAR_3 = FUNC_1();
  FUNC_5(VAR_3);
  FUNC_4(FUNC_3(VAR_2->number, VAR_1->number, VAR_0->number, VAR_3));
  FUNC_0(VAR_3);
 }
 FUNC_11(VAR_2);
 FUNC_6(VAR_0);
 FUNC_6(VAR_1);
}
