
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int string; int num; } ;
struct value {int type; TYPE_1__ u; } ;
struct number {int number; } ;





 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 struct number* FUNC_3 () ;
 struct value* FUNC_4 () ;
 int FUNC_5 (struct number*) ;
 int FUNC_6 (struct value*) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct number *VAR_0 = ((void*)0);
 struct value *VAR_1;
 size_t VAR_2;

 VAR_1 = FUNC_4();
 if (VAR_1 != ((void*)0)) {
  switch (VAR_1->type) {
  case 130:
   return;
  case 129:
   VAR_2 = FUNC_2(VAR_1->u.num);
   VAR_0 = FUNC_3();
   FUNC_1(FUNC_0(VAR_0->number, VAR_2));
   break;
  case 128:
   VAR_2 = FUNC_7(VAR_1->u.string);
   VAR_0 = FUNC_3();
   FUNC_1(FUNC_0(VAR_0->number, VAR_2));
   break;
  }
  FUNC_6(VAR_1);
  FUNC_5(VAR_0);
 }
}
