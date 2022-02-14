
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {int dummy; } ;
struct prompt {struct prompt* next; struct server* owner; } ;


 int FUNC_0 (struct prompt*,int) ;
 struct prompt* VAR_0 ;

void
FUNC_1(struct server *VAR_1)
{
  struct prompt *VAR_2, *VAR_3, *VAR_4;

  VAR_2 = VAR_0;
  VAR_4 = ((void*)0);
  while (VAR_2) {
    VAR_3 = VAR_2->next;
    if (VAR_1 && VAR_2->owner == VAR_1) {
      if (VAR_4)
        VAR_4->next = VAR_2->next;
      else
        VAR_0 = VAR_2->next;
      VAR_2->next = ((void*)0);
      FUNC_0(VAR_2, 1);
    } else
      VAR_4 = VAR_2;
    VAR_2 = VAR_3;
  }
}
