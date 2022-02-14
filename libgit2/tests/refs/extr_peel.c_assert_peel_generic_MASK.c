
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object_t ;
typedef int git_object ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,char const*) ;
 int FUNC_9 (int **,int *,int ) ;

__attribute__((used)) static void FUNC_10(
 git_repository *VAR_0,
 const char *VAR_1,
 git_object_t VAR_2,
 const char* VAR_3,
 git_object_t VAR_4)
{
 git_oid VAR_5;
 git_reference *VAR_6;
 git_object *VAR_7;

 FUNC_2(FUNC_8(&VAR_6, VAR_0, VAR_1));

 FUNC_2(FUNC_9(&VAR_7, VAR_6, VAR_2));

 FUNC_2(FUNC_6(&VAR_5, VAR_3));
 FUNC_1(&VAR_5, FUNC_4(VAR_7));

 FUNC_0(VAR_4, FUNC_5(VAR_7));

 FUNC_3(VAR_7);
 FUNC_7(VAR_6);
}
