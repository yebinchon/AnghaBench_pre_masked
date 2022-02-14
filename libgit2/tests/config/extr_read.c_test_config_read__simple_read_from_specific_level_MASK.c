
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int*,int *,char*) ;
 int FUNC_10 (int*,int *,char*) ;
 int FUNC_11 (scalar_t__*,int *,char*) ;
 int FUNC_12 (int *,int *,char*) ;
 int FUNC_13 (int **) ;
 int FUNC_14 (int **,int *,int ) ;

void FUNC_15(void)
{
 git_config *VAR_3, *VAR_4;
 int VAR_5;
 int64_t VAR_6, VAR_7 = +9223372036854775803;

 FUNC_5(FUNC_13(&VAR_3));
 FUNC_5(FUNC_7(VAR_3, FUNC_4("config/config18"),
  VAR_0, ((void*)0), 0));
 FUNC_5(FUNC_7(VAR_3, FUNC_4("config/config19"),
  VAR_1, ((void*)0), 0));

 FUNC_5(FUNC_14(&VAR_4, VAR_3, VAR_0));

 FUNC_5(FUNC_10(&VAR_5, VAR_4, "core.int32global"));
 FUNC_2(28, VAR_5);
 FUNC_5(FUNC_11(&VAR_6, VAR_4, "core.int64global"));
 FUNC_0(VAR_6 == VAR_7);
 FUNC_5(FUNC_9(&VAR_5, VAR_4, "core.boolglobal"));
 FUNC_1(1, VAR_5);
 FUNC_5(FUNC_12(&VAR_2, VAR_4, "core.stringglobal"));
 FUNC_3("I'm a global config value!", FUNC_6(&VAR_2));

 FUNC_8(VAR_4);
 FUNC_8(VAR_3);
}
