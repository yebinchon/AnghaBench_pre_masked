
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_config ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const**,int *,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int ,char*,int ) ;
 char const* FUNC_14 (int *) ;
 int FUNC_15 () ;

void FUNC_16(void)
{
 git_submodule *VAR_2;
 git_config *VAR_3;
 git_buf VAR_4 = VAR_0;
 const char *VAR_5;

 VAR_1 = FUNC_15();

 FUNC_0(FUNC_7(&VAR_4, FUNC_9(VAR_1)) > 0);
 FUNC_2(FUNC_4(&VAR_4, VAR_4.ptr, "testrepo.git"));


 FUNC_2(FUNC_13(VAR_1, "testrepo", VAR_4.ptr));

 FUNC_2(FUNC_12(&VAR_2, VAR_1, "testrepo"));


 FUNC_1(VAR_4.ptr, FUNC_14(VAR_2));


 FUNC_2(FUNC_11(VAR_2, 0));

 FUNC_2(FUNC_8(&VAR_3, VAR_1));

 FUNC_2(FUNC_6(&VAR_5, VAR_3, "submodule.testrepo.url"));
 FUNC_1(VAR_4.ptr, VAR_5);

 FUNC_3(&VAR_4);
 FUNC_5(VAR_3);
 FUNC_10(VAR_2);
}
