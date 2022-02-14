
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_object *VAR_1;
 git_oid VAR_2;

 FUNC_8();

 FUNC_9(&VAR_2);

 FUNC_2(FUNC_6(&VAR_1, VAR_0, "stash@{1}"));
 FUNC_0(FUNC_5(&VAR_2, FUNC_4(VAR_1)));

 FUNC_2(FUNC_7(VAR_0, 0));

 FUNC_9(&VAR_2);

 FUNC_1(&VAR_2, FUNC_4(VAR_1));

 FUNC_3(VAR_1);
}
