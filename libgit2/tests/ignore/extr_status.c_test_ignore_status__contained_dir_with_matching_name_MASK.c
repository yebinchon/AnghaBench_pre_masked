
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expected_entry_count; char const** expected_paths; unsigned int const* expected_statuses; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;



 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_5 (char*,char const**) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 static const char *VAR_5[] = {
  "empty_standard_repo/subdir_match/aaa/subdir_match/file",
  "empty_standard_repo/subdir_match/zzz_ignoreme",
  ((void*)0)
 };
 static const char *VAR_6[] = {
  "subdir_match/.gitignore",
  "subdir_match/aaa/subdir_match/file",
  "subdir_match/zzz_ignoreme",
 };
 static const unsigned int VAR_7[] = {
  128, 128, 129
 };
 git_status_options VAR_8 = VAR_0;
 status_entry_counts VAR_9;

 FUNC_5("empty_standard_repo", VAR_5);
 FUNC_2(
  "empty_standard_repo/subdir_match/.gitignore", "*_ignoreme\n");

 FUNC_7("subdir_match/aaa/subdir_match/file");
 FUNC_0("subdir_match/zzz_ignoreme");

 FUNC_6(&VAR_9, 0x0, sizeof(status_entry_counts));
 VAR_9.expected_entry_count = 3;
 VAR_9.expected_paths = VAR_6;
 VAR_9.expected_statuses = VAR_7;

 VAR_8.flags = VAR_1 | VAR_2;

 FUNC_3(FUNC_4(
  VAR_4, &VAR_8, VAR_3, &VAR_9));

 FUNC_1(VAR_9.expected_entry_count, VAR_9.entry_count);
 FUNC_1(0, VAR_9.wrong_status_flags_count);
 FUNC_1(0, VAR_9.wrong_sorted_path);
}
