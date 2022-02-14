
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int *,int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int*,int *,char*) ;
 scalar_t__ FUNC_6 (int **) ;
 scalar_t__ FUNC_7 (int **,int *,int ) ;
 scalar_t__ FUNC_8 (int **,char*) ;
 scalar_t__ FUNC_9 (int *,char*,int) ;

void FUNC_10(void)
{
 git_config *VAR_3, *VAR_4;
 int32_t VAR_5;

 FUNC_1(FUNC_8(&VAR_3, "config15"));
 FUNC_1(FUNC_5(&VAR_5, VAR_3, "core.dummy2"));
 FUNC_0(VAR_5 == 7);
 FUNC_4(VAR_3);

 FUNC_1(FUNC_6(&VAR_3));
 FUNC_1(FUNC_2(VAR_3, "config9",
  VAR_1, ((void*)0), 0));
 FUNC_1(FUNC_2(VAR_3, "config15",
  VAR_0, ((void*)0), 0));

 FUNC_1(FUNC_7(&VAR_4, VAR_3, VAR_0));

 FUNC_1(FUNC_3(VAR_4, "core.dummy2"));
 FUNC_4(VAR_3);

 FUNC_1(FUNC_8(&VAR_3, "config15"));
 FUNC_0(FUNC_5(&VAR_5, VAR_3, "core.dummy2") == VAR_2);
 FUNC_1(FUNC_9(VAR_3, "core.dummy2", 7));

 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
}
