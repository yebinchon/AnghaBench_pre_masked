
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char const** member_1; int* member_2; int member_0; } ;
typedef TYPE_1__ submodule_expectations ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ git_status_options ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_14__ {int path; } ;
typedef TYPE_4__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;



 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__ const**,int *) ;
 int FUNC_4 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int ,TYPE_1__*) ;

void FUNC_8(void)
{
 git_iterator *VAR_11;
 git_iterator_options VAR_12 = VAR_2;
 const git_index_entry *VAR_13;
 size_t VAR_14;
 static const char *VAR_15[] = {
  ".gitmodules",
  "just_a_dir/",
  "just_a_dir/contents",
  "just_a_file",
  "not-submodule/",
  "not-submodule/README.txt",
  "not/",
  "not/README.txt",
  "README.txt",
  "sm_added_and_uncommited",
  "sm_changed_file",
  "sm_changed_head",
  "sm_changed_index",
  "sm_changed_untracked_file",
  "sm_missing_commits",
  "sm_unchanged",
  ((void*)0)
 };
 static int VAR_16[] = {
  131 | 129,
  -1,
  132,
  132,
  128,
  -1,
  128,
  -1,
  132,
  130,
  129,
  129,
  129,
  129,
  129,
  132,
  0
 };
 submodule_expectations VAR_17 = { 0, VAR_15, VAR_16 };
 git_status_options VAR_18 = VAR_3;
 git_index *VAR_19;

 VAR_12.flags = VAR_0 | VAR_1;

 FUNC_1(FUNC_6(&VAR_19, VAR_10));
 FUNC_1(FUNC_4(&VAR_11, VAR_10, VAR_19, ((void*)0), &VAR_12));

 for (VAR_14 = 0; !FUNC_3(&VAR_13, VAR_11); ++VAR_14)
  FUNC_0(VAR_15[VAR_14], VAR_13->path);

 FUNC_5(VAR_11);
 FUNC_2(VAR_19);

 VAR_18.flags = VAR_6 |
  VAR_5 |
  VAR_4 |
  VAR_7 |
  VAR_8;

 FUNC_1(FUNC_7(
  VAR_10, &VAR_18, VAR_9, &VAR_17));
}
