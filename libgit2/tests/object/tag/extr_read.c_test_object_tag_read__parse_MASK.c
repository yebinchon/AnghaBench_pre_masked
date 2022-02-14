
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tag ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_13(void)
{

 git_tag *VAR_5, *VAR_6;
 git_commit *VAR_7;
 git_oid VAR_8, VAR_9, VAR_10;

 FUNC_6(&VAR_8, VAR_2);
 FUNC_6(&VAR_9, VAR_3);
 FUNC_6(&VAR_10, VAR_4);

 FUNC_2(FUNC_9(&VAR_5, VAR_1, &VAR_8));

 FUNC_1(FUNC_10(VAR_5), "test");
 FUNC_0(FUNC_12(VAR_5) == VAR_0);

 FUNC_2(FUNC_11((git_object **)&VAR_6, VAR_5));
 FUNC_0(VAR_6 != ((void*)0));

 FUNC_0(FUNC_5(&VAR_9, FUNC_8(VAR_6)) == 0);

 FUNC_2(FUNC_11((git_object **)&VAR_7, VAR_6));
 FUNC_0(VAR_7 != ((void*)0));

 FUNC_0(FUNC_5(&VAR_10, FUNC_4(VAR_7)) == 0);

 FUNC_7(VAR_5);
 FUNC_7(VAR_6);
 FUNC_3(VAR_7);
}
