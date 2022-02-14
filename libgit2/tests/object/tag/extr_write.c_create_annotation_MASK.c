
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ,int,int) ;
 int FUNC_6 (int *,int ,char const*,int *,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_7(git_oid *VAR_5, const char *VAR_6)
{
 git_object *VAR_7;
 git_oid VAR_8;
 git_signature *VAR_9;

 FUNC_0(FUNC_5(&VAR_9, VAR_4, VAR_3, 123456789, 60));

 FUNC_3(&VAR_8, VAR_2);
 FUNC_0(FUNC_2(&VAR_7, VAR_1, &VAR_8, VAR_0));

 FUNC_0(FUNC_6(VAR_5, VAR_1, VAR_6, VAR_7, VAR_9, "boom!"));
 FUNC_1(VAR_7);
 FUNC_4(VAR_9);
}
