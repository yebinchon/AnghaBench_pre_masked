
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {struct prompt* next; } ;
struct datalink {int dummy; } ;


 scalar_t__ FUNC_0 (struct prompt*,struct datalink*) ;
 int FUNC_1 (struct prompt*) ;
 struct prompt* VAR_0 ;

void
FUNC_2(struct datalink *VAR_1)
{
  struct prompt *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (FUNC_0(VAR_2, VAR_1))
      FUNC_1(VAR_2);
}
