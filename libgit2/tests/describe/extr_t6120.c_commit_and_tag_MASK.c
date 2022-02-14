
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_time_t ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int,char const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char const*,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(
 git_time_t *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 git_index *VAR_4;
 git_oid VAR_5;
 git_reference *VAR_6;

 FUNC_1(FUNC_7(&VAR_4, VAR_0));

 FUNC_0("describe/file", "\n");

 FUNC_1(FUNC_3(VAR_4, "file"));
 FUNC_1(FUNC_4(VAR_4));

 *VAR_1 += 10;
 FUNC_2(&VAR_5, VAR_0, ((void*)0), *VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(FUNC_5(&VAR_6, VAR_0, VAR_3, &VAR_5, 0, ((void*)0)));
 FUNC_6(VAR_6);
}
