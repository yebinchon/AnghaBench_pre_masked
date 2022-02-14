
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filtering; int * defaultBar; int * active; int * modes; } ;
typedef TYPE_1__ IncSet ;
typedef int FunctionBar ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int) ;

IncSet* FUNC_3(FunctionBar* VAR_2) {
   IncSet* VAR_3 = FUNC_2(1, sizeof(IncSet));
   FUNC_1(&(VAR_3->modes[VAR_1]));
   FUNC_0(&(VAR_3->modes[VAR_0]));
   VAR_3->active = ((void*)0);
   VAR_3->filtering = 0;
   VAR_3->defaultBar = VAR_2;
   return VAR_3;
}
