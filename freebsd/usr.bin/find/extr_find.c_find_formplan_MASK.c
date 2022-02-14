
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* (* create ) (TYPE_2__*,char***) ;} ;
struct TYPE_20__ {struct TYPE_20__* next; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 TYPE_1__* FUNC_0 (char***) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,char***) ;

PLAN *
FUNC_9(char *VAR_1[])
{
 PLAN *VAR_2, *VAR_3, *VAR_4;
 for (VAR_2 = VAR_3 = ((void*)0); *VAR_1;) {
  if (!(VAR_4 = FUNC_0(&VAR_1)))
   continue;
  if (VAR_2 == ((void*)0))
   VAR_3 = VAR_2 = VAR_4;
  else {
   VAR_3->next = VAR_4;
   VAR_3 = VAR_4;
  }
 }






 if (!VAR_0) {
  OPTION *VAR_5;
  char **VAR_6 = 0;

  if (VAR_2 == ((void*)0)) {
   VAR_5 = FUNC_1("-print");
   VAR_4 = (VAR_5->create)(VAR_5, &VAR_6);
   VAR_3 = VAR_2 = VAR_4;
  } else {
   VAR_5 = FUNC_1("(");
   VAR_4 = (VAR_5->create)(VAR_5, &VAR_6);
   VAR_4->next = VAR_2;
   VAR_2 = VAR_4;
   VAR_5 = FUNC_1(")");
   VAR_4 = (VAR_5->create)(VAR_5, &VAR_6);
   VAR_3->next = VAR_4;
   VAR_3 = VAR_4;
   VAR_5 = FUNC_1("-print");
   VAR_4 = (VAR_5->create)(VAR_5, &VAR_6);
   VAR_3->next = VAR_4;
   VAR_3 = VAR_4;
  }
 }
 VAR_2 = FUNC_4(VAR_2);
 VAR_2 = FUNC_2(VAR_2);
 VAR_2 = FUNC_3(VAR_2);
 return (VAR_2);
}
