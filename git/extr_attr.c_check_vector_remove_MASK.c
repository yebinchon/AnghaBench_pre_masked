
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct attr_check {int dummy; } ;
struct TYPE_2__ {int nr; struct attr_check** checks; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct attr_check *VAR_1)
{
 int VAR_2;

 FUNC_1();


 for (VAR_2 = 0; VAR_2 < VAR_0.nr; VAR_2++)
  if (VAR_0.checks[VAR_2] == VAR_1)
   break;

 if (VAR_2 >= VAR_0.nr)
  FUNC_0("no entry found");


 for (; VAR_2 < VAR_0.nr - 1; VAR_2++)
  VAR_0.checks[VAR_2] = VAR_0.checks[VAR_2 + 1];

 VAR_0.nr--;

 FUNC_2();
}
