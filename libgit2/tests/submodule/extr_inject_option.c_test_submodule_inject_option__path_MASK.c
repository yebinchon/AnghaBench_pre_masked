
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 int VAR_3;
 git_submodule *VAR_4;
 git_buf VAR_5 = VAR_0;

 FUNC_2(FUNC_5(&VAR_5, FUNC_6(VAR_2), ".gitmodules"));
 FUNC_3(VAR_5.ptr,
      "[submodule \"naughty\"]\n"
      "    path = --something\n"
      "    url = blah.git\n");
 FUNC_4(&VAR_5);


 VAR_3 = 0;
 FUNC_2(FUNC_7(VAR_2, VAR_1, &VAR_3));
 FUNC_0(1, VAR_3);

 FUNC_2(FUNC_9(&VAR_4, VAR_2, "naughty"));
 FUNC_1("naughty", FUNC_10(VAR_4));
 FUNC_1("blah.git", FUNC_11(VAR_4));

 FUNC_8(VAR_4);
}
