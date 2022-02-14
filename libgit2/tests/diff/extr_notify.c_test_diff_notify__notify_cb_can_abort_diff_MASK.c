
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char** strings; int count; } ;
struct TYPE_6__ {int flags; TYPE_1__ pathspec; int notify_cb; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int **,int ,int *,TYPE_2__*) ;

void FUNC_3(void)
{
 git_diff_options VAR_5 = VAR_2;
 git_diff *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);

 VAR_4 = FUNC_1("status");

 VAR_5.flags |= VAR_0 | VAR_1;
 VAR_5.notify_cb = VAR_3;
 VAR_5.pathspec.strings = &VAR_7;
 VAR_5.pathspec.count = 1;

 VAR_7 = "file_deleted";
 FUNC_0(
  FUNC_2(&VAR_6, VAR_4, ((void*)0), &VAR_5), -42);

 VAR_7 = "staged_changes_modified_file";
 FUNC_0(
  FUNC_2(&VAR_6, VAR_4, ((void*)0), &VAR_5), -42);
}
