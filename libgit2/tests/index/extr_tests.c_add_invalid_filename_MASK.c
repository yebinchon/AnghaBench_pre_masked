
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_index ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,char const*) ;
 int FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(git_repository *VAR_1, const char *VAR_2)
{
 git_index *VAR_3;
 git_buf VAR_4 = VAR_0;

 FUNC_3(FUNC_10(&VAR_3, VAR_1));
 FUNC_0(FUNC_8(VAR_3) == 0);

 FUNC_6(&VAR_4, "./invalid", VAR_2);

 FUNC_2(VAR_4.ptr, ((void*)0));
 FUNC_1(FUNC_7(VAR_3, VAR_2));
 FUNC_4(FUNC_11(VAR_4.ptr));

 FUNC_0(FUNC_8(VAR_3) == 0);

 FUNC_5(&VAR_4);
 FUNC_9(VAR_3);
}
