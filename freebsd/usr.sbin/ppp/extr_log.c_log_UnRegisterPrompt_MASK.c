
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {struct prompt* next; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct prompt* VAR_1 ;

void
FUNC_1(struct prompt *VAR_2)
{
  if (VAR_2) {
    struct prompt **VAR_3;

    for (VAR_3 = &VAR_1; *VAR_3; VAR_3 = &(*VAR_3)->next)
      if (*VAR_3 == VAR_2) {
        *VAR_3 = VAR_2->next;
        VAR_2->next = ((void*)0);
        break;
      }
    FUNC_0();
    VAR_0++;
  }
}
