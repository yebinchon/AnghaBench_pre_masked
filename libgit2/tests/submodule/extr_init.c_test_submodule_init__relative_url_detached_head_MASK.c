
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_config ;
typedef int git_commit ;
struct TYPE_6__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const**,int *,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int **,int ,char*) ;
 char const* FUNC_19 (int *) ;
 int FUNC_20 () ;

void FUNC_21(void)
{
 git_submodule *VAR_3;
 git_config *VAR_4;
 git_buf VAR_5 = VAR_0;
 const char *VAR_6;
 git_reference *VAR_7 = ((void*)0);
 git_object *VAR_8 = ((void*)0);

 VAR_2 = FUNC_20();


 FUNC_2(FUNC_13(&VAR_7, VAR_2));
 FUNC_2(FUNC_11(&VAR_8, VAR_7, VAR_1));

 FUNC_2(FUNC_14(VAR_2, FUNC_5((git_commit *)VAR_8)));

 FUNC_0(FUNC_9(&VAR_5, FUNC_15(VAR_2)) > 0);
 FUNC_2(FUNC_4(&VAR_5, VAR_5.ptr, "testrepo.git"));

 FUNC_2(FUNC_18(&VAR_3, VAR_2, "testrepo"));


 FUNC_1("../testrepo.git", FUNC_19(VAR_3));


 FUNC_2(FUNC_17(VAR_3, 0));

 FUNC_2(FUNC_12(&VAR_4, VAR_2));

 FUNC_2(FUNC_7(&VAR_6, VAR_4, "submodule.testrepo.url"));
 FUNC_1(VAR_5.ptr, VAR_6);

 FUNC_3(&VAR_5);
 FUNC_6(VAR_4);
 FUNC_8(VAR_8);
 FUNC_10(VAR_7);
 FUNC_16(VAR_3);
}
