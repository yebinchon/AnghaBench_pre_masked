
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct number {int number; } ;
struct TYPE_2__ {int stack; } ;


 int FUNC_0 (int ,size_t) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 struct number* FUNC_2 () ;
 int FUNC_3 (struct number*) ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct number *VAR_1;
 size_t VAR_2;

 VAR_2 = FUNC_4(&VAR_0.stack);
 VAR_1 = FUNC_2();
 FUNC_1(FUNC_0(VAR_1->number, VAR_2));
 FUNC_3(VAR_1);
}
