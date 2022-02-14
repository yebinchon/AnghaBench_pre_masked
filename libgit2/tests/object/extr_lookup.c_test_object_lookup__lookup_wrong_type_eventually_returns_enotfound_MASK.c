
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 int FUNC_4 (int *,char const*) ;

void FUNC_5(void)
{
 const char *VAR_4 = "e90810b8df3e80c413d903f631643c716887138d";
 git_oid VAR_5;
 git_object *VAR_6;

 FUNC_1(FUNC_4(&VAR_5, VAR_4));

 FUNC_1(FUNC_3(&VAR_6, VAR_3, &VAR_5, VAR_1));
 FUNC_2(VAR_6);

 FUNC_0(
  VAR_0, FUNC_3(&VAR_6, VAR_3, &VAR_5, VAR_2));
}
