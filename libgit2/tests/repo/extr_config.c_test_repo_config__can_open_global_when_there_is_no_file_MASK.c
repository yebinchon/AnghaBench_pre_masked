
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_2__ {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char*) ;
 TYPE_1__ VAR_4 ;

void FUNC_8(void)
{
 git_repository *VAR_5;
 git_config *VAR_6, *VAR_7;

 FUNC_0(FUNC_4(
  VAR_3, VAR_0, VAR_4.ptr));
 FUNC_0(FUNC_4(
  VAR_3, VAR_1, VAR_4.ptr));
 FUNC_0(FUNC_4(
  VAR_3, VAR_2, VAR_4.ptr));

 FUNC_0(FUNC_7(&VAR_5, "empty_standard_repo"));
 FUNC_0(FUNC_5(&VAR_6, VAR_5));
 FUNC_0(FUNC_2(
  &VAR_7, VAR_6, VAR_0));

 FUNC_0(FUNC_3(VAR_7, "test.set", "42"));

 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 FUNC_6(VAR_5);
}
