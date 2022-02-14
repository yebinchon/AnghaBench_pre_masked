
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object_t ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;

__attribute__((used)) static void FUNC_9(
 const char *VAR_2,
 git_object_t VAR_3,
 const char* VAR_4,
 git_object_t VAR_5)
{
 git_oid VAR_6, VAR_7;
 git_object *VAR_8;
 git_object *VAR_9;

 FUNC_2(FUNC_8(&VAR_6, VAR_2));
 FUNC_2(FUNC_5(&VAR_8, VAR_1, &VAR_6, VAR_0));

 FUNC_2(FUNC_6(&VAR_9, VAR_8, VAR_3));

 FUNC_2(FUNC_8(&VAR_7, VAR_4));
 FUNC_1(&VAR_7, FUNC_4(VAR_9));

 FUNC_0(VAR_5, FUNC_7(VAR_9));

 FUNC_3(VAR_9);
 FUNC_3(VAR_8);
}
