
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
typedef int git_repository ;
typedef int git_config ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (TYPE_1__*,char*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,char*) ;
 int FUNC_17 (char*,char*) ;

void FUNC_18(void)
{

 git_buf VAR_4 = VAR_0;
 git_repository *VAR_5;
 git_config *VAR_6;
 int32_t VAR_7;

 FUNC_3("empty_standard_repo");


 FUNC_2(FUNC_11("home", 0777));
 FUNC_1("home/.gitconfig.linked", "[global]\ntest = 4567\n");
 FUNC_4(FUNC_17(".gitconfig.linked", "home/.gitconfig"));
 FUNC_2(FUNC_14(&VAR_4, "home", ((void*)0)));
 FUNC_2(FUNC_13(VAR_2, VAR_1, VAR_4.ptr));

 FUNC_2(FUNC_16(&VAR_5, "empty_standard_repo"));
 FUNC_2(FUNC_10(&VAR_6));
 FUNC_2(FUNC_9(&VAR_7, VAR_6, "global.test"));
 FUNC_0(4567, VAR_7);

 FUNC_8(VAR_6);
 FUNC_15(VAR_5);
 FUNC_2(FUNC_12(FUNC_6(&VAR_4), ((void*)0), VAR_3));
 FUNC_5();
 FUNC_7(&VAR_4);

}
