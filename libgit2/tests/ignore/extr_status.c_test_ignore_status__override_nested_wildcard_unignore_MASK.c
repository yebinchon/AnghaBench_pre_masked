
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int flags; int show; } ;
typedef TYPE_3__ git_status_options ;
typedef int git_status_list ;
struct TYPE_11__ {int status; TYPE_2__* index_to_workdir; } ;
typedef TYPE_4__ git_status_entry ;
typedef int git_repository ;
struct TYPE_8__ {int path; } ;
struct TYPE_9__ {TYPE_1__ old_file; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 TYPE_4__* FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,TYPE_3__*) ;

void FUNC_12(void)
{
 git_repository *VAR_5 = FUNC_6("empty_standard_repo");
 git_status_list *VAR_6;
 git_status_options VAR_7 = VAR_0;
 const git_status_entry *VAR_8;

 FUNC_5(FUNC_7("empty_standard_repo/dir", 0777));
 FUNC_5(FUNC_7("empty_standard_repo/dir/subdir", 0777));
 FUNC_4("empty_standard_repo/.gitignore", "a.test\n");
 FUNC_4("empty_standard_repo/dir/.gitignore", "!*.test\n");
 FUNC_4("empty_standard_repo/dir/subdir/.gitignore", "a.test\n");
 FUNC_4("empty_standard_repo/dir/a.test", "pong");
 FUNC_4("empty_standard_repo/dir/subdir/a.test", "pong");

 VAR_7.show = VAR_3;
 VAR_7.flags = VAR_1 | VAR_2;

 FUNC_5(FUNC_11(&VAR_6, VAR_5, &VAR_7));
 FUNC_3(4, FUNC_9(VAR_6));

 VAR_8 = FUNC_8(VAR_6, 0);
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_2(".gitignore", VAR_8->index_to_workdir->old_file.path);
 FUNC_1(VAR_4, VAR_8->status);

 VAR_8 = FUNC_8(VAR_6, 1);
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_2("dir/.gitignore", VAR_8->index_to_workdir->old_file.path);
 FUNC_1(VAR_4, VAR_8->status);

 VAR_8 = FUNC_8(VAR_6, 2);
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_2("dir/a.test", VAR_8->index_to_workdir->old_file.path);
 FUNC_1(VAR_4, VAR_8->status);

 VAR_8 = FUNC_8(VAR_6, 3);
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_2("dir/subdir/.gitignore", VAR_8->index_to_workdir->old_file.path);
 FUNC_1(VAR_4, VAR_8->status);

 FUNC_10(VAR_6);
}
