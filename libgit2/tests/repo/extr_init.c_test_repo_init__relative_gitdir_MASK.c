
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* workdir_path; int flags; } ;
typedef TYPE_1__ git_repository_init_options ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int *,char*,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{
 git_repository_init_options VAR_6 = VAR_3;
 git_buf VAR_7 = VAR_0;

 VAR_6.workdir_path = "../c_wd";
 VAR_6.flags =
  VAR_1 |
  VAR_4 |
  VAR_2;


 FUNC_3(FUNC_8(&VAR_5, "root/b/my_repository", &VAR_6));

 FUNC_1(!FUNC_5(FUNC_12(VAR_5), "root/b/c_wd/"));
 FUNC_1(!FUNC_5(FUNC_11(VAR_5), "root/b/my_repository/"));
 FUNC_1(!FUNC_9(VAR_5));
 FUNC_1(FUNC_10(VAR_5));




 FUNC_0(VAR_5, "core.worktree", "../c_wd/");


 FUNC_3(FUNC_7(&VAR_7, "root/b/c_wd/.git"));
 FUNC_2("gitdir: ../my_repository/", VAR_7.ptr);

 FUNC_6(&VAR_7);
 FUNC_4("root");
}
