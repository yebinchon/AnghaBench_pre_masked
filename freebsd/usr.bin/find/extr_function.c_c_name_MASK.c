
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* c_data; } ;
typedef TYPE_1__ PLAN ;
typedef int OPTION ;


 char* FUNC_0 (int *,char***) ;
 TYPE_1__* FUNC_1 (int *) ;

PLAN *
FUNC_2(OPTION *VAR_0, char ***VAR_1)
{
 char *VAR_2;
 PLAN *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_0);
 VAR_3->c_data = VAR_2;
 return VAR_3;
}
