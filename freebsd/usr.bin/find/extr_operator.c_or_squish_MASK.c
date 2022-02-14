
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ execute; struct TYPE_6__* next; struct TYPE_6__** p_data; } ;
typedef TYPE_1__ PLAN ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__**) ;

PLAN *
FUNC_2(PLAN *VAR_3)
{
 PLAN *VAR_4;
 PLAN *VAR_5;
 PLAN *VAR_6;

 VAR_5 = VAR_6 = VAR_4 = ((void*)0);

 while ((VAR_4 = FUNC_1(&VAR_3)) != ((void*)0)) {




  if (VAR_4->execute == VAR_0)
   VAR_4->p_data[0] = FUNC_2(VAR_4->p_data[0]);


  if (VAR_4->execute == VAR_1)
   VAR_4->p_data[0] = FUNC_2(VAR_4->p_data[0]);






  if (VAR_4->execute == VAR_2) {
   if (VAR_6 == ((void*)0))
    FUNC_0(1, "-o: no expression before -o");
   VAR_4->p_data[0] = VAR_6;
   VAR_4->p_data[1] = FUNC_2(VAR_3);
   if (VAR_4->p_data[1] == ((void*)0))
    FUNC_0(1, "-o: no expression after -o");
   return (VAR_4);
  }


  if (VAR_6 == ((void*)0))
   VAR_5 = VAR_6 = VAR_4;
  else {
   VAR_5->next = VAR_4;
   VAR_5 = VAR_4;
  }
  VAR_5->next = ((void*)0);
 }
 return (VAR_6);
}
