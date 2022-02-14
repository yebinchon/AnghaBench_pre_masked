
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct number {int number; scalar_t__ scale; } ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct number* FUNC_7 () ;
 int FUNC_8 (struct number*,scalar_t__) ;
 int FUNC_9 (char*) ;

struct number *
FUNC_10(struct number *VAR_0, struct number *VAR_1, u_int VAR_2)
{
 struct number *VAR_3;
 BN_CTX *VAR_4;
 u_int VAR_5;

 VAR_3 = FUNC_7();
 VAR_3->scale = VAR_2;
 VAR_5 = FUNC_6(VAR_1->scale, VAR_0->scale);

 if (FUNC_3(VAR_1->number))
  FUNC_9("divide by zero");
 else {
  FUNC_8(VAR_1, VAR_5);
  FUNC_8(VAR_0, VAR_5 + VAR_3->scale);

  VAR_4 = FUNC_1();
  FUNC_5(VAR_4);
  FUNC_4(FUNC_2(VAR_3->number, ((void*)0), VAR_0->number,
    VAR_1->number, VAR_4));
  FUNC_0(VAR_4);
 }
 return (VAR_3);
}
