
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,char const**,int,char const**) ;
 int VAR_3 ;
 int FUNC_3 (int **,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_2;
 git_tree *VAR_6;
 static const char *VAR_7[] = {
  "current_file",
  "file_deleted",
  "modified_file",
  "staged_changes",
  "staged_changes_file_deleted",
  "staged_changes_modified_file",
  "staged_delete_file_deleted",
  "staged_delete_modified_file",
  "subdir.txt",
  "subdir/current_file",
  "subdir/deleted_file",
  "subdir/modified_file",
  ((void*)0),
 };
 static const char *VAR_8[] = {
  "current_file",
  "file_deleted",
  "modified_file",
  "staged_changes",
  "staged_changes_file_deleted",
  "staged_changes_modified_file",
  "staged_delete_file_deleted",
  "staged_delete_modified_file",
  "subdir.txt",
  "subdir/",
  "subdir/current_file",
  "subdir/deleted_file",
  "subdir/modified_file",
  ((void*)0),
 };
 static const char *VAR_9[] = {
  "current_file",
  "file_deleted",
  "modified_file",
  "staged_changes",
  "staged_changes_file_deleted",
  "staged_changes_modified_file",
  "staged_delete_file_deleted",
  "staged_delete_modified_file",
  "subdir.txt",
  "subdir/",
  ((void*)0)
 };

 VAR_3 = FUNC_1("status");

 FUNC_0(FUNC_5(&VAR_6, VAR_3));


 FUNC_0(FUNC_3(&VAR_4, VAR_6, ((void*)0)));
 FUNC_2(VAR_4, 12, VAR_7, 12, VAR_7);
 FUNC_4(VAR_4);


 VAR_5.flags = VAR_1;

 FUNC_0(FUNC_3(&VAR_4, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 13, VAR_8, 13, VAR_8);
 FUNC_4(VAR_4);


 VAR_5.flags = VAR_0;

 FUNC_0(FUNC_3(&VAR_4, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 10, VAR_9, 13, VAR_8);
 FUNC_4(VAR_4);

 FUNC_6(VAR_6);
}
