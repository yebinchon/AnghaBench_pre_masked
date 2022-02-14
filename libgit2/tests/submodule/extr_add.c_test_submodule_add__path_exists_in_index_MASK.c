
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_index ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **,int ,char*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int VAR_4 ;

void FUNC_9(void)
{
 git_index *VAR_5;
 git_submodule *VAR_6;
 git_buf VAR_7 = VAR_0;

 VAR_3 = FUNC_2("testrepo");

 FUNC_1(FUNC_4(&VAR_7, "subdirectory", "test.txt"));

 FUNC_1(FUNC_5(&VAR_5, VAR_3));

 FUNC_8(VAR_5, VAR_4, VAR_7.ptr, VAR_2);

 FUNC_0(FUNC_6(&VAR_6, VAR_3, "./", "subdirectory", 1), VAR_1);

 FUNC_7(VAR_6);
 FUNC_3(&VAR_7);
}
