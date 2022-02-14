
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
typedef int git_config ;



 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_11(void)
{
 git_status_options VAR_7 = VAR_0;
 status_entry_counts VAR_8;
 static const char *VAR_9[] = {
  "dir/.gitignore",
  "dir/a/ignore_me",
  "dir/b/ignore_me",
  "dir/ignore_me",
  "ignore_also/file",
  "ignore_me",
  "test/.gitignore",
  "test/ignore_me/and_me/file",
  "test/ignore_me/file",
  "test/ignore_me/file2",
 };
 static const unsigned int VAR_10[] = {
  128, 128, 128,
  129, 129, 129,
  128, 128, 128, 128,
 };

 FUNC_9(VAR_6, VAR_5);

 FUNC_1();
 FUNC_2("home/.gitignore", "/ignore_me\n");
 {
  git_config *VAR_11;
  FUNC_3(FUNC_7(&VAR_11, VAR_4));
  FUNC_3(FUNC_6(
   VAR_11, "core.excludesfile", "~/.gitignore"));
  FUNC_5(VAR_11);
 }

 FUNC_4("empty_standard_repo/.git/info/exclude", "/ignore_also\n");
 FUNC_4("empty_standard_repo/dir/.gitignore", "/ignore_me\n");
 FUNC_4("empty_standard_repo/test/.gitignore", "/and_me\n");

 FUNC_10(&VAR_8, 0x0, sizeof(status_entry_counts));
 VAR_8.expected_entry_count = 10;
 VAR_8.expected_paths = VAR_9;
 VAR_8.expected_statuses = VAR_10;

 VAR_7.flags = VAR_1 | VAR_2;

 FUNC_3(FUNC_8(
  VAR_4, &VAR_7, VAR_3, &VAR_8));

 FUNC_0(VAR_8.expected_entry_count, VAR_8.entry_count);
 FUNC_0(0, VAR_8.wrong_status_flags_count);
 FUNC_0(0, VAR_8.wrong_sorted_path);
}
