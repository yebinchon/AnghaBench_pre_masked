
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_8__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__**,int *,char const*,int *,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int *,char const*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

void FUNC_13(void)
{

 git_reference *VAR_3, *VAR_4;
 git_repository *VAR_5;
 git_oid VAR_6;

 const char *VAR_7 = "refs/heads/new-head";

 FUNC_4(&VAR_6, VAR_1);


 FUNC_3(FUNC_5(&VAR_3, VAR_2, VAR_7, &VAR_6, 0, ((void*)0)));


 FUNC_3(FUNC_7(&VAR_4, VAR_2, VAR_7));
 FUNC_0(FUNC_9(VAR_4) & VAR_0);
 FUNC_0(FUNC_12(VAR_4) == 0);
 FUNC_2(VAR_4->name, VAR_7);


 FUNC_1(&VAR_6, FUNC_8(VAR_4));
 FUNC_6(VAR_4);


 FUNC_3(FUNC_11(&VAR_5, "testrepo"));

 FUNC_3(FUNC_7(&VAR_4, VAR_5, VAR_7));
 FUNC_1(&VAR_6, FUNC_8(VAR_4));

 FUNC_10(VAR_5);

 FUNC_6(VAR_3);
 FUNC_6(VAR_4);
}
