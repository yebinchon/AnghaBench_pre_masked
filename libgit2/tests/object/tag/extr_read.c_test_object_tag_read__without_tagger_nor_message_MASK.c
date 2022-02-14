
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * tagger; int * message; } ;
typedef TYPE_1__ git_tag ;
typedef int git_repository ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__**,int *,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int VAR_1 ;

void FUNC_11(void)
{
 git_tag *VAR_2;
 git_oid VAR_3;
 git_repository *VAR_4;

 FUNC_3(FUNC_6(&VAR_4, FUNC_2("testrepo.git")));

 FUNC_3(FUNC_4(&VAR_3, VAR_1));

 FUNC_3(FUNC_8(&VAR_2, VAR_4, &VAR_3));

 FUNC_1(FUNC_9(VAR_2), "taggerless");
 FUNC_0(FUNC_10(VAR_2) == VAR_0);

 FUNC_0(VAR_2->message == ((void*)0));
 FUNC_0(VAR_2->tagger == ((void*)0));

 FUNC_7(VAR_2);
 FUNC_5(VAR_4);
}
