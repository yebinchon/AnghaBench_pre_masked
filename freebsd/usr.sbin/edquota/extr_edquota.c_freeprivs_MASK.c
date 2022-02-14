
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotause {struct quotause* next; int qf; } ;


 int FUNC_0 (struct quotause*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct quotause *VAR_0)
{
 struct quotause *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2) {
  FUNC_1(VAR_1->qf);
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }
}
