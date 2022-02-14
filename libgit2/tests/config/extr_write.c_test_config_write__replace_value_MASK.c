
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int git_config ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,char*) ;
 int FUNC_5 (scalar_t__*,int *,char*) ;
 int FUNC_6 (int **,char*) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,int) ;

void FUNC_9(void)
{
 git_config *VAR_0;
 int VAR_1;
 int64_t VAR_2, VAR_3 = +9223372036854775803;


 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_1(FUNC_7(VAR_0, "core.dummy", 5));
 FUNC_3(VAR_0);

 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_1(FUNC_4(&VAR_1, VAR_0, "core.dummy"));
 FUNC_0(VAR_1 == 5);
 FUNC_3(VAR_0);

 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_1(FUNC_7(VAR_0, "core.dummy", 1));
 FUNC_3(VAR_0);

 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_1(FUNC_8(VAR_0, "core.verylong", VAR_3));
 FUNC_3(VAR_0);

 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_1(FUNC_5(&VAR_2, VAR_0, "core.verylong"));
 FUNC_0(VAR_2 == VAR_3);
 FUNC_3(VAR_0);

 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_2(FUNC_4(&VAR_1, VAR_0, "core.verylong"));
 FUNC_3(VAR_0);

 FUNC_1(FUNC_6(&VAR_0, "config9"));
 FUNC_1(FUNC_8(VAR_0, "core.verylong", 1));
 FUNC_3(VAR_0);
}
