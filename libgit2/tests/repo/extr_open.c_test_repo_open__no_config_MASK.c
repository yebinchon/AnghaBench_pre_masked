
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*,char*,int *) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char*) ;
 int FUNC_15 (char*,int) ;

void FUNC_16(void)
{
 git_buf VAR_6 = VAR_0;
 git_repository *VAR_7;
 git_config *VAR_8;

 FUNC_1("empty_standard_repo");
 FUNC_2(FUNC_4(
  "empty_standard_repo/.gitted", "empty_standard_repo/.git"));


 FUNC_2(FUNC_9(
  "empty_standard_repo/.git/config", ((void*)0), VAR_5));


 FUNC_3(FUNC_15("alternate", 0777));
 FUNC_2(FUNC_11(&VAR_6, "alternate", ((void*)0)));
 FUNC_2(FUNC_10(
  VAR_4, VAR_1, VAR_6.ptr));
 FUNC_2(FUNC_10(
  VAR_4, VAR_2, VAR_6.ptr));
 FUNC_2(FUNC_10(
  VAR_4, VAR_3, VAR_6.ptr));

 FUNC_6(&VAR_6);

 FUNC_2(FUNC_14(&VAR_7, "empty_standard_repo"));
 FUNC_2(FUNC_12(&VAR_8, VAR_7));

 FUNC_2(FUNC_8(VAR_8, "test.set", "42"));

 FUNC_7(VAR_8);
 FUNC_13(VAR_7);
 FUNC_0("empty_standard_repo");

 FUNC_5();
}
