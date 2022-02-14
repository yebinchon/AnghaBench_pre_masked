
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {struct prompt* next; } ;


 int FUNC_0 (struct prompt*) ;
 struct prompt* VAR_0 ;

void
FUNC_1()
{
  struct prompt *VAR_1;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    FUNC_0(VAR_1);
}
