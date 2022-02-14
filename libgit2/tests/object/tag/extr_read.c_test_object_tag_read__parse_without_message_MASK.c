
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * message; } ;
typedef TYPE_1__ git_tag ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__**,int *,int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int **,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_15(void)
{

 git_repository *VAR_2;
 git_tag *VAR_3;
 git_commit *VAR_4;
 git_oid VAR_5, VAR_6;


 FUNC_3(FUNC_9(&VAR_2, FUNC_2("short_tag.git")));

 FUNC_7(&VAR_5, VAR_0);
 FUNC_7(&VAR_6, VAR_1);

 FUNC_3(FUNC_12(&VAR_3, VAR_2, &VAR_5));
 FUNC_0(VAR_3 != ((void*)0));

 FUNC_1(FUNC_13(VAR_3), "no_description");
 FUNC_0(FUNC_6(&VAR_5, FUNC_11(VAR_3)) == 0);
 FUNC_0(VAR_3->message == ((void*)0));

 FUNC_3(FUNC_14((git_object **)&VAR_4, VAR_3));
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_0(FUNC_6(&VAR_6, FUNC_5(VAR_4)) == 0);

 FUNC_10(VAR_3);
 FUNC_4(VAR_4);
 FUNC_8(VAR_2);
}
