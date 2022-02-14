
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,char const*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(
 const char *VAR_4, const char *VAR_5)
{
 git_reference *VAR_6;
 git_buf VAR_7 = VAR_1;

 FUNC_1(FUNC_2(&VAR_6, VAR_2, VAR_5, VAR_0));

 FUNC_1(FUNC_5(&VAR_7, "refs/heads/"));
 FUNC_1(FUNC_4(&VAR_7, VAR_4));
 FUNC_0(VAR_7.ptr, FUNC_9(VAR_6));

 FUNC_1(
  FUNC_7(FUNC_10(VAR_6), FUNC_6(VAR_3)));

 FUNC_8(VAR_6);
 FUNC_3(&VAR_7);
}
