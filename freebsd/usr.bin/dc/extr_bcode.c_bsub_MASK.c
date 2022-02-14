
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct number {scalar_t__ scale; int number; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct number*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 struct number* FUNC_4 () ;
 int FUNC_5 (struct number*,scalar_t__) ;
 struct number* FUNC_6 () ;
 int FUNC_7 (struct number*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct number *VAR_0, *VAR_1, *VAR_2;

 VAR_0 = FUNC_6();
 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = FUNC_6();
 if (VAR_1 == ((void*)0)) {
  FUNC_7(VAR_0);
  return;
 }

 VAR_2 = FUNC_4();

 VAR_2->scale = FUNC_3(VAR_0->scale, VAR_1->scale);
 if (VAR_2->scale > VAR_0->scale)
  FUNC_5(VAR_0, VAR_2->scale);
 else if (VAR_2->scale > VAR_1->scale)
  FUNC_5(VAR_1, VAR_2->scale);
 FUNC_1(FUNC_0(VAR_2->number, VAR_1->number, VAR_0->number));
 FUNC_7(VAR_2);
 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
}
