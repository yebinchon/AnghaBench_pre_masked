
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(void)
{
 git_config *VAR_1;

 FUNC_3("attr/.gitignore",
  "/case\n"
  "!/Case/\n");

 FUNC_2(FUNC_6(&VAR_1, VAR_0));
 FUNC_2(FUNC_5(VAR_1, "core.ignorecase", 1));

 FUNC_4(FUNC_7("attr/case", 0755));
 FUNC_1("attr/case/file", "content");

 FUNC_0(0, "case/file");
}
