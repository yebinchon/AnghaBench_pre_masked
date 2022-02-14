
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_10__ {int * baseline; int show; } ;
typedef TYPE_3__ git_status_options ;
typedef int git_status_list ;
struct TYPE_11__ {int status; TYPE_2__* index_to_workdir; } ;
typedef TYPE_4__ git_status_entry ;
typedef int git_repository ;
struct TYPE_8__ {int path; } ;
struct TYPE_9__ {TYPE_1__ old_file; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int **,int *) ;
 TYPE_4__* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *,TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*) ;

void FUNC_15(void)
{
 git_repository *VAR_4 = FUNC_7("empty_standard_repo");
 git_status_options VAR_5 = VAR_1;
 git_status_list *VAR_6;
 git_tree *VAR_7;
 const git_status_entry *VAR_8;

 FUNC_4("empty_standard_repo/file1", "ping");
 FUNC_14(VAR_4, "file1");

 FUNC_5(FUNC_8(&VAR_7, VAR_4));

 FUNC_4("empty_standard_repo/file2", "pong");
 FUNC_14(VAR_4, "file2");

 FUNC_6("empty_standard_repo/file2", "pyng");

 VAR_5.show = VAR_2;
 VAR_5.baseline = VAR_7;
 FUNC_5(FUNC_12(&VAR_6, VAR_4, &VAR_5));

 FUNC_3(1, FUNC_10(VAR_6));
 VAR_8 = FUNC_9(VAR_6, 0);
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_2("file2", VAR_8->index_to_workdir->old_file.path);
 FUNC_1(VAR_3 | VAR_0, VAR_8->status);

 FUNC_13(VAR_7);
 FUNC_11(VAR_6);
}
