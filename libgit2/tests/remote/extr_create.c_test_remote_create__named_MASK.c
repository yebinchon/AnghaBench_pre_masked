
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_remote ;
typedef int git_config ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const**,int *,char*) ;
 int FUNC_7 (int **,int ,char*,char*) ;
 int FUNC_8 (int *) ;
 char const* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char const* FUNC_11 (int *) ;
 int FUNC_12 (int **,int ) ;

void FUNC_13(void)
{
 git_remote *VAR_2;
 git_config *VAR_3;
 const char *VAR_4;

 size_t VAR_5 = FUNC_4(VAR_1, "remote\\.");

 FUNC_3(FUNC_7(&VAR_2, VAR_1, "valid-name", VAR_0));

 FUNC_2(FUNC_9(VAR_2), "valid-name");
 FUNC_2(FUNC_11(VAR_2), VAR_0);
 FUNC_1(FUNC_10(VAR_2), VAR_1);

 FUNC_3(FUNC_12(&VAR_3, VAR_1));

 FUNC_3(FUNC_6(&VAR_4, VAR_3, "remote.valid-name.fetch"));
 FUNC_2(VAR_4, "+refs/heads/*:refs/remotes/valid-name/*");

 FUNC_3(FUNC_6(&VAR_4, VAR_3, "remote.valid-name.url"));
 FUNC_2(VAR_4, VAR_0);

 FUNC_0(VAR_5 + 2, FUNC_4(VAR_1, "remote\\."));

 FUNC_5(VAR_3);
 FUNC_8(VAR_2);
}
