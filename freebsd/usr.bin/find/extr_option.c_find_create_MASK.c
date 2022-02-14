
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * (* create ) (TYPE_1__*,char***) ;} ;
typedef int PLAN ;
typedef TYPE_1__ OPTION ;


 int FUNC_0 (int,char*,char*) ;
 TYPE_1__* FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*,char***) ;

PLAN *
FUNC_3(char ***VAR_0)
{
 OPTION *VAR_1;
 PLAN *VAR_2;
 char **VAR_3;

 VAR_3 = *VAR_0;

 if ((VAR_1 = FUNC_1(*VAR_3)) == ((void*)0))
  FUNC_0(1, "%s: unknown primary or operator", *VAR_3);
 ++VAR_3;

 VAR_2 = (VAR_1->create)(VAR_1, &VAR_3);
 *VAR_0 = VAR_3;
 return (VAR_2);
}
