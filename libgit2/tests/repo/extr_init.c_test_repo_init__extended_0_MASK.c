
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository_init_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
 git_repository_init_options VAR_2 = VAR_0;


 FUNC_1(FUNC_6(&VAR_1, "extended", &VAR_2));


 FUNC_2(FUNC_5("extended", 0775, 0));
 FUNC_2(FUNC_6(&VAR_1, "extended", &VAR_2));

 FUNC_0(!FUNC_4(FUNC_10(VAR_1), "/extended/"));
 FUNC_0(!FUNC_4(FUNC_9(VAR_1), "/extended/.git/"));
 FUNC_0(!FUNC_7(VAR_1));
 FUNC_0(FUNC_8(VAR_1));

 FUNC_3("extended");
}
