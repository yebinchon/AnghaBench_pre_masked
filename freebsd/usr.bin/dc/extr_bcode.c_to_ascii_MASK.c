
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* string; struct number* num; } ;
struct value {int type; TYPE_1__ u; } ;
struct number {int number; } ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct number*,int ) ;
 struct value* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct value*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct number *VAR_0;
 struct value *VAR_1;
 char VAR_2[2];

 VAR_1 = FUNC_6();
 if (VAR_1 != ((void*)0)) {
  VAR_2[1] = '\0';
  switch (VAR_1->type) {
  case 130:
   return;
  case 129:
   VAR_0 = VAR_1->u.num;
   FUNC_5(VAR_0, 0);
   if (FUNC_2(VAR_0->number) > 8)
    FUNC_3(FUNC_1(VAR_0->number, 8));
   VAR_2[0] = (char)FUNC_0(VAR_0->number);
   break;
  case 128:
   VAR_2[0] = VAR_1->u.string[0];
   break;
  }
  FUNC_8(VAR_1);
  FUNC_7(FUNC_4(VAR_2));
 }
}
