
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expected_entry_count; char const** expected_paths; unsigned int const* expected_statuses; int entry_count; int wrong_status_flags_count; int wrong_sorted_path; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;



 TYPE_2__ VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int const,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (unsigned int*,int ,char*) ;
 int FUNC_7 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 unsigned int VAR_4;

 VAR_3 = FUNC_4("empty_standard_repo");

 FUNC_3(FUNC_5(
  "empty_standard_repo/a", 0775));
 FUNC_2(
  "empty_standard_repo/a/.gitignore", "*\n!.gitignore\n");
 FUNC_2(
  "empty_standard_repo/a/ignoreme", "I should be ignored\n");

 FUNC_9("a/.gitignore");
 FUNC_0("a/ignoreme");

 FUNC_3(FUNC_5(
  "empty_standard_repo/b", 0775));
 FUNC_2(
  "empty_standard_repo/b/.gitignore", "*\n!.gitignore\n");
 FUNC_2(
  "empty_standard_repo/b/ignoreme", "I should be ignored\n");

 FUNC_9("b/.gitignore");
 FUNC_0("b/ignoreme");


 FUNC_9("a/.gitignore");
 FUNC_0("a/ignoreme");



 FUNC_3(FUNC_6(&VAR_4, VAR_3, "a/.gitignore"));
 FUNC_1(128, (int)VAR_4);

 FUNC_3(FUNC_6(&VAR_4, VAR_3, "a/ignoreme"));
 FUNC_1(129, (int)VAR_4);

 FUNC_3(FUNC_6(&VAR_4, VAR_3, "b/.gitignore"));
 FUNC_1(128, (int)VAR_4);

 FUNC_3(FUNC_6(&VAR_4, VAR_3, "b/ignoreme"));
 FUNC_1(129, (int)VAR_4);

 {
  git_status_options VAR_5 = VAR_0;
  status_entry_counts VAR_6;
  static const char *VAR_7[] = {
   "a/.gitignore",
   "a/ignoreme",
   "b/.gitignore",
   "b/ignoreme",
  };
  static const unsigned int VAR_8[] = {
   128,
   129,
   128,
   129,
  };

  FUNC_8(&VAR_6, 0x0, sizeof(status_entry_counts));
  VAR_6.expected_entry_count = 4;
  VAR_6.expected_paths = VAR_7;
  VAR_6.expected_statuses = VAR_8;

  VAR_5.flags = VAR_1;

  FUNC_3(FUNC_7(
   VAR_3, &VAR_5, VAR_2, &VAR_6));

  FUNC_1(VAR_6.expected_entry_count, VAR_6.entry_count);
  FUNC_1(0, VAR_6.wrong_status_flags_count);
  FUNC_1(0, VAR_6.wrong_sorted_path);
 }
}
