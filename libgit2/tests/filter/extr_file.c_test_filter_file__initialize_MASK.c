
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int ,int *,int ,int *) ;

void FUNC_9(void)
{
 git_reference *VAR_3;
 git_commit *VAR_4;

 VAR_2 = FUNC_2("crlf");

 FUNC_0("crlf/.gitattributes",
  "*.txt text\n*.bin binary\n*.crlf text eol=crlf\n*.lf text eol=lf\n");

 FUNC_3(VAR_2, "core.autocrlf", 1);

 FUNC_1(FUNC_7(&VAR_3, VAR_2));
 FUNC_1(FUNC_6((git_object **)&VAR_4, VAR_3, VAR_0));
 FUNC_1(FUNC_8(VAR_2, (git_object *)VAR_4, VAR_1, ((void*)0)));

 FUNC_4(VAR_4);
 FUNC_5(VAR_3);
}
