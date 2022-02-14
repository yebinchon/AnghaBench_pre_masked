
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 git_filebuf VAR_2 = VAR_1;
 char VAR_3[] = "test";

 FUNC_1(VAR_3, "libgit2 rocks\n");

 FUNC_2(FUNC_5(&VAR_2, VAR_3, VAR_0, 0666));
 FUNC_2(FUNC_6(&VAR_2, "%s\n", "libgit2 rocks"));
 FUNC_2(FUNC_4(&VAR_2));

 FUNC_0("libgit2 rocks\nlibgit2 rocks\n", 0, VAR_3);

 FUNC_3(FUNC_7(VAR_3));
}
