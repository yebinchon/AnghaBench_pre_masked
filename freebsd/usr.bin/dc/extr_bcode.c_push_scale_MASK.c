
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {TYPE_1__* num; } ;
struct value {int type; TYPE_2__ u; } ;
struct number {int number; } ;
struct TYPE_3__ {int scale; } ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct number* FUNC_2 () ;
 struct value* FUNC_3 () ;
 int FUNC_4 (struct number*) ;
 int FUNC_5 (struct value*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct number *VAR_0;
 struct value *VAR_1;
 u_int VAR_2 = 0;

 VAR_1 = FUNC_3();
 if (VAR_1 != ((void*)0)) {
  switch (VAR_1->type) {
  case 130:
   return;
  case 129:
   VAR_2 = VAR_1->u.num->scale;
   break;
  case 128:
   break;
  }
  FUNC_5(VAR_1);
  VAR_0 = FUNC_2();
  FUNC_1(FUNC_0(VAR_0->number, VAR_2));
  FUNC_4(VAR_0);
 }
}
