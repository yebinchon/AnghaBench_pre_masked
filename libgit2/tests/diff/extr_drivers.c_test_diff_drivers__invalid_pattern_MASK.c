
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int **,int ) ;

void FUNC_11(void)
{
 git_config *VAR_2;
 git_index *VAR_3;
 git_diff *VAR_4;
 git_patch *VAR_5;
 git_diff_options VAR_6 = VAR_0;

 VAR_1 = FUNC_2("userdiff");
 FUNC_0("userdiff/.gitattributes", "*.storyboard diff=storyboard\n");

 FUNC_1(FUNC_9(&VAR_2, VAR_1));
 FUNC_1(FUNC_3(VAR_2, "diff.storyboard.xfuncname", "<!--(.*?)-->"));

 FUNC_0("userdiff/dummy.storyboard", "");
 FUNC_1(FUNC_10(&VAR_3, VAR_1));
 FUNC_1(FUNC_6(VAR_3, "dummy.storyboard"));
 FUNC_0("userdiff/dummy.storyboard", "some content\n");

 FUNC_1(FUNC_5(&VAR_4, VAR_1, ((void*)0), &VAR_6));
 FUNC_1(FUNC_8(&VAR_5, VAR_4, 0));

 FUNC_7(VAR_5);
 FUNC_4(VAR_4);
}
