
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ execute; struct TYPE_6__* next; } ;
typedef TYPE_1__ PLAN ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__**) ;

PLAN *
FUNC_2(PLAN *VAR_1)
{
 PLAN *VAR_2;
 PLAN *VAR_3;
 PLAN *VAR_4;

 VAR_4 = VAR_3 = ((void*)0);





 while ((VAR_2 = FUNC_1(&VAR_1)) != ((void*)0)) {




  if (VAR_2->execute == VAR_0)
   FUNC_0(1, "): no beginning '('");


  if (VAR_4 == ((void*)0))
   VAR_3 = VAR_4 = VAR_2;
  else {
   VAR_3->next = VAR_2;
   VAR_3 = VAR_2;
  }
  VAR_3->next = ((void*)0);
 }
 return (VAR_4);
}
