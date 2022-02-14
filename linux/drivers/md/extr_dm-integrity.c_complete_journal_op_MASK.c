
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_completion {int comp; int in_flight; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct journal_completion *VAR_1 = VAR_0;
 FUNC_0(!FUNC_2(&VAR_1->in_flight));
 if (FUNC_4(FUNC_1(&VAR_1->in_flight)))
  FUNC_3(&VAR_1->comp);
}
