
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct number {int number; } ;
struct TYPE_2__ {int * reg; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 struct number* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct number*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct value*,struct value*) ;
 struct value* FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct number *VAR_1;
 struct value *VAR_2;
 struct value VAR_3;
 int VAR_4;

 VAR_4 = FUNC_5();
 if (VAR_4 >= 0) {
  VAR_2 = FUNC_7(&VAR_0.reg[VAR_4]);
  if (VAR_2 == ((void*)0)) {
   VAR_1 = FUNC_2();
   FUNC_1(FUNC_0(VAR_1->number));
   FUNC_4(VAR_1);
  } else
   FUNC_3(FUNC_6(VAR_2, &VAR_3));
 }
}
