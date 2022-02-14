
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sticky_route {struct sticky_route* next; } ;


 int FUNC_0 (struct sticky_route*) ;

void
FUNC_1(struct sticky_route **VAR_0)
{
  struct sticky_route *VAR_1, *VAR_2;

  for (VAR_1 = *VAR_0; VAR_1; VAR_1 = VAR_2) {
    VAR_2 = VAR_1->next;
    FUNC_0(VAR_1);
  }
  *VAR_0 = ((void*)0);
}
