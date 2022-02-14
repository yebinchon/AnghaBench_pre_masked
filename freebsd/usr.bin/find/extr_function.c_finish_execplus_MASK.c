
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* e_next; int (* execute ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ PLAN ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;

void
FUNC_1(void)
{
 PLAN *VAR_1;

 VAR_1 = VAR_0;
 while (VAR_1 != ((void*)0)) {
  (VAR_1->execute)(VAR_1, ((void*)0));
  VAR_1 = VAR_1->e_next;
 }
}
