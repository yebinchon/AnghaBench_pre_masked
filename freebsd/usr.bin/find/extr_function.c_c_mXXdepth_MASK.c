
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int name; } ;
typedef int PLAN ;
typedef TYPE_1__ OPTION ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,char*) ;
 void* FUNC_1 (int *,int ,char*,int *) ;
 void* VAR_1 ;
 void* VAR_2 ;
 char* FUNC_2 (TYPE_1__*,char***) ;
 int * FUNC_3 (TYPE_1__*) ;

PLAN *
FUNC_4(OPTION *VAR_3, char ***VAR_4)
{
 char *VAR_5;
 PLAN *VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5[0] == '-')

  FUNC_0(1, "%s: %s: value must be positive", VAR_3->name, VAR_5);

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_3->flags & VAR_0)
  VAR_1 = FUNC_1(VAR_6, VAR_3->name, VAR_5, ((void*)0));
 else
  VAR_2 = FUNC_1(VAR_6, VAR_3->name, VAR_5, ((void*)0));
 return VAR_6;
}
