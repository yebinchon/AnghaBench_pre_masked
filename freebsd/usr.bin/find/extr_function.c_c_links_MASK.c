
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ nlink_t ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {scalar_t__ l_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*,int *) ;
 int VAR_1 ;
 char* FUNC_1 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;

PLAN *
FUNC_3(OPTION *VAR_2, char ***VAR_3)
{
 char *VAR_4;
 PLAN *VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 VAR_1 &= ~VAR_0;

 VAR_5 = FUNC_2(VAR_2);
 VAR_5->l_data = (nlink_t)FUNC_0(VAR_5, VAR_2->name, VAR_4, ((void*)0));
 return VAR_5;
}
