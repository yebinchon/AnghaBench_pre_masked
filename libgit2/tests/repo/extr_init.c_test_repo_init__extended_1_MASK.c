
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {int flags; char* workdir_path; char* description; char* initial_head; char* origin_url; int mode; } ;
typedef TYPE_1__ git_repository_init_options ;
typedef int git_remote ;
typedef int git_reference ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,char*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,char*,TYPE_1__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

void FUNC_23(void)
{
 git_reference *VAR_7;
 git_remote *VAR_8;
 struct stat VAR_9;
 git_repository_init_options VAR_10 = VAR_3;

 VAR_10.flags = VAR_1 |
  VAR_2;
 VAR_10.mode = VAR_4;
 VAR_10.workdir_path = "../c_wd";
 VAR_10.description = "Awesomest test repository evah";
 VAR_10.initial_head = "development";
 VAR_10.origin_url = "https://github.com/libgit2/libgit2.git";

 FUNC_4(FUNC_18(&VAR_6, "root/b/c.git", &VAR_10));

 FUNC_1(!FUNC_6(FUNC_22(VAR_6), "/c_wd/"));
 FUNC_1(!FUNC_6(FUNC_21(VAR_6), "/c.git/"));
 FUNC_1(FUNC_7("root/b/c_wd/.git"));
 FUNC_1(!FUNC_19(VAR_6));

 FUNC_1(!FUNC_20(VAR_6));

 FUNC_4(FUNC_8(FUNC_21(VAR_6), &VAR_9));
 FUNC_1(FUNC_0(VAR_9.st_mode));
 if (FUNC_5())
  FUNC_1((VAR_5 & VAR_9.st_mode) == VAR_5);
 else
  FUNC_1((VAR_5 & VAR_9.st_mode) == 0);

 FUNC_4(FUNC_10(&VAR_7, VAR_6, "HEAD"));
 FUNC_1(FUNC_12(VAR_7) == VAR_0);
 FUNC_2("refs/heads/development", FUNC_11(VAR_7));
 FUNC_9(VAR_7);

 FUNC_4(FUNC_14(&VAR_8, VAR_6, "origin"));
 FUNC_2("origin", FUNC_15(VAR_8));
 FUNC_2(VAR_10.origin_url, FUNC_16(VAR_8));
 FUNC_13(VAR_8);

 FUNC_17(VAR_6);
 FUNC_3("root");
}
