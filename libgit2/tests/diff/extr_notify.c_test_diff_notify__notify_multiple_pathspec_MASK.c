
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ notify_expected ;


 int FUNC_0 (char**,int,TYPE_1__*,int) ;

void FUNC_1(void)
{
 char *VAR_0[] = {
  "staged_changes_cant_find_me",
  "subdir/modified_cant_find_me",
  "subdir/*",
  "staged*"
 };
 notify_expected VAR_1[] = {
  { "staged_changes_file_deleted", "staged*" },
  { "staged_changes_modified_file", "staged*" },
  { "staged_delete_modified_file", "staged*" },
  { "staged_new_file_deleted_file", "staged*" },
  { "staged_new_file_modified_file", "staged*" },
  { "subdir/deleted_file", "subdir/*" },
  { "subdir/modified_file", "subdir/*" },
  { "subdir/new_file", "subdir/*" },
  { ((void*)0), ((void*)0) }
 };

 FUNC_0(VAR_0, 4, VAR_1, 8);
}
