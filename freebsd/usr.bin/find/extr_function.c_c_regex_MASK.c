
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int regex_t ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int * re_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,char*,char*,char*) ;
 int * FUNC_2 (int) ;
 char* FUNC_3 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int,int *,char*,int) ;
 int VAR_3 ;

PLAN *
FUNC_7(OPTION *VAR_4, char ***VAR_5)
{
 PLAN *VAR_6;
 char *VAR_7;
 regex_t *VAR_8;
 int VAR_9;
 char VAR_10[VAR_1];

 if ((VAR_8 = FUNC_2(sizeof(regex_t))) == ((void*)0))
  FUNC_0(1, ((void*)0));

 VAR_7 = FUNC_3(VAR_4, VAR_5);

 if ((VAR_9 = FUNC_5(VAR_8, VAR_7,
     VAR_3 | (VAR_4->flags & VAR_0 ? VAR_2 : 0))) != 0) {
  FUNC_6(VAR_9, VAR_8, VAR_10, sizeof VAR_10);
  FUNC_1(1, "%s: %s: %s",
       VAR_4->flags & VAR_0 ? "-iregex" : "-regex",
       VAR_7, VAR_10);
 }

 VAR_6 = FUNC_4(VAR_4);
 VAR_6->re_data = VAR_8;

 return VAR_6;
}
