
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_tree *VAR_4;

 VAR_3 = FUNC_2("testrepo");

 FUNC_0(FUNC_4(&VAR_4, VAR_3));

 FUNC_6((git_object *)VAR_4);
 FUNC_5(VAR_4);

 FUNC_1(
  "./testrepo/.gitattributes",
  "* text eol=lf\n");

 FUNC_3(VAR_1, VAR_0,
  &VAR_2);
}
