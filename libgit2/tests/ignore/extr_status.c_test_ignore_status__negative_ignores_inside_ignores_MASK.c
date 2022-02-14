
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
 int VAR_3 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_6 (char*,char const**) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (char*) ;

void FUNC_9(void)
{
 static const char *VAR_6[] = {
  "empty_standard_repo/top/mid/btm/tracked",
  "empty_standard_repo/top/mid/btm/untracked",
  "empty_standard_repo/zoo/bar",
  "empty_standard_repo/zoo/foo/bar",
  ((void*)0)
 };

 FUNC_6("empty_standard_repo", VAR_6);
 FUNC_3(
  "empty_standard_repo/.gitignore",
  "top\n"
  "!top/mid/btm\n"
  "zoo/*\n"
  "!zoo/bar\n"
  "!zoo/foo/bar\n");
 FUNC_0("top/mid/btm/tracked");

 {
  git_status_options VAR_7 = VAR_0;
  status_entry_counts VAR_8;
  static const char *VAR_9[] = {
   ".gitignore", "top/mid/btm/tracked", "top/mid/btm/untracked",
   "zoo/bar", "zoo/foo/bar",
  };
  static const unsigned int VAR_10[] = {
   128, 129, 130,
   128, 130,
  };

  FUNC_7(&VAR_8, 0x0, sizeof(status_entry_counts));
  VAR_8.expected_entry_count = 5;
  VAR_8.expected_paths = VAR_9;
  VAR_8.expected_statuses = VAR_10;
  VAR_7.flags = VAR_1 |
   VAR_2 |
   VAR_3;
  FUNC_4(FUNC_5(
   VAR_5, &VAR_7, VAR_4, &VAR_8));

  FUNC_2(VAR_8.expected_entry_count, VAR_8.entry_count);
  FUNC_2(0, VAR_8.wrong_status_flags_count);
  FUNC_2(0, VAR_8.wrong_sorted_path);
 }

 FUNC_1("top/mid/btm/tracked");
 FUNC_1("top/mid/btm/untracked");
 FUNC_8("foo/bar");
}
