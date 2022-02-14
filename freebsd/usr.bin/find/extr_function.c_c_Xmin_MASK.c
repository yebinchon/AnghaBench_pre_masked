
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int name; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_12__ {TYPE_1__ t_data; } ;
typedef TYPE_2__ PLAN ;
typedef TYPE_3__ OPTION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int *) ;
 int VAR_1 ;
 char* FUNC_2 (TYPE_3__*,char***) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

PLAN *
FUNC_4(OPTION *VAR_2, char ***VAR_3)
{
 char *VAR_4;
 PLAN *VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 VAR_1 &= ~VAR_0;

 VAR_5 = FUNC_3(VAR_2);
 VAR_5->t_data.tv_sec = FUNC_1(VAR_5, VAR_2->name, VAR_4, ((void*)0));
 VAR_5->t_data.tv_nsec = 0;
 FUNC_0(VAR_5);
 return VAR_5;
}
