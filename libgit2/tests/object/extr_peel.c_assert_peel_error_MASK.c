
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object_t ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *,char const*) ;

__attribute__((used)) static void FUNC_6(int VAR_2, const char *VAR_3, git_object_t VAR_4)
{
 git_oid VAR_5;
 git_object *VAR_6;
 git_object *VAR_7;

 FUNC_1(FUNC_5(&VAR_5, VAR_3));
 FUNC_1(FUNC_3(&VAR_6, VAR_1, &VAR_5, VAR_0));

 FUNC_0(VAR_2, FUNC_4(&VAR_7, VAR_6, VAR_4));

 FUNC_2(VAR_6);
}
