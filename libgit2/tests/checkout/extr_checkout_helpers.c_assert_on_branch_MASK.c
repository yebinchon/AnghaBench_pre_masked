
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

void FUNC_9(git_repository *VAR_3, const char *VAR_4)
{
 git_reference *VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_2(FUNC_6(&VAR_5, VAR_3, VAR_1));
 FUNC_0(FUNC_8(VAR_5) == VAR_2, VAR_4);

 FUNC_2(FUNC_4(&VAR_6, "refs/heads", VAR_4));
 FUNC_1(VAR_6.ptr, FUNC_7(VAR_5));

 FUNC_5(VAR_5);
 FUNC_3(&VAR_6);
}
