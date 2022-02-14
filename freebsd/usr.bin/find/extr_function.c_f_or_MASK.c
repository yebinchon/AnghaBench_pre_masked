
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* execute ) (TYPE_1__*,int *) ;struct TYPE_5__* next; struct TYPE_5__** p_data; } ;
typedef TYPE_1__ PLAN ;
typedef int FTSENT ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

int
FUNC_2(PLAN *VAR_0, FTSENT *VAR_1)
{
 PLAN *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_0->p_data[0];
     VAR_2 && (VAR_3 = (VAR_2->execute)(VAR_2, VAR_1)); VAR_2 = VAR_2->next);

 if (VAR_3)
  return 1;

 for (VAR_2 = VAR_0->p_data[1];
     VAR_2 && (VAR_3 = (VAR_2->execute)(VAR_2, VAR_1)); VAR_2 = VAR_2->next);
 return VAR_3;
}
