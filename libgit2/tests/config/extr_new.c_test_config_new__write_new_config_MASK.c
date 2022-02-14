
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
 git_config *VAR_2;
 git_buf VAR_3 = VAR_0;

 FUNC_1(VAR_1, "");
 FUNC_2(FUNC_8(&VAR_2, VAR_1));

 FUNC_2(FUNC_9(VAR_2, "color.ui", "auto"));
 FUNC_2(FUNC_9(VAR_2, "core.editor", "ed"));

 FUNC_6(VAR_2);

 FUNC_2(FUNC_8(&VAR_2, VAR_1));

 FUNC_2(FUNC_7(&VAR_3, VAR_2, "color.ui"));
 FUNC_0("auto", FUNC_4(&VAR_3));
 FUNC_3(&VAR_3);
 FUNC_2(FUNC_7(&VAR_3, VAR_2, "core.editor"));
 FUNC_0("ed", FUNC_4(&VAR_3));

 FUNC_5(&VAR_3);
 FUNC_6(VAR_2);

 FUNC_10(VAR_1);
}
