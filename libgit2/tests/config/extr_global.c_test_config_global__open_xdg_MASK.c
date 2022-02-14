
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *,char const*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (int *,char const*,char const*) ;

void FUNC_10(void)
{
 git_config *VAR_1, *VAR_2, *VAR_3;
 const char *VAR_4 = "teststring";
 const char *VAR_5 = "this.variable";
 git_buf VAR_6 = {0};

 FUNC_1("xdg/git/config", "# XDG config\n[core]\n  test = 1\n");

 FUNC_2(FUNC_6(&VAR_1));
 FUNC_2(FUNC_8(&VAR_2, VAR_1, VAR_0));
 FUNC_2(FUNC_7(&VAR_3, VAR_1));

 FUNC_2(FUNC_9(VAR_2, VAR_5, VAR_4));
 FUNC_2(FUNC_5(&VAR_6, VAR_3, VAR_5));
 FUNC_0(VAR_4, VAR_6.ptr);

 FUNC_3(&VAR_6);
 FUNC_4(VAR_3);
 FUNC_4(VAR_2);
 FUNC_4(VAR_1);
}
