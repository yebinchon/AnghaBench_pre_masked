
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_4__ {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*) ;
 TYPE_1__ VAR_5 ;

void FUNC_10(void)
{
 git_repository *VAR_6;
 git_config *VAR_7, *VAR_8;

 FUNC_0(FUNC_2(
  &VAR_5, "%c%s", VAR_4, "dummy"));

 FUNC_0(FUNC_6(
  VAR_3, VAR_0, VAR_5.ptr));
 FUNC_0(FUNC_6(
  VAR_3, VAR_1, VAR_5.ptr));
 FUNC_0(FUNC_6(
  VAR_3, VAR_2, VAR_5.ptr));

 FUNC_1(&VAR_5);

 FUNC_0(FUNC_9(&VAR_6, "empty_standard_repo"));
 FUNC_0(FUNC_7(&VAR_7, VAR_6));
 FUNC_0(FUNC_4(
  &VAR_8, VAR_7, VAR_0));

 FUNC_0(FUNC_5(VAR_8, "test.set", "42"));

 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
 FUNC_8(VAR_6);
}
