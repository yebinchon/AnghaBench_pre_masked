
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char const*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int **,int ,char const*,int ,int ,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{

 git_reference *VAR_3, *VAR_4, *VAR_5;
 git_oid VAR_6;

 const char *VAR_7 = "deep/rooted/tracker";

 FUNC_2(&VAR_6, VAR_1);

 FUNC_1(FUNC_6(&VAR_3, VAR_2, VAR_7, VAR_0, 0, ((void*)0)));
 FUNC_1(FUNC_4(&VAR_4, VAR_2, VAR_7));
 FUNC_1(FUNC_5(&VAR_5, VAR_4));
 FUNC_0(&VAR_6, FUNC_7(VAR_5));

 FUNC_3(VAR_3);
 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
}
