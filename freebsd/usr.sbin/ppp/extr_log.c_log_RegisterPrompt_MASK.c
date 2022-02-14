
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int active; int logmask; struct prompt* next; } ;


 int FUNC_0 (int *) ;
 struct prompt* VAR_0 ;

void
FUNC_1(struct prompt *VAR_1)
{
  VAR_1->next = VAR_0;
  VAR_0 = VAR_1;
  VAR_1->active = 1;
  FUNC_0(&VAR_1->logmask);
}
