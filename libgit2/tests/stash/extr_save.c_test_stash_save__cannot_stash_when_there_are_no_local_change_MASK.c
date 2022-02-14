
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *,int ,int ,int *,int ) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_8(void)
{
 git_index *VAR_5;
 git_oid VAR_6;

 FUNC_1(FUNC_5(&VAR_5, VAR_3));





 FUNC_1(FUNC_3(VAR_5, "what"));
 FUNC_1(FUNC_3(VAR_5, "where"));
 FUNC_1(FUNC_3(VAR_5, "who"));

 FUNC_2(((void*)0), VAR_3, VAR_4, 0, "Initial commit");
 FUNC_4(VAR_5);

 FUNC_0(VAR_0,
  FUNC_6(&VAR_6, VAR_3, VAR_4, ((void*)0), VAR_1));

 FUNC_7("stash/when");
 FUNC_0(VAR_0,
  FUNC_6(&VAR_6, VAR_3, VAR_4, ((void*)0), VAR_2));
}
