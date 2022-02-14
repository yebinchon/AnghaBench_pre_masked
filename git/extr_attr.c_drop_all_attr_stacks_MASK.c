
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__** checks; } ;
struct TYPE_3__ {int stack; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;

 FUNC_1();

 for (VAR_1 = 0; VAR_1 < VAR_0.nr; VAR_1++) {
  FUNC_0(&VAR_0.checks[VAR_1]->stack);
 }

 FUNC_2();
}
