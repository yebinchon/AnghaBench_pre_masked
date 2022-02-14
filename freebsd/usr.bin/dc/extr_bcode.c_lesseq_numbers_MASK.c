
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct number {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct number*,struct number*) ;
 struct number* FUNC_3 () ;
 struct number* FUNC_4 () ;
 int FUNC_5 (struct number*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct number *VAR_1, *VAR_2, *VAR_3;

 VAR_1 = FUNC_4();
 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = FUNC_4();
 if (VAR_2 == ((void*)0)) {
  FUNC_5(VAR_1);
  return;
 }
 VAR_3 = FUNC_3();
 FUNC_1(FUNC_0(VAR_3->number,
     FUNC_2(VAR_0, VAR_1, VAR_2) ? 1 : 0));
 FUNC_5(VAR_3);
}
