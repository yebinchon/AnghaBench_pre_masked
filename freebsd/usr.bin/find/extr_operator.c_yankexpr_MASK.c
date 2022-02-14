
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

__attribute__((used)) static PLAN *
FUNC_2(PLAN **VAR_3)
{
 PLAN *VAR_4;
 PLAN *VAR_5;
 PLAN *VAR_6;
 PLAN *VAR_7;


 if ((VAR_5 = FUNC_1(VAR_3)) == ((void*)0))
  return (((void*)0));







 if (VAR_5->execute == VAR_2)
  for (VAR_6 = VAR_7 = ((void*)0);;) {
   if ((VAR_4 = FUNC_2(VAR_3)) == ((void*)0))
    FUNC_0(1, "(: missing closing ')'");







   if (VAR_4->execute == VAR_0) {
    if (VAR_7 == ((void*)0))
     FUNC_0(1, "(): empty inner expression");
    VAR_5->p_data[0] = VAR_7;
    VAR_5->execute = VAR_1;
    break;
   } else {
    if (VAR_7 == ((void*)0))
     VAR_6 = VAR_7 = VAR_4;
    else {
     VAR_6->next = VAR_4;
     VAR_6 = VAR_4;
    }
    VAR_6->next = ((void*)0);
   }
  }
 return (VAR_5);
}
